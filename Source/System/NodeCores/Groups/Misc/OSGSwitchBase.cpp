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
 **     class Switch!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSwitchBase.h"
#include "OSGSwitch.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Switch
    This core allows selection of different subtrees with the \c choice field.
    Depending on its value either all, none or only the specified child is enabled.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           SwitchBase::_sfChoice
    
*/


void SwitchBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "choice",
        "",
        ChoiceFieldId, ChoiceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Switch::editHandleChoice),
        static_cast<FieldGetMethodSig >(&Switch::getHandleChoice));

    oType.addInitialDesc(pDesc);
}


SwitchBase::TypeObject SwitchBase::_type(
    SwitchBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SwitchBase::createEmptyLocal),
    Switch::initMethod,
    Switch::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SwitchBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Switch\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "This core allows selection of different subtrees with the \\c choice field.\n"
    "Depending on its value either all, none or only the specified child is enabled.\n"
    "\t<Field\n"
    "\t\tname=\"choice\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "This core allows selection of different subtrees with the \\c choice field.\n"
    "Depending on its value either all, none or only the specified child is enabled.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SwitchBase::getType(void)
{
    return _type;
}

const FieldContainerType &SwitchBase::getType(void) const
{
    return _type;
}

UInt32 SwitchBase::getContainerSize(void) const
{
    return sizeof(Switch);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *SwitchBase::editSFChoice(void)
{
    editSField(ChoiceFieldMask);

    return &_sfChoice;
}

const SFInt32 *SwitchBase::getSFChoice(void) const
{
    return &_sfChoice;
}






/*------------------------------ access -----------------------------------*/

UInt32 SwitchBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        returnValue += _sfChoice.getBinSize();
    }

    return returnValue;
}

void SwitchBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyToBin(pMem);
    }
}

void SwitchBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SwitchTransitPtr SwitchBase::createLocal(BitVector bFlags)
{
    SwitchTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Switch>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SwitchTransitPtr SwitchBase::create(void)
{
    SwitchTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Switch>(tmpPtr);
    }

    return fc;
}

Switch *SwitchBase::createEmptyLocal(BitVector bFlags)
{
    Switch *returnValue;

    newPtr<Switch>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Switch *SwitchBase::createEmpty(void)
{
    Switch *returnValue;

    newPtr<Switch>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SwitchBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Switch *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Switch *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SwitchBase::shallowCopy(void) const
{
    Switch *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Switch *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SwitchBase::SwitchBase(void) :
    Inherited(),
    _sfChoice                 (Int32(-1))
{
}

SwitchBase::SwitchBase(const SwitchBase &source) :
    Inherited(source),
    _sfChoice                 (source._sfChoice                 )
{
}


/*-------------------------- destructors ----------------------------------*/

SwitchBase::~SwitchBase(void)
{
}


GetFieldHandlePtr SwitchBase::getHandleChoice          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfChoice,
             this->getType().getFieldDesc(ChoiceFieldId)));

    return returnValue;
}

EditFieldHandlePtr SwitchBase::editHandleChoice         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfChoice,
             this->getType().getFieldDesc(ChoiceFieldId)));


    editSField(ChoiceFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SwitchBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Switch *pThis = static_cast<Switch *>(this);

    pThis->execSync(static_cast<Switch *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SwitchBase::createAspectCopy(void) const
{
    Switch *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Switch *>(this));

    return returnValue;
}
#endif

void SwitchBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Switch *>::_type("SwitchPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Switch *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Switch *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Switch *,
                           0);

OSG_END_NAMESPACE
