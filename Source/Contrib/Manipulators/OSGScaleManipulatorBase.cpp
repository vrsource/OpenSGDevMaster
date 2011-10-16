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
 **     class ScaleManipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGScaleManipulatorBase.h"
#include "OSGScaleManipulator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScaleManipulator
    The ScaleHandle is used for scaling objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ScaleManipulatorBase::_sfUniform
    Uniform/Non-uniform scaling.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ScaleManipulator *, nsOSG>::_type(
    "ScaleManipulatorPtr", 
    "ManipulatorPtr", 
    ScaleManipulator::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ScaleManipulator *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ScaleManipulatorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "uniform",
        "Uniform/Non-uniform scaling.\n",
        UniformFieldId, UniformFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScaleManipulator::editHandleUniform),
        static_cast<FieldGetMethodSig >(&ScaleManipulator::getHandleUniform));

    oType.addInitialDesc(pDesc);
}


ScaleManipulatorBase::TypeObject ScaleManipulatorBase::_type(
    ScaleManipulatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ScaleManipulatorBase::createEmptyLocal),
    ScaleManipulator::initMethod,
    ScaleManipulator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ScaleManipulator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ScaleManipulator\"\n"
    "\tparent=\"Manipulator\"\n"
    "\tlibrary=\"ContribGUI\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    ">\n"
    "The ScaleHandle is used for scaling objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.\n"
    "    <Field\n"
    "       name=\"uniform\"\n"
    "       type=\"bool\"\n"
    "       category=\"data\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "       defaultValue=\"false\"\n"
    "       >\n"
    "      Uniform/Non-uniform scaling.\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "The ScaleHandle is used for scaling objects. It consist of three axis which can be picked and scaled and one center box to scale freely in 3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScaleManipulatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScaleManipulatorBase::getType(void) const
{
    return _type;
}

UInt32 ScaleManipulatorBase::getContainerSize(void) const
{
    return sizeof(ScaleManipulator);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ScaleManipulatorBase::editSFUniform(void)
{
    editSField(UniformFieldMask);

    return &_sfUniform;
}

const SFBool *ScaleManipulatorBase::getSFUniform(void) const
{
    return &_sfUniform;
}






/*------------------------------ access -----------------------------------*/

UInt32 ScaleManipulatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (UniformFieldMask & whichField))
    {
        returnValue += _sfUniform.getBinSize();
    }

    return returnValue;
}

void ScaleManipulatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (UniformFieldMask & whichField))
    {
        _sfUniform.copyToBin(pMem);
    }
}

void ScaleManipulatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (UniformFieldMask & whichField))
    {
        editSField(UniformFieldMask);
        _sfUniform.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ScaleManipulatorTransitPtr ScaleManipulatorBase::createLocal(BitVector bFlags)
{
    ScaleManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ScaleManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ScaleManipulatorTransitPtr ScaleManipulatorBase::createDependent(BitVector bFlags)
{
    ScaleManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ScaleManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ScaleManipulatorTransitPtr ScaleManipulatorBase::create(void)
{
    ScaleManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ScaleManipulator>(tmpPtr);
    }

    return fc;
}

ScaleManipulator *ScaleManipulatorBase::createEmptyLocal(BitVector bFlags)
{
    ScaleManipulator *returnValue;

    newPtr<ScaleManipulator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ScaleManipulator *ScaleManipulatorBase::createEmpty(void)
{
    ScaleManipulator *returnValue;

    newPtr<ScaleManipulator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ScaleManipulatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ScaleManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScaleManipulator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScaleManipulatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ScaleManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScaleManipulator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScaleManipulatorBase::shallowCopy(void) const
{
    ScaleManipulator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ScaleManipulator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ScaleManipulatorBase::ScaleManipulatorBase(void) :
    Inherited(),
    _sfUniform                (bool(false))
{
}

ScaleManipulatorBase::ScaleManipulatorBase(const ScaleManipulatorBase &source) :
    Inherited(source),
    _sfUniform                (source._sfUniform                )
{
}


/*-------------------------- destructors ----------------------------------*/

ScaleManipulatorBase::~ScaleManipulatorBase(void)
{
}


GetFieldHandlePtr ScaleManipulatorBase::getHandleUniform         (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUniform,
             this->getType().getFieldDesc(UniformFieldId),
             const_cast<ScaleManipulatorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScaleManipulatorBase::editHandleUniform        (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUniform,
             this->getType().getFieldDesc(UniformFieldId),
             this));


    editSField(UniformFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ScaleManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ScaleManipulator *pThis = static_cast<ScaleManipulator *>(this);

    pThis->execSync(static_cast<ScaleManipulator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ScaleManipulatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ScaleManipulator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScaleManipulator *>(pRefAspect),
                  dynamic_cast<const ScaleManipulator *>(this));

    return returnValue;
}
#endif

void ScaleManipulatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
