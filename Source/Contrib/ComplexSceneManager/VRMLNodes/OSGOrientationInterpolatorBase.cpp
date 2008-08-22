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
 **     class OrientationInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGOrientationInterpolatorBase.h"
#include "OSGOrientationInterpolator.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::OrientationInterpolator
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          OrientationInterpolatorBase::_sfFraction
    
*/

/*! \var Real32          OrientationInterpolatorBase::_mfKey
    
*/

/*! \var Quaternion      OrientationInterpolatorBase::_mfKeyValue
    
*/

/*! \var Quaternion      OrientationInterpolatorBase::_sfValue
    
*/


void OrientationInterpolatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "fraction",
        "",
        FractionFieldId, FractionFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&OrientationInterpolator::editHandleFraction),
        static_cast<FieldGetMethodSig >(&OrientationInterpolator::getHandleFraction));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "key",
        "",
        KeyFieldId, KeyFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&OrientationInterpolator::editHandleKey),
        static_cast<FieldGetMethodSig >(&OrientationInterpolator::getHandleKey));

    oType.addInitialDesc(pDesc);

    pDesc = new MFQuaternion::Description(
        MFQuaternion::getClassType(),
        "keyValue",
        "",
        KeyValueFieldId, KeyValueFieldMask,
        false,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&OrientationInterpolator::editHandleKeyValue),
        static_cast<FieldGetMethodSig >(&OrientationInterpolator::getHandleKeyValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFQuaternion::Description(
        SFQuaternion::getClassType(),
        "value",
        "",
        ValueFieldId, ValueFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&OrientationInterpolator::editHandleValue),
        static_cast<FieldGetMethodSig >(&OrientationInterpolator::getHandleValue));

    oType.addInitialDesc(pDesc);
}


OrientationInterpolatorBase::TypeObject OrientationInterpolatorBase::_type(
    OrientationInterpolatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&OrientationInterpolatorBase::createEmptyLocal),
    OrientationInterpolator::initMethod,
    OrientationInterpolator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&OrientationInterpolatorBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"OrientationInterpolator\"\n"
    "    parent=\"NodeCore\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"fraction\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.f\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"key\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"keyValue\"\n"
    "\t\ttype=\"Quaternion\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Quaternion\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"\"\n"
    "        fieldFlags=\"FThreadLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &OrientationInterpolatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &OrientationInterpolatorBase::getType(void) const
{
    return _type;
}

UInt32 OrientationInterpolatorBase::getContainerSize(void) const
{
    return sizeof(OrientationInterpolator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *OrientationInterpolatorBase::editSFFraction(void)
{
    editSField(FractionFieldMask);

    return &_sfFraction;
}

const SFReal32 *OrientationInterpolatorBase::getSFFraction(void) const
{
    return &_sfFraction;
}


MFReal32 *OrientationInterpolatorBase::editMFKey(void)
{
    editMField(KeyFieldMask, _mfKey);

    return &_mfKey;
}

const MFReal32 *OrientationInterpolatorBase::getMFKey(void) const
{
    return &_mfKey;
}


MFQuaternion *OrientationInterpolatorBase::editMFKeyValue(void)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return &_mfKeyValue;
}

const MFQuaternion *OrientationInterpolatorBase::getMFKeyValue(void) const
{
    return &_mfKeyValue;
}


SFQuaternion *OrientationInterpolatorBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFQuaternion *OrientationInterpolatorBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 OrientationInterpolatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        returnValue += _sfFraction.getBinSize();
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        returnValue += _mfKey.getBinSize();
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        returnValue += _mfKeyValue.getBinSize();
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void OrientationInterpolatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyToBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void OrientationInterpolatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FractionFieldMask & whichField))
    {
        _sfFraction.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyFieldMask & whichField))
    {
        _mfKey.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
    {
        _mfKeyValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
OrientationInterpolatorTransitPtr OrientationInterpolatorBase::createLocal(BitVector bFlags)
{
    OrientationInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<OrientationInterpolator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
OrientationInterpolatorTransitPtr OrientationInterpolatorBase::create(void)
{
    OrientationInterpolatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<OrientationInterpolator>(tmpPtr);
    }

    return fc;
}

OrientationInterpolator *OrientationInterpolatorBase::createEmptyLocal(BitVector bFlags)
{
    OrientationInterpolator *returnValue;

    newPtr<OrientationInterpolator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
OrientationInterpolator *OrientationInterpolatorBase::createEmpty(void)
{
    OrientationInterpolator *returnValue;

    newPtr<OrientationInterpolator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr OrientationInterpolatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    OrientationInterpolator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const OrientationInterpolator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr OrientationInterpolatorBase::shallowCopy(void) const
{
    OrientationInterpolator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const OrientationInterpolator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

OrientationInterpolatorBase::OrientationInterpolatorBase(void) :
    Inherited(),
    _sfFraction               (Real32(0.f)),
    _mfKey                    (),
    _mfKeyValue               (),
    _sfValue                  ()
{
}

OrientationInterpolatorBase::OrientationInterpolatorBase(const OrientationInterpolatorBase &source) :
    Inherited(source),
    _sfFraction               (source._sfFraction               ),
    _mfKey                    (source._mfKey                    ),
    _mfKeyValue               (source._mfKeyValue               ),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

OrientationInterpolatorBase::~OrientationInterpolatorBase(void)
{
}


GetFieldHandlePtr OrientationInterpolatorBase::getHandleFraction        (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId)));

    return returnValue;
}

EditFieldHandlePtr OrientationInterpolatorBase::editHandleFraction       (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFraction,
             this->getType().getFieldDesc(FractionFieldId)));


    editSField(FractionFieldMask);

    return returnValue;
}

GetFieldHandlePtr OrientationInterpolatorBase::getHandleKey             (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId)));

    return returnValue;
}

EditFieldHandlePtr OrientationInterpolatorBase::editHandleKey            (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfKey,
             this->getType().getFieldDesc(KeyFieldId)));


    editMField(KeyFieldMask, _mfKey);

    return returnValue;
}

GetFieldHandlePtr OrientationInterpolatorBase::getHandleKeyValue        (void) const
{
    MFQuaternion::GetHandlePtr returnValue(
        new  MFQuaternion::GetHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr OrientationInterpolatorBase::editHandleKeyValue       (void)
{
    MFQuaternion::EditHandlePtr returnValue(
        new  MFQuaternion::EditHandle(
             &_mfKeyValue,
             this->getType().getFieldDesc(KeyValueFieldId)));


    editMField(KeyValueFieldMask, _mfKeyValue);

    return returnValue;
}

GetFieldHandlePtr OrientationInterpolatorBase::getHandleValue           (void) const
{
    SFQuaternion::GetHandlePtr returnValue(
        new  SFQuaternion::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr OrientationInterpolatorBase::editHandleValue          (void)
{
    SFQuaternion::EditHandlePtr returnValue(
        new  SFQuaternion::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId)));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void OrientationInterpolatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    OrientationInterpolator *pThis = static_cast<OrientationInterpolator *>(this);

    pThis->execSync(static_cast<OrientationInterpolator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *OrientationInterpolatorBase::createAspectCopy(void) const
{
    OrientationInterpolator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const OrientationInterpolator *>(this));

    return returnValue;
}
#endif

void OrientationInterpolatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfKey.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfKeyValue.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<OrientationInterpolator *>::_type("OrientationInterpolatorPtr", "NodeCorePtr");
#endif


OSG_END_NAMESPACE
