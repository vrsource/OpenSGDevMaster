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
 **     class State!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGStateChunk.h"              // Chunks Class

#include "OSGStateBase.h"
#include "OSGState.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::State
    The state base class. See \ref PageSystemState for the conceptual background.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var StateChunk *    StateBase::_mfChunks
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<State *, nsOSG>::_type(
    "StatePtr", 
    "FieldContainerPtr", 
    State::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(State *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           State *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           State *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void StateBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&State::invalidEditField),
        static_cast     <FieldGetMethodSig >(&State::invalidGetField));

    oType.addInitialDesc(pDesc);
}


StateBase::TypeObject StateBase::_type(
    StateBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&StateBase::createEmptyLocal),
    State::initMethod,
    State::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&State::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"State\"\n"
    "   parent=\"FieldContainer\"\n"
    "   library=\"System\"\n"
    "   structure=\"concrete\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpSystemState\"\n"
    ">\n"
    "\n"
    "The state base class. See \\ref PageSystemState for the conceptual background.\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        removeTo=\"NULL\"\n"
    "        clearMField=\"true\"\n"
    "        access=\"none\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The state base class. See \\ref PageSystemState for the conceptual background.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StateBase::getType(void)
{
    return _type;
}

const FieldContainerType &StateBase::getType(void) const
{
    return _type;
}

UInt32 StateBase::getContainerSize(void) const
{
    return sizeof(State);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

UInt32 StateBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void StateBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void StateBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        editMField(ChunksFieldMask, _mfChunks);
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
StateTransitPtr StateBase::createLocal(BitVector bFlags)
{
    StateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<State>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
StateTransitPtr StateBase::createDependent(BitVector bFlags)
{
    StateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<State>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
StateTransitPtr StateBase::create(void)
{
    StateTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<State>(tmpPtr);
    }

    return fc;
}

State *StateBase::createEmptyLocal(BitVector bFlags)
{
    State *returnValue;

    newPtr<State>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
State *StateBase::createEmpty(void)
{
    State *returnValue;

    newPtr<State>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr StateBase::shallowCopyLocal(
    BitVector bFlags) const
{
    State *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const State *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr StateBase::shallowCopyDependent(
    BitVector bFlags) const
{
    State *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const State *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr StateBase::shallowCopy(void) const
{
    State *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const State *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

StateBase::StateBase(void) :
    Inherited(),
    _mfChunks                 ()
{
}

StateBase::StateBase(const StateBase &source) :
    Inherited(source),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

StateBase::~StateBase(void)
{
}


GetFieldHandlePtr StateBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr StateBase::editHandleChunks         (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StateBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    State *pThis = static_cast<State *>(this);

    pThis->execSync(static_cast<State *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *StateBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    State *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const State *>(pRefAspect),
                  dynamic_cast<const State *>(this));

    return returnValue;
}
#endif

void StateBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
