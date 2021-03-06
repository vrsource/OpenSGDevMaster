// OpenSG Tutorial Example: Hierarchical Transformation
//
// This example demonstrates how transformations accumulate through the graph.
//

#ifdef OSG_BUILD_ACTIVE
// Headers
#include <OSGGLUT.h>
#include <OSGConfig.h>
#include <OSGSimpleGeometry.h>
#include <OSGGLUTWindow.h>
#include <OSGSimpleSceneManager.h>
#include <OSGBaseFunctions.h>
#include <OSGTransform.h>
#include <OSGGroup.h>
#else
// Headers
#include <OpenSG/OSGGLUT.h>
#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/OSGGLUTWindow.h>
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGBaseFunctions.h>
#include <OpenSG/OSGTransform.h>
#include <OpenSG/OSGGroup.h>
#endif


// number of copies to create
const OSG::UInt16 ncopies = 10;

// just use a single transformation that is shared
OSG::TransformRefPtr trans;


// The SimpleSceneManager to manage simple applications
OSG::SimpleSceneManager *mgr;

// forward declaration so we can have the interesting stuff upfront
int setupGLUT( int *argc, char *argv[] );

// redraw the window
void display( void )
{
    OSG::Matrix m;
    OSG::Real32 t = glutGet(GLUT_ELAPSED_TIME );
    
    m.setTransform(OSG::Vec3f(0, .9f, 0),
                   OSG::Quaternion( OSG::Vec3f(1,1,0), 
                                    OSG::osgSin(t / 1000.f) / 2.f));
    
    // set the transform's matrix
    trans->setMatrix(m);

    OSG::commitChanges();
     
    mgr->redraw();
}

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    OSG::osgInit(argc,argv);

    // GLUT init
    int winid = setupGLUT(&argc, argv);

    // open a new scope, because the pointers below should go out of scope
    // before entering glutMainLoop.
    // Otherwise OpenSG will complain about objects being alive after shutdown.
    {
        // the connection between GLUT and OpenSG
        OSG::GLUTWindowRefPtr gwin= OSG::GLUTWindow::create();
        gwin->setGlutId(winid);
        gwin->init();
    
        // create the scene
    
        /*
            Transformation accumulate through the graph, i.e. all nodes below
            a Transformation are influenced by it, even other Transformations.
            
            This can be used to create models of objects that move together and
            in relation to each other, the prime examples being a robot arm and
            a planetary system. This example does something not quite unlike a
            robot arm.
        */    
    
        // create the scene
        
        /*
        This time the graph is not wide, but deep, i.e. every Transformation
        only has two children, a Geometry and another transformation.
        The end resulting motion of the geometry is the accumulation of
        all the Transformations above it.
        */
        
        // use a cylinder this time
        OSG::GeometryRefPtr cyl = OSG::makeCylinderGeo( 1, .3f, 8, true, true, true );
        
        // the single transformation Core used
        trans = OSG::Transform::create();
        
        // setup an intial transformation
        OSG::Matrix m;
        m.setTransform(OSG::Vec3f(0, .9f, 0));
    
        trans->setMatrix(m);
        
        OSG::NodeRefPtr last = NULL;
        
        // create the copied transformations and their geometry nodes
        for(OSG::UInt16 i = 1; i < ncopies; ++i)
        {
            // create the shared Geometry
            OSG::NodeRefPtr geonode = OSG::Node::create();
            geonode->setCore(cyl);
    
            // add a transformation to the Geometry
            OSG::NodeRefPtr transnode = OSG::Node::create();
    
            transnode->setCore (trans  );
            transnode->addChild(geonode);
            
            if(last != NULL)
            {
                transnode->addChild(last);       
            }
        
            last = transnode;
        }
    
        OSG::NodeRefPtr scene = last;
    
        OSG::commitChanges();
    
        // create the SimpleSceneManager helper
        mgr = new OSG::SimpleSceneManager;
    
        // tell the manager what to manage
        mgr->setWindow(gwin );
        mgr->setRoot  (scene);
    
        // show the whole scene
        mgr->showAll();
    }

    // GLUT main loop
    glutMainLoop();

    return 0;
}

//
// GLUT callback functions
//

// react to size changes
void reshape(int w, int h)
{
    mgr->resize(w, h);
    glutPostRedisplay();
}

// react to mouse button presses
void mouse(int button, int state, int x, int y)
{
    if (state)
        mgr->mouseButtonRelease(button, x, y);
    else
        mgr->mouseButtonPress(button, x, y);
        
    glutPostRedisplay();
}

// react to mouse motions with pressed buttons
void motion(int x, int y)
{
    mgr->mouseMove(x, y);
    glutPostRedisplay();
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:    
        {
            // clean up global variables
            trans = NULL;
            delete mgr;
        
            OSG::osgExit();
            exit(0);
        }
        break;

        case 's':
        {
            mgr->setStatistics(!mgr->getStatistics());
        }
        break;
    }
}

// setup the GLUT library which handles the windows for us
int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    
    int winid = glutCreateWindow("OpenSG");
    
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    // call the redraw function whenever there's nothing else to do
    glutIdleFunc(display);

    return winid;
}
