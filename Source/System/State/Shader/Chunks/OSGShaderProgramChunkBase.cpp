/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class ShaderProgramChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // GeometryInputType default header
#include <OSGGL.h>                        // GeometryOutputType default header

#include <OSGShaderProgram.h> // VertexShader Class
#include <OSGShaderProgram.h> // GeometryShader Class
#include <OSGShaderProgram.h> // FragmentShader Class

#include "OSGShaderProgramChunkBase.h"
#include "OSGShaderProgramChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderProgramChunk
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ShaderProgram * ShaderProgramChunkBase::_mfVertexShader
    fragment program object
*/

/*! \var ShaderProgram * ShaderProgramChunkBase::_mfGeometryShader
    fragment program object
*/

/*! \var ShaderProgram * ShaderProgramChunkBase::_mfFragmentShader
    fragment program object
*/

/*! \var UInt32          ShaderProgramChunkBase::_sfGeometryVerticesOut
    
*/

/*! \var GLenum          ShaderProgramChunkBase::_sfGeometryInputType
    
*/

/*! \var GLenum          ShaderProgramChunkBase::_sfGeometryOutputType
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderProgramChunk *>::_type("ShaderProgramChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderProgramChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderProgramChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderProgramChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderProgramChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecShaderProgramPtr::Description(
        MFUnrecShaderProgramPtr::getClassType(),
        "vertexShader",
        "fragment program object\n",
        VertexShaderFieldId, VertexShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramChunk::editHandleVertexShader),
        static_cast<FieldGetMethodSig >(&ShaderProgramChunk::getHandleVertexShader));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecShaderProgramPtr::Description(
        MFUnrecShaderProgramPtr::getClassType(),
        "geometryShader",
        "fragment program object\n",
        GeometryShaderFieldId, GeometryShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramChunk::editHandleGeometryShader),
        static_cast<FieldGetMethodSig >(&ShaderProgramChunk::getHandleGeometryShader));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecShaderProgramPtr::Description(
        MFUnrecShaderProgramPtr::getClassType(),
        "fragmentShader",
        "fragment program object\n",
        FragmentShaderFieldId, FragmentShaderFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramChunk::editHandleFragmentShader),
        static_cast<FieldGetMethodSig >(&ShaderProgramChunk::getHandleFragmentShader));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "geometryVerticesOut",
        "",
        GeometryVerticesOutFieldId, GeometryVerticesOutFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramChunk::editHandleGeometryVerticesOut),
        static_cast<FieldGetMethodSig >(&ShaderProgramChunk::getHandleGeometryVerticesOut));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "geometryInputType",
        "",
        GeometryInputTypeFieldId, GeometryInputTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramChunk::editHandleGeometryInputType),
        static_cast<FieldGetMethodSig >(&ShaderProgramChunk::getHandleGeometryInputType));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "geometryOutputType",
        "",
        GeometryOutputTypeFieldId, GeometryOutputTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramChunk::editHandleGeometryOutputType),
        static_cast<FieldGetMethodSig >(&ShaderProgramChunk::getHandleGeometryOutputType));

    oType.addInitialDesc(pDesc);
}


ShaderProgramChunkBase::TypeObject ShaderProgramChunkBase::_type(
    ShaderProgramChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderProgramChunkBase::createEmptyLocal),
    ShaderProgramChunk::initMethod,
    ShaderProgramChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderProgramChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderProgramChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"vertexShader\"\n"
    "\t type=\"ShaderProgram\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\n"
    "     pushToFieldAs=\"addVertexShader\"\n"
    "     removeFromMFieldIndexAs=\"subVertexShader\"\n"
    "     clearFieldAs=\"clearVertexShaders\"        \n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"geometryShader\"\n"
    "\t type=\"ShaderProgram\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\n"
    "     pushToFieldAs=\"addGeometryShader\"\n"
    "     removeFromMFieldIndexAs=\"subGeometryShader\"\n"
    "     clearFieldAs=\"clearGeometryShaders\"        \n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"fragmentShader\"\n"
    "\t type=\"ShaderProgram\"\n"
    "\t cardinality=\"multi\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "     category=\"pointer\"\n"
    "\n"
    "     pushToFieldAs=\"addFragmentShader\"\n"
    "     removeFromMFieldIndexAs=\"subFragmentShader\"\n"
    "     clearFieldAs=\"clearFragmentShaders\"        \n"
    "\t >\n"
    "\tfragment program object\n"
    "  </Field>\n"
    "\n"
    "  <Field\n"
    "\t name=\"geometryVerticesOut\"\n"
    "\t type=\"UInt32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"geometryInputType\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRIANGLES\"\n"
    "\t defaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"geometryOutputType\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_TRIANGLE_STRIP\"\n"
    "\t defaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t >\n"
    "  </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderProgramChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderProgramChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderProgramChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderProgramChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ShaderProgramChunk::_mfVertexShader field.
const MFUnrecShaderProgramPtr *ShaderProgramChunkBase::getMFVertexShader(void) const
{
    return &_mfVertexShader;
}

MFUnrecShaderProgramPtr *ShaderProgramChunkBase::editMFVertexShader   (void)
{
    editMField(VertexShaderFieldMask, _mfVertexShader);

    return &_mfVertexShader;
}

//! Get the ShaderProgramChunk::_mfGeometryShader field.
const MFUnrecShaderProgramPtr *ShaderProgramChunkBase::getMFGeometryShader(void) const
{
    return &_mfGeometryShader;
}

MFUnrecShaderProgramPtr *ShaderProgramChunkBase::editMFGeometryShader (void)
{
    editMField(GeometryShaderFieldMask, _mfGeometryShader);

    return &_mfGeometryShader;
}

//! Get the ShaderProgramChunk::_mfFragmentShader field.
const MFUnrecShaderProgramPtr *ShaderProgramChunkBase::getMFFragmentShader(void) const
{
    return &_mfFragmentShader;
}

MFUnrecShaderProgramPtr *ShaderProgramChunkBase::editMFFragmentShader (void)
{
    editMField(FragmentShaderFieldMask, _mfFragmentShader);

    return &_mfFragmentShader;
}

SFUInt32 *ShaderProgramChunkBase::editSFGeometryVerticesOut(void)
{
    editSField(GeometryVerticesOutFieldMask);

    return &_sfGeometryVerticesOut;
}

const SFUInt32 *ShaderProgramChunkBase::getSFGeometryVerticesOut(void) const
{
    return &_sfGeometryVerticesOut;
}


SFGLenum *ShaderProgramChunkBase::editSFGeometryInputType(void)
{
    editSField(GeometryInputTypeFieldMask);

    return &_sfGeometryInputType;
}

const SFGLenum *ShaderProgramChunkBase::getSFGeometryInputType(void) const
{
    return &_sfGeometryInputType;
}


SFGLenum *ShaderProgramChunkBase::editSFGeometryOutputType(void)
{
    editSField(GeometryOutputTypeFieldMask);

    return &_sfGeometryOutputType;
}

const SFGLenum *ShaderProgramChunkBase::getSFGeometryOutputType(void) const
{
    return &_sfGeometryOutputType;
}




void ShaderProgramChunkBase::addVertexShader(ShaderProgram * const value)
{
    editMField(VertexShaderFieldMask, _mfVertexShader);

    _mfVertexShader.push_back(value);
}

void ShaderProgramChunkBase::assignVertexShader(const MFUnrecShaderProgramPtr &value)
{
    MFUnrecShaderProgramPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecShaderProgramPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ShaderProgramChunk *>(this)->clearVertexShaders();

    while(elemIt != elemEnd)
    {
        this->addVertexShader(*elemIt);

        ++elemIt;
    }
}

void ShaderProgramChunkBase::subVertexShader(UInt32 uiIndex)
{
    if(uiIndex < _mfVertexShader.size())
    {
        editMField(VertexShaderFieldMask, _mfVertexShader);

        _mfVertexShader.erase(uiIndex);
    }
}

void ShaderProgramChunkBase::removeObjFromVertexShader(ShaderProgram * const value)
{
    Int32 iElemIdx = _mfVertexShader.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(VertexShaderFieldMask, _mfVertexShader);

        _mfVertexShader.erase(iElemIdx);
    }
}
void ShaderProgramChunkBase::clearVertexShaders(void)
{
    editMField(VertexShaderFieldMask, _mfVertexShader);


    _mfVertexShader.clear();
}

void ShaderProgramChunkBase::addGeometryShader(ShaderProgram * const value)
{
    editMField(GeometryShaderFieldMask, _mfGeometryShader);

    _mfGeometryShader.push_back(value);
}

void ShaderProgramChunkBase::assignGeometryShader(const MFUnrecShaderProgramPtr &value)
{
    MFUnrecShaderProgramPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecShaderProgramPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ShaderProgramChunk *>(this)->clearGeometryShaders();

    while(elemIt != elemEnd)
    {
        this->addGeometryShader(*elemIt);

        ++elemIt;
    }
}

void ShaderProgramChunkBase::subGeometryShader(UInt32 uiIndex)
{
    if(uiIndex < _mfGeometryShader.size())
    {
        editMField(GeometryShaderFieldMask, _mfGeometryShader);

        _mfGeometryShader.erase(uiIndex);
    }
}

void ShaderProgramChunkBase::removeObjFromGeometryShader(ShaderProgram * const value)
{
    Int32 iElemIdx = _mfGeometryShader.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GeometryShaderFieldMask, _mfGeometryShader);

        _mfGeometryShader.erase(iElemIdx);
    }
}
void ShaderProgramChunkBase::clearGeometryShaders(void)
{
    editMField(GeometryShaderFieldMask, _mfGeometryShader);


    _mfGeometryShader.clear();
}

void ShaderProgramChunkBase::addFragmentShader(ShaderProgram * const value)
{
    editMField(FragmentShaderFieldMask, _mfFragmentShader);

    _mfFragmentShader.push_back(value);
}

void ShaderProgramChunkBase::assignFragmentShader(const MFUnrecShaderProgramPtr &value)
{
    MFUnrecShaderProgramPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecShaderProgramPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ShaderProgramChunk *>(this)->clearFragmentShaders();

    while(elemIt != elemEnd)
    {
        this->addFragmentShader(*elemIt);

        ++elemIt;
    }
}

void ShaderProgramChunkBase::subFragmentShader(UInt32 uiIndex)
{
    if(uiIndex < _mfFragmentShader.size())
    {
        editMField(FragmentShaderFieldMask, _mfFragmentShader);

        _mfFragmentShader.erase(uiIndex);
    }
}

void ShaderProgramChunkBase::removeObjFromFragmentShader(ShaderProgram * const value)
{
    Int32 iElemIdx = _mfFragmentShader.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(FragmentShaderFieldMask, _mfFragmentShader);

        _mfFragmentShader.erase(iElemIdx);
    }
}
void ShaderProgramChunkBase::clearFragmentShaders(void)
{
    editMField(FragmentShaderFieldMask, _mfFragmentShader);


    _mfFragmentShader.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ShaderProgramChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VertexShaderFieldMask & whichField))
    {
        returnValue += _mfVertexShader.getBinSize();
    }
    if(FieldBits::NoField != (GeometryShaderFieldMask & whichField))
    {
        returnValue += _mfGeometryShader.getBinSize();
    }
    if(FieldBits::NoField != (FragmentShaderFieldMask & whichField))
    {
        returnValue += _mfFragmentShader.getBinSize();
    }
    if(FieldBits::NoField != (GeometryVerticesOutFieldMask & whichField))
    {
        returnValue += _sfGeometryVerticesOut.getBinSize();
    }
    if(FieldBits::NoField != (GeometryInputTypeFieldMask & whichField))
    {
        returnValue += _sfGeometryInputType.getBinSize();
    }
    if(FieldBits::NoField != (GeometryOutputTypeFieldMask & whichField))
    {
        returnValue += _sfGeometryOutputType.getBinSize();
    }

    return returnValue;
}

void ShaderProgramChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VertexShaderFieldMask & whichField))
    {
        _mfVertexShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryShaderFieldMask & whichField))
    {
        _mfGeometryShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FragmentShaderFieldMask & whichField))
    {
        _mfFragmentShader.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryVerticesOutFieldMask & whichField))
    {
        _sfGeometryVerticesOut.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryInputTypeFieldMask & whichField))
    {
        _sfGeometryInputType.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GeometryOutputTypeFieldMask & whichField))
    {
        _sfGeometryOutputType.copyToBin(pMem);
    }
}

void ShaderProgramChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VertexShaderFieldMask & whichField))
    {
        _mfVertexShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryShaderFieldMask & whichField))
    {
        _mfGeometryShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FragmentShaderFieldMask & whichField))
    {
        _mfFragmentShader.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryVerticesOutFieldMask & whichField))
    {
        _sfGeometryVerticesOut.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryInputTypeFieldMask & whichField))
    {
        _sfGeometryInputType.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GeometryOutputTypeFieldMask & whichField))
    {
        _sfGeometryOutputType.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderProgramChunkTransitPtr ShaderProgramChunkBase::createLocal(BitVector bFlags)
{
    ShaderProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderProgramChunkTransitPtr ShaderProgramChunkBase::createDependent(BitVector bFlags)
{
    ShaderProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderProgramChunkTransitPtr ShaderProgramChunkBase::create(void)
{
    ShaderProgramChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderProgramChunk>(tmpPtr);
    }

    return fc;
}

ShaderProgramChunk *ShaderProgramChunkBase::createEmptyLocal(BitVector bFlags)
{
    ShaderProgramChunk *returnValue;

    newPtr<ShaderProgramChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderProgramChunk *ShaderProgramChunkBase::createEmpty(void)
{
    ShaderProgramChunk *returnValue;

    newPtr<ShaderProgramChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderProgramChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderProgramChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderProgramChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramChunkBase::shallowCopy(void) const
{
    ShaderProgramChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderProgramChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderProgramChunkBase::ShaderProgramChunkBase(void) :
    Inherited(),
    _mfVertexShader           (),
    _mfGeometryShader         (),
    _mfFragmentShader         (),
    _sfGeometryVerticesOut    (UInt32(0)),
    _sfGeometryInputType      (GLenum(GL_TRIANGLES)),
    _sfGeometryOutputType     (GLenum(GL_TRIANGLE_STRIP))
{
}

ShaderProgramChunkBase::ShaderProgramChunkBase(const ShaderProgramChunkBase &source) :
    Inherited(source),
    _mfVertexShader           (),
    _mfGeometryShader         (),
    _mfFragmentShader         (),
    _sfGeometryVerticesOut    (source._sfGeometryVerticesOut    ),
    _sfGeometryInputType      (source._sfGeometryInputType      ),
    _sfGeometryOutputType     (source._sfGeometryOutputType     )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderProgramChunkBase::~ShaderProgramChunkBase(void)
{
}

void ShaderProgramChunkBase::onCreate(const ShaderProgramChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ShaderProgramChunk *pThis = static_cast<ShaderProgramChunk *>(this);

        MFUnrecShaderProgramPtr::const_iterator VertexShaderIt  =
            source->_mfVertexShader.begin();
        MFUnrecShaderProgramPtr::const_iterator VertexShaderEnd =
            source->_mfVertexShader.end  ();

        while(VertexShaderIt != VertexShaderEnd)
        {
            pThis->addVertexShader(*VertexShaderIt);

            ++VertexShaderIt;
        }

        MFUnrecShaderProgramPtr::const_iterator GeometryShaderIt  =
            source->_mfGeometryShader.begin();
        MFUnrecShaderProgramPtr::const_iterator GeometryShaderEnd =
            source->_mfGeometryShader.end  ();

        while(GeometryShaderIt != GeometryShaderEnd)
        {
            pThis->addGeometryShader(*GeometryShaderIt);

            ++GeometryShaderIt;
        }

        MFUnrecShaderProgramPtr::const_iterator FragmentShaderIt  =
            source->_mfFragmentShader.begin();
        MFUnrecShaderProgramPtr::const_iterator FragmentShaderEnd =
            source->_mfFragmentShader.end  ();

        while(FragmentShaderIt != FragmentShaderEnd)
        {
            pThis->addFragmentShader(*FragmentShaderIt);

            ++FragmentShaderIt;
        }
    }
}

GetFieldHandlePtr ShaderProgramChunkBase::getHandleVertexShader    (void) const
{
    MFUnrecShaderProgramPtr::GetHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::GetHandle(
             &_mfVertexShader,
             this->getType().getFieldDesc(VertexShaderFieldId),
             const_cast<ShaderProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramChunkBase::editHandleVertexShader   (void)
{
    MFUnrecShaderProgramPtr::EditHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::EditHandle(
             &_mfVertexShader,
             this->getType().getFieldDesc(VertexShaderFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ShaderProgramChunk::addVertexShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ShaderProgramChunk::subVertexShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ShaderProgramChunk::removeObjFromVertexShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ShaderProgramChunk::clearVertexShaders,
                    static_cast<ShaderProgramChunk *>(this)));

    editMField(VertexShaderFieldMask, _mfVertexShader);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramChunkBase::getHandleGeometryShader  (void) const
{
    MFUnrecShaderProgramPtr::GetHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::GetHandle(
             &_mfGeometryShader,
             this->getType().getFieldDesc(GeometryShaderFieldId),
             const_cast<ShaderProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramChunkBase::editHandleGeometryShader (void)
{
    MFUnrecShaderProgramPtr::EditHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::EditHandle(
             &_mfGeometryShader,
             this->getType().getFieldDesc(GeometryShaderFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ShaderProgramChunk::addGeometryShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ShaderProgramChunk::subGeometryShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ShaderProgramChunk::removeObjFromGeometryShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ShaderProgramChunk::clearGeometryShaders,
                    static_cast<ShaderProgramChunk *>(this)));

    editMField(GeometryShaderFieldMask, _mfGeometryShader);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramChunkBase::getHandleFragmentShader  (void) const
{
    MFUnrecShaderProgramPtr::GetHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::GetHandle(
             &_mfFragmentShader,
             this->getType().getFieldDesc(FragmentShaderFieldId),
             const_cast<ShaderProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramChunkBase::editHandleFragmentShader (void)
{
    MFUnrecShaderProgramPtr::EditHandlePtr returnValue(
        new  MFUnrecShaderProgramPtr::EditHandle(
             &_mfFragmentShader,
             this->getType().getFieldDesc(FragmentShaderFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ShaderProgramChunk::addFragmentShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ShaderProgramChunk::subFragmentShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ShaderProgramChunk::removeObjFromFragmentShader,
                    static_cast<ShaderProgramChunk *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ShaderProgramChunk::clearFragmentShaders,
                    static_cast<ShaderProgramChunk *>(this)));

    editMField(FragmentShaderFieldMask, _mfFragmentShader);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramChunkBase::getHandleGeometryVerticesOut (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGeometryVerticesOut,
             this->getType().getFieldDesc(GeometryVerticesOutFieldId),
             const_cast<ShaderProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramChunkBase::editHandleGeometryVerticesOut(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGeometryVerticesOut,
             this->getType().getFieldDesc(GeometryVerticesOutFieldId),
             this));


    editSField(GeometryVerticesOutFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramChunkBase::getHandleGeometryInputType (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGeometryInputType,
             this->getType().getFieldDesc(GeometryInputTypeFieldId),
             const_cast<ShaderProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramChunkBase::editHandleGeometryInputType(void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGeometryInputType,
             this->getType().getFieldDesc(GeometryInputTypeFieldId),
             this));


    editSField(GeometryInputTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShaderProgramChunkBase::getHandleGeometryOutputType (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGeometryOutputType,
             this->getType().getFieldDesc(GeometryOutputTypeFieldId),
             const_cast<ShaderProgramChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramChunkBase::editHandleGeometryOutputType(void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGeometryOutputType,
             this->getType().getFieldDesc(GeometryOutputTypeFieldId),
             this));


    editSField(GeometryOutputTypeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderProgramChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderProgramChunk *pThis = static_cast<ShaderProgramChunk *>(this);

    pThis->execSync(static_cast<ShaderProgramChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderProgramChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderProgramChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderProgramChunk *>(pRefAspect),
                  dynamic_cast<const ShaderProgramChunk *>(this));

    return returnValue;
}
#endif

void ShaderProgramChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ShaderProgramChunk *>(this)->clearVertexShaders();

    static_cast<ShaderProgramChunk *>(this)->clearGeometryShaders();

    static_cast<ShaderProgramChunk *>(this)->clearFragmentShaders();


}


OSG_END_NAMESPACE
