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
 **     class SimpleMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"


#include "OSGGL.h"                        // ColorMaterial default header


#include "OSGSimpleMaterialBase.h"
#include "OSGSimpleMaterial.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleMaterial
    The simple material class. See \ref PageSystemMaterialSimpleMaterial for a
    description.

    This material wraps the standard calls to glMaterial() in
    OSG::SimpleMaterial::_sfAmbient, OSG::SimpleMaterial::_sfDiffuse, 
    OSG::SimpleMaterial::_sfEmission, OSG::SimpleMaterial::_sfSpecular, 
    OSG::SimpleMaterial::_sfShininess. In addition it supports transparency 
    (OSG::SimpleMaterial::_sfTransparency), can switch lighting 
    (OSG::SimpleMaterial::_sfLit) and the color material 
    (OSG::SimpleMaterial::_sfColorMaterial).
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Color3f         SimpleMaterialBase::_sfAmbient
    The ambient color for the material.
*/

/*! \var Color3f         SimpleMaterialBase::_sfDiffuse
    The diffuse color for the material.
*/

/*! \var Color3f         SimpleMaterialBase::_sfSpecular
    The color used for the specular highlight on the object.
*/

/*! \var Real32          SimpleMaterialBase::_sfShininess
    The shininess value to use when lighting the object.  Higher values equal smaller and brighter highlights.
*/

/*! \var Color3f         SimpleMaterialBase::_sfEmission
    
*/

/*! \var Real32          SimpleMaterialBase::_sfTransparency
    Defines how transparent objects are rendered with this material.
*/

/*! \var bool            SimpleMaterialBase::_sfLit
    
*/

/*! \var GLenum          SimpleMaterialBase::_sfColorMaterial
    Defines which color material mode this material affects.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<SimpleMaterial *, nsOSG>::_type(
    "SimpleMaterialPtr", 
    "ChunkMaterialPtr", 
    SimpleMaterial::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(SimpleMaterial *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SimpleMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "ambient",
        "The ambient color for the material.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleAmbient),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "diffuse",
        "The diffuse color for the material.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleDiffuse),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "specular",
        "The color used for the specular highlight on the object.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleSpecular),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "shininess",
        "The shininess value to use when lighting the object.  Higher values equal smaller and brighter highlights.\n",
        ShininessFieldId, ShininessFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleShininess),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleShininess));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3f::Description(
        SFColor3f::getClassType(),
        "emission",
        "",
        EmissionFieldId, EmissionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleEmission),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleEmission));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "transparency",
        "Defines how transparent objects are rendered with this material.\n",
        TransparencyFieldId, TransparencyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleTransparency),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleTransparency));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "lit",
        "",
        LitFieldId, LitFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleLit),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleLit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "colorMaterial",
        "Defines which color material mode this material affects.\n",
        ColorMaterialFieldId, ColorMaterialFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SimpleMaterial::editHandleColorMaterial),
        static_cast<FieldGetMethodSig >(&SimpleMaterial::getHandleColorMaterial));

    oType.addInitialDesc(pDesc);
}


SimpleMaterialBase::TypeObject SimpleMaterialBase::_type(
    SimpleMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&SimpleMaterialBase::createEmptyLocal),
    SimpleMaterial::initMethod,
    SimpleMaterial::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SimpleMaterial::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"SimpleMaterial\"\n"
    "   parent=\"ChunkMaterial\"\n"
    "   library=\"System\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"none\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpSystemMaterial\"\n"
    "   >\n"
    "\n"
    "  The simple material class. See \\ref PageSystemMaterialSimpleMaterial for a\n"
    "  description.\n"
    "\n"
    "  This material wraps the standard calls to glMaterial() in\n"
    "  OSG::SimpleMaterial::_sfAmbient, OSG::SimpleMaterial::_sfDiffuse, \n"
    "  OSG::SimpleMaterial::_sfEmission, OSG::SimpleMaterial::_sfSpecular, \n"
    "  OSG::SimpleMaterial::_sfShininess. In addition it supports transparency \n"
    "  (OSG::SimpleMaterial::_sfTransparency), can switch lighting \n"
    "  (OSG::SimpleMaterial::_sfLit) and the color material \n"
    "  (OSG::SimpleMaterial::_sfColorMaterial).\n"
    "  <Field\n"
    "\t name=\"ambient\"\n"
    "\t type=\"Color3f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f,0.f,0.f\"\n"
    "\t >\n"
    "    The ambient color for the material.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"diffuse\"\n"
    "\t type=\"Color3f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f,0.f,0.f\"\n"
    "\t >\n"
    "    The diffuse color for the material.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"specular\"\n"
    "\t type=\"Color3f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f,0.f,0.f\"\n"
    "\t >\n"
    "    The color used for the specular highlight on the object.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"shininess\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"1.f\"\n"
    "     min_value=\"0.0\"\n"
    "     max_value=\"128.0\"\n"
    "\t >\n"
    "    The shininess value to use when lighting the object.  Higher values equal smaller and brighter highlights.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"emission\"\n"
    "\t type=\"Color3f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f,0.f,0.f\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"transparency\"\n"
    "\t type=\"Real32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"0.f\"\n"
    "     min_value=\"0.0\"\n"
    "     max_value=\"1.0\"\n"
    "\t >\n"
    "    Defines how transparent objects are rendered with this material.\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"lit\"\n"
    "\t type=\"bool\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"true\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"colorMaterial\"\n"
    "\t type=\"GLenum\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t defaultValue=\"GL_DIFFUSE\"\n"
    "\t defaultHeader=\"&quot;OSGGL.h&quot;\"\n"
    "     potential_values=\"GL_AMBIENT,GL_DIFFUSE,GL_SPECULAR,GL_AMBIENT_AND_DIFFUSE,GL_EMISSION\"\n"
    "\t >\n"
    "    Defines which color material mode this material affects.\n"
    "  </Field>\n"
    "</FieldContainer>\n"
    "\n"
    "\n",
    "The simple material class. See \\ref PageSystemMaterialSimpleMaterial for a\n"
    "description.\n"
    "\n"
    "This material wraps the standard calls to glMaterial() in\n"
    "OSG::SimpleMaterial::_sfAmbient, OSG::SimpleMaterial::_sfDiffuse, \n"
    "OSG::SimpleMaterial::_sfEmission, OSG::SimpleMaterial::_sfSpecular, \n"
    "OSG::SimpleMaterial::_sfShininess. In addition it supports transparency \n"
    "(OSG::SimpleMaterial::_sfTransparency), can switch lighting \n"
    "(OSG::SimpleMaterial::_sfLit) and the color material \n"
    "(OSG::SimpleMaterial::_sfColorMaterial).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleMaterialBase::getType(void) const
{
    return _type;
}

UInt32 SimpleMaterialBase::getContainerSize(void) const
{
    return sizeof(SimpleMaterial);
}

/*------------------------- decorator get ------------------------------*/


