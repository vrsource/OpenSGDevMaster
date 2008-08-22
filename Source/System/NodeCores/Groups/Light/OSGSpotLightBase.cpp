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
 **     class SpotLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSpotLightBase.h"
#include "OSGSpotLight.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SpotLight
    SpotLight is a located lightsource. The position of the light source
    (in the beacon's coordinate system) is defined by the \c position
    attribute, its direction by the \c direction attribute. The spot has an
    exponential fallof, controlled by the \c spotExponent attribute and a
    maximum opening angle, defined by the \c spotCutOff attribute.
    The influence of the light diminishes with distance, controlled
    by the \c constantAttenuation, \c linearAttenuation and \c
    quadraticAttenuation attributes.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3r           SpotLightBase::_sfDirection
    
*/

/*! \var Real            SpotLightBase::_sfSpotExponent
    The drop-off exponent of the spotlight.
*/

/*! \var Real            SpotLightBase::_sfSpotCutOff
    The cut-off angle of the spotlight (in radians, not degrees!).
*/


void SpotLightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "direction",
        "",
        DirectionFieldId, DirectionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SpotLight::editHandleDirection),
        static_cast<FieldGetMethodSig >(&SpotLight::getHandleDirection));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "spotExponent",
        "The drop-off exponent of the spotlight.\n",
        SpotExponentFieldId, SpotExponentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SpotLight::editHandleSpotExponent),
        static_cast<FieldGetMethodSig >(&SpotLight::getHandleSpotExponent));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "spotCutOff",
        "The cut-off angle of the spotlight (in radians, not degrees!).\n",
        SpotCutOffFieldId, SpotCutOffFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SpotLight::editHandleSpotCutOff),
        static_cast<FieldGetMethodSig >(&SpotLight::getHandleSpotCutOff));

    oType.addInitialDesc(pDesc);
}


SpotLightBase::TypeObject SpotLightBase::_type(
    SpotLightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SpotLightBase::createEmptyLocal),
    SpotLight::initMethod,
    SpotLight::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SpotLightBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SpotLight\"\n"
    "\tparent=\"PointLight\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "SpotLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute, its direction by the \\c direction attribute. The spot has an\n"
    "exponential fallof, controlled by the \\c spotExponent attribute and a\n"
    "maximum opening angle, defined by the \\c spotCutOff attribute.\n"
    "The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    "\t<Field\n"
    "\t\tname=\"direction\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.f,0.f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"spotExponent\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe drop-off exponent of the spotlight.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"spotCutOff\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"0.f\"\n"
    "\t>\n"
    "\tThe cut-off angle of the spotlight (in radians, not degrees!).\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "SpotLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute, its direction by the \\c direction attribute. The spot has an\n"
    "exponential fallof, controlled by the \\c spotExponent attribute and a\n"
    "maximum opening angle, defined by the \\c spotCutOff attribute.\n"
    "The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SpotLightBase::getType(void)
{
    return _type;
}

const FieldContainerType &SpotLightBase::getType(void) const
{
    return _type;
}

UInt32 SpotLightBase::getContainerSize(void) const
{
    return sizeof(SpotLight);
}

/*------------------------- decorator get ------------------------------*/


SFVec3r *SpotLightBase::editSFDirection(void)
{
    editSField(DirectionFieldMask);

    return &_sfDirection;
}

const SFVec3r *SpotLightBase::getSFDirection(void) const
{
    return &_sfDirection;
}


SFReal *SpotLightBase::editSFSpotExponent(void)
{
    editSField(SpotExponentFieldMask);

    return &_sfSpotExponent;
}

const SFReal *SpotLightBase::getSFSpotExponent(void) const
{
    return &_sfSpotExponent;
}


SFReal *SpotLightBase::editSFSpotCutOff(void)
{
    editSField(SpotCutOffFieldMask);

    return &_sfSpotCutOff;
}

const SFReal *SpotLightBase::getSFSpotCutOff(void) const
{
    return &_sfSpotCutOff;
}






/*------------------------------ access -----------------------------------*/

