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
 **     class StageData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGStageDataBase.h"
#include "OSGStageData.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StageData
    Data use for rendering by the any stage, holds bookkeeping data
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Int32           StageDataBase::_sfPartitionRangeBegin
    
*/

/*! \var Int32           StageDataBase::_sfPartitionRangeEnd
    
*/

/*! \var Int32           StageDataBase::_sfGroupMode
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StageData *>::_type("StageDataPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StageData *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StageDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "partitionRangeBegin",
        "",
        PartitionRangeBeginFieldId, PartitionRangeBeginFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StageData::editHandlePartitionRangeBegin),
        static_cast<FieldGetMethodSig >(&StageData::getHandlePartitionRangeBegin));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "partitionRangeEnd",
        "",
        PartitionRangeEndFieldId, PartitionRangeEndFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StageData::editHandlePartitionRangeEnd),
        static_cast<FieldGetMethodSig >(&StageData::getHandlePartitionRangeEnd));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "groupMode",
        "",
        GroupModeFieldId, GroupModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StageData::editHandleGroupMode),
        static_cast<FieldGetMethodSig >(&StageData::getHandleGroupMode));

    oType.addInitialDesc(pDesc);
}


StageDataBase::TypeObject StageDataBase::_type(
    StageDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&StageDataBase::createEmptyLocal),
    StageData::initMethod,
    StageData::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StageData::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"StageData\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "Data use for rendering by the any stage, holds bookkeeping data\n"
    "\t<Field\n"
    "\t\tname=\"partitionRangeBegin\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"partitionRangeEnd\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"groupMode\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "Data use for rendering by the any stage, holds bookkeeping data\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StageDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &StageDataBase::getType(void) const
{
    return _type;
}

UInt32 StageDataBase::getContainerSize(void) const
{
    return sizeof(StageData);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *StageDataBase::editSFPartitionRangeBegin(void)
{
    editSField(PartitionRangeBeginFieldMask);

    return &_sfPartitionRangeBegin;
}

const SFInt32 *StageDataBase::getSFPartitionRangeBegin(void) const
{
    return &_sfPartitionRangeBegin;
}


SFInt32 *StageDataBase::editSFPartitionRangeEnd(void)
{
    editSField(PartitionRangeEndFieldMask);

    return &_sfPartitionRangeEnd;
}

const SFInt32 *StageDataBase::getSFPartitionRangeEnd(void) const
{
    return &_sfPartitionRangeEnd;
}


SFInt32 *StageDataBase::editSFGroupMode(void)
{
    editSField(GroupModeFieldMask);

    return &_sfGroupMode;
}

const SFInt32 *StageDataBase::getSFGroupMode(void) const
{
    return &_sfGroupMode;
}






/*------------------------------ access -----------------------------------*/

UInt32 StageDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PartitionRangeBeginFieldMask & whichField))
    {
        returnValue += _sfPartitionRangeBegin.getBinSize();
    }
    if(FieldBits::NoField != (PartitionRangeEndFieldMask & whichField))
    {
        returnValue += _sfPartitionRangeEnd.getBinSize();
    }
    if(FieldBits::NoField != (GroupModeFieldMask & whichField))
    {
        returnValue += _sfGroupMode.getBinSize();
    }

    return returnValue;
}

void StageDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PartitionRangeBeginFieldMask & whichField))
    {
        _sfPartitionRangeBegin.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PartitionRangeEndFieldMask & whichField))
    {
        _sfPartitionRangeEnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GroupModeFieldMask & whichField))
    {
        _sfGroupMode.copyToBin(pMem);
    }
}

void StageDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PartitionRangeBeginFieldMask & whichField))
    {
        _sfPartitionRangeBegin.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PartitionRangeEndFieldMask & whichField))
    {
        _sfPartitionRangeEnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GroupModeFieldMask & whichField))
    {
        _sfGroupMode.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StageDataTransitPtr StageDataBase::createLocal(BitVector bFlags)
{
    StageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<StageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
StageDataTransitPtr StageDataBase::createDependent(BitVector bFlags)
{
    StageDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<StageData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StageDataTransitPtr StageDataBase::create(void)
{
    return createLocal();
}

StageData *StageDataBase::createEmptyLocal(BitVector bFlags)
{
    StageData *returnValue;

    newPtr<StageData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
StageData *StageDataBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr StageDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    StageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StageData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StageDataBase::shallowCopyDependent(
    BitVector bFlags) const
{
    StageData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const StageData *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr StageDataBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

StageDataBase::StageDataBase(void) :
    Inherited(),
    _sfPartitionRangeBegin    (Int32(-1)),
    _sfPartitionRangeEnd      (Int32(-1)),
    _sfGroupMode              (Int32(0))
{
}

StageDataBase::StageDataBase(const StageDataBase &source) :
    Inherited(source),
    _sfPartitionRangeBegin    (source._sfPartitionRangeBegin    ),
    _sfPartitionRangeEnd      (source._sfPartitionRangeEnd      ),
    _sfGroupMode              (source._sfGroupMode              )
{
}


/*-------------------------- destructors ----------------------------------*/

StageDataBase::~StageDataBase(void)
{
}


GetFieldHandlePtr StageDataBase::getHandlePartitionRangeBegin (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfPartitionRangeBegin,
             this->getType().getFieldDesc(PartitionRangeBeginFieldId),
             const_cast<StageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StageDataBase::editHandlePartitionRangeBegin(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfPartitionRangeBegin,
             this->getType().getFieldDesc(PartitionRangeBeginFieldId),
             this));


    editSField(PartitionRangeBeginFieldMask);

    return returnValue;
}

GetFieldHandlePtr StageDataBase::getHandlePartitionRangeEnd (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfPartitionRangeEnd,
             this->getType().getFieldDesc(PartitionRangeEndFieldId),
             const_cast<StageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StageDataBase::editHandlePartitionRangeEnd(void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfPartitionRangeEnd,
             this->getType().getFieldDesc(PartitionRangeEndFieldId),
             this));


    editSField(PartitionRangeEndFieldMask);

    return returnValue;
}

GetFieldHandlePtr StageDataBase::getHandleGroupMode       (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfGroupMode,
             this->getType().getFieldDesc(GroupModeFieldId),
             const_cast<StageDataBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr StageDataBase::editHandleGroupMode      (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfGroupMode,
             this->getType().getFieldDesc(GroupModeFieldId),
             this));


    editSField(GroupModeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StageDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    StageData *pThis = static_cast<StageData *>(this);

    pThis->execSync(static_cast<StageData *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StageDataBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    StageData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const StageData *>(pRefAspect),
                  dynamic_cast<const StageData *>(this));

    return returnValue;
}
#endif

void StageDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