SFColor3f *SimpleMaterialBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor3f *SimpleMaterialBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}


SFColor3f *SimpleMaterialBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor3f *SimpleMaterialBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}


SFColor3f *SimpleMaterialBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor3f *SimpleMaterialBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}


SFReal32 *SimpleMaterialBase::editSFShininess(void)
{
    editSField(ShininessFieldMask);

    return &_sfShininess;
}

const SFReal32 *SimpleMaterialBase::getSFShininess(void) const
{
    return &_sfShininess;
}


SFColor3f *SimpleMaterialBase::editSFEmission(void)
{
    editSField(EmissionFieldMask);

    return &_sfEmission;
}

const SFColor3f *SimpleMaterialBase::getSFEmission(void) const
{
    return &_sfEmission;
}


SFReal32 *SimpleMaterialBase::editSFTransparency(void)
{
    editSField(TransparencyFieldMask);

    return &_sfTransparency;
}

const SFReal32 *SimpleMaterialBase::getSFTransparency(void) const
{
    return &_sfTransparency;
}


SFBool *SimpleMaterialBase::editSFLit(void)
{
    editSField(LitFieldMask);

    return &_sfLit;
}

const SFBool *SimpleMaterialBase::getSFLit(void) const
{
    return &_sfLit;
}


SFGLenum *SimpleMaterialBase::editSFColorMaterial(void)
{
    editSField(ColorMaterialFieldMask);

    return &_sfColorMaterial;
}

const SFGLenum *SimpleMaterialBase::getSFColorMaterial(void) const
{
    return &_sfColorMaterial;
}






/*------------------------------ access -----------------------------------*/

UInt32 SimpleMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        returnValue += _sfShininess.getBinSize();
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        returnValue += _sfEmission.getBinSize();
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        returnValue += _sfTransparency.getBinSize();
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        returnValue += _sfLit.getBinSize();
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        returnValue += _sfColorMaterial.getBinSize();
    }

    return returnValue;
}

void SimpleMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        _sfTransparency.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyToBin(pMem);
    }
}

void SimpleMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        editSField(AmbientFieldMask);
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        editSField(DiffuseFieldMask);
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        editSField(SpecularFieldMask);
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        editSField(ShininessFieldMask);
        _sfShininess.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        editSField(EmissionFieldMask);
        _sfEmission.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        editSField(TransparencyFieldMask);
        _sfTransparency.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        editSField(LitFieldMask);
        _sfLit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        editSField(ColorMaterialFieldMask);
        _sfColorMaterial.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleMaterialTransitPtr SimpleMaterialBase::createLocal(BitVector bFlags)
{
    SimpleMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SimpleMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SimpleMaterialTransitPtr SimpleMaterialBase::createDependent(BitVector bFlags)
{
    SimpleMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SimpleMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SimpleMaterialTransitPtr SimpleMaterialBase::create(void)
{
    SimpleMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SimpleMaterial>(tmpPtr);
    }

    return fc;
}

SimpleMaterial *SimpleMaterialBase::createEmptyLocal(BitVector bFlags)
{
    SimpleMaterial *returnValue;

    newPtr<SimpleMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleMaterial *SimpleMaterialBase::createEmpty(void)
{
    SimpleMaterial *returnValue;

    newPtr<SimpleMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SimpleMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SimpleMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleMaterialBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SimpleMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SimpleMaterial *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SimpleMaterialBase::shallowCopy(void) const
{
    SimpleMaterial *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SimpleMaterial *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SimpleMaterialBase::SimpleMaterialBase(void) :
    Inherited(),
    _sfAmbient                (Color3f(0.f,0.f,0.f)),
    _sfDiffuse                (Color3f(0.f,0.f,0.f)),
    _sfSpecular               (Color3f(0.f,0.f,0.f)),
    _sfShininess              (Real32(1.f)),
    _sfEmission               (Color3f(0.f,0.f,0.f)),
    _sfTransparency           (Real32(0.f)),
    _sfLit                    (bool(true)),
    _sfColorMaterial          (GLenum(GL_DIFFUSE))
{
}

SimpleMaterialBase::SimpleMaterialBase(const SimpleMaterialBase &source) :
    Inherited(source),
    _sfAmbient                (source._sfAmbient                ),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfShininess              (source._sfShininess              ),
    _sfEmission               (source._sfEmission               ),
    _sfTransparency           (source._sfTransparency           ),
    _sfLit                    (source._sfLit                    ),
    _sfColorMaterial          (source._sfColorMaterial          )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleMaterialBase::~SimpleMaterialBase(void)
{
}


GetFieldHandlePtr SimpleMaterialBase::getHandleAmbient         (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleAmbient        (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfAmbient,
             this->getType().getFieldDesc(AmbientFieldId),
             this));


    editSField(AmbientFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleDiffuse         (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleDiffuse        (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfDiffuse,
             this->getType().getFieldDesc(DiffuseFieldId),
             this));


    editSField(DiffuseFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleSpecular        (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleSpecular       (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfSpecular,
             this->getType().getFieldDesc(SpecularFieldId),
             this));


    editSField(SpecularFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleShininess       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfShininess,
             this->getType().getFieldDesc(ShininessFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleShininess      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfShininess,
             this->getType().getFieldDesc(ShininessFieldId),
             this));


    editSField(ShininessFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleEmission        (void) const
{
    SFColor3f::GetHandlePtr returnValue(
        new  SFColor3f::GetHandle(
             &_sfEmission,
             this->getType().getFieldDesc(EmissionFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleEmission       (void)
{
    SFColor3f::EditHandlePtr returnValue(
        new  SFColor3f::EditHandle(
             &_sfEmission,
             this->getType().getFieldDesc(EmissionFieldId),
             this));


    editSField(EmissionFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleTransparency    (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTransparency,
             this->getType().getFieldDesc(TransparencyFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleTransparency   (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTransparency,
             this->getType().getFieldDesc(TransparencyFieldId),
             this));


    editSField(TransparencyFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleLit             (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLit,
             this->getType().getFieldDesc(LitFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleLit            (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLit,
             this->getType().getFieldDesc(LitFieldId),
             this));


    editSField(LitFieldMask);

    return returnValue;
}

GetFieldHandlePtr SimpleMaterialBase::getHandleColorMaterial   (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfColorMaterial,
             this->getType().getFieldDesc(ColorMaterialFieldId),
             const_cast<SimpleMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SimpleMaterialBase::editHandleColorMaterial  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfColorMaterial,
             this->getType().getFieldDesc(ColorMaterialFieldId),
             this));


    editSField(ColorMaterialFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SimpleMaterial *pThis = static_cast<SimpleMaterial *>(this);

    pThis->execSync(static_cast<SimpleMaterial *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SimpleMaterialBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SimpleMaterial *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleMaterial *>(pRefAspect),
                  dynamic_cast<const SimpleMaterial *>(this));

    return returnValue;
}
#endif

void SimpleMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
