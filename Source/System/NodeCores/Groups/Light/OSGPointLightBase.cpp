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
 **     class PointLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPointLightBase.h"
#include "OSGPointLight.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PointLight
    PointLight is a located lightsource. The position of the light source
    (in the beacon's coordinate system) is defined by the \c position
    attribute. The influence of the light diminishes with distance, controlled
    by the \c constantAttenuation, \c linearAttenuation and \c
    quadraticAttenuation attributes.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Pnt3r           PointLightBase::_sfPosition
    
*/


void PointLightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3r::Description(
        SFPnt3r::getClassType(),
        "position",
        "",
        PositionFieldId, PositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PointLight::editHandlePosition),
        static_cast<FieldGetMethodSig >(&PointLight::getHandlePosition));

    oType.addInitialDesc(pDesc);
}


PointLightBase::TypeObject PointLightBase::_type(
    PointLightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PointLightBase::createEmptyLocal),
    PointLight::initMethod,
    PointLight::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PointLightBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PointLight\"\n"
    "\tparent=\"Light\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "PointLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute. The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Pnt3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"0.f,0.f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "PointLight is a located lightsource. The position of the light source\n"
    "(in the beacon's coordinate system) is defined by the \\c position\n"
    "attribute. The influence of the light diminishes with distance, controlled\n"
    "by the \\c constantAttenuation, \\c linearAttenuation and \\c\n"
    "quadraticAttenuation attributes.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PointLightBase::getType(void)
{
    return _type;
}

const FieldContainerType &PointLightBase::getType(void) const
{
    return _type;
}

UInt32 PointLightBase::getContainerSize(void) const
{
    return sizeof(PointLight);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3r *PointLightBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFPnt3r *PointLightBase::getSFPosition(void) const
{
    return &_sfPosition;
}






/*------------------------------ access -----------------------------------*/

UInt32 PointLightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }

    return returnValue;
}

void PointLightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
}

void PointLightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PointLightTransitPtr PointLightBase::createLocal(BitVector bFlags)
{
    PointLightTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PointLight>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PointLightTransitPtr PointLightBase::create(void)
{
    PointLightTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PointLight>(tmpPtr);
    }

    return fc;
}

PointLight *PointLightBase::createEmptyLocal(BitVector bFlags)
{
    PointLight *returnValue;

    newPtr<PointLight>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PointLight *PointLightBase::createEmpty(void)
{
    PointLight *returnValue;

    newPtr<PointLight>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PointLightBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PointLight *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PointLight *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PointLightBase::shallowCopy(void) const
{
    PointLight *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PointLight *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PointLightBase::PointLightBase(void) :
    Inherited(),
    _sfPosition               (Pnt3r(0.f,0.f,0.f))
{
}

PointLightBase::PointLightBase(const PointLightBase &source) :
    Inherited(source),
    _sfPosition               (source._sfPosition               )
{
}


/*-------------------------- destructors ----------------------------------*/

PointLightBase::~PointLightBase(void)
{
}


GetFieldHandlePtr PointLightBase::getHandlePosition        (void) const
{
    SFPnt3r::GetHandlePtr returnValue(
        new  SFPnt3r::GetHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId)));

    return returnValue;
}

EditFieldHandlePtr PointLightBase::editHandlePosition       (void)
{
    SFPnt3r::EditHandlePtr returnValue(
        new  SFPnt3r::EditHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId)));


    editSField(PositionFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PointLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PointLight *pThis = static_cast<PointLight *>(this);

    pThis->execSync(static_cast<PointLight *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PointLightBase::createAspectCopy(void) const
{
    PointLight *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PointLight *>(this));

    return returnValue;
}
#endif

void PointLightBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PointLight *>::_type("PointLightPtr", "LightPtr");
#endif


OSG_END_NAMESPACE