UInt32 SpotLightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        returnValue += _sfDirection.getBinSize();
    }
    if(FieldBits::NoField != (SpotExponentFieldMask & whichField))
    {
        returnValue += _sfSpotExponent.getBinSize();
    }
    if(FieldBits::NoField != (SpotCutOffFieldMask & whichField))
    {
        returnValue += _sfSpotCutOff.getBinSize();
    }

    return returnValue;
}

void SpotLightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpotExponentFieldMask & whichField))
    {
        _sfSpotExponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpotCutOffFieldMask & whichField))
    {
        _sfSpotCutOff.copyToBin(pMem);
    }
}

void SpotLightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpotExponentFieldMask & whichField))
    {
        _sfSpotExponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpotCutOffFieldMask & whichField))
    {
        _sfSpotCutOff.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SpotLightTransitPtr SpotLightBase::createLocal(BitVector bFlags)
{
    SpotLightTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SpotLight>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SpotLightTransitPtr SpotLightBase::create(void)
{
    SpotLightTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SpotLight>(tmpPtr);
    }

    return fc;
}

SpotLight *SpotLightBase::createEmptyLocal(BitVector bFlags)
{
    SpotLight *returnValue;

    newPtr<SpotLight>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SpotLight *SpotLightBase::createEmpty(void)
{
    SpotLight *returnValue;

    newPtr<SpotLight>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SpotLightBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SpotLight *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SpotLight *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SpotLightBase::shallowCopy(void) const
{
    SpotLight *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SpotLight *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SpotLightBase::SpotLightBase(void) :
    Inherited(),
    _sfDirection              (Vec3r(0.f,0.f,1.f)),
    _sfSpotExponent           (Real(0.f)),
    _sfSpotCutOff             (Real(0.f))
{
}

SpotLightBase::SpotLightBase(const SpotLightBase &source) :
    Inherited(source),
    _sfDirection              (source._sfDirection              ),
    _sfSpotExponent           (source._sfSpotExponent           ),
    _sfSpotCutOff             (source._sfSpotCutOff             )
{
}


/*-------------------------- destructors ----------------------------------*/

SpotLightBase::~SpotLightBase(void)
{
}


GetFieldHandlePtr SpotLightBase::getHandleDirection       (void) const
{
    SFVec3r::GetHandlePtr returnValue(
        new  SFVec3r::GetHandle(
             &_sfDirection,
             this->getType().getFieldDesc(DirectionFieldId)));

    return returnValue;
}

EditFieldHandlePtr SpotLightBase::editHandleDirection      (void)
{
    SFVec3r::EditHandlePtr returnValue(
        new  SFVec3r::EditHandle(
             &_sfDirection,
             this->getType().getFieldDesc(DirectionFieldId)));


    editSField(DirectionFieldMask);

    return returnValue;
}

GetFieldHandlePtr SpotLightBase::getHandleSpotExponent    (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfSpotExponent,
             this->getType().getFieldDesc(SpotExponentFieldId)));

    return returnValue;
}

EditFieldHandlePtr SpotLightBase::editHandleSpotExponent   (void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfSpotExponent,
             this->getType().getFieldDesc(SpotExponentFieldId)));


    editSField(SpotExponentFieldMask);

    return returnValue;
}

GetFieldHandlePtr SpotLightBase::getHandleSpotCutOff      (void) const
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfSpotCutOff,
             this->getType().getFieldDesc(SpotCutOffFieldId)));

    return returnValue;
}

EditFieldHandlePtr SpotLightBase::editHandleSpotCutOff     (void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfSpotCutOff,
             this->getType().getFieldDesc(SpotCutOffFieldId)));


    editSField(SpotCutOffFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SpotLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SpotLight *pThis = static_cast<SpotLight *>(this);

    pThis->execSync(static_cast<SpotLight *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SpotLightBase::createAspectCopy(void) const
{
    SpotLight *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SpotLight *>(this));

    return returnValue;
}
#endif

void SpotLightBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SpotLight *>::_type("SpotLightPtr", "PointLightPtr");
#endif


OSG_END_NAMESPACE
