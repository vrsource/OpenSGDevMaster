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
 **     class AnimKeyFrameDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGAnimKeyFrameDataSourceBase.h"
#include "OSGAnimKeyFrameDataSource.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimKeyFrameDataSource
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          AnimKeyFrameDataSourceBase::_mfInValues
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AnimKeyFrameDataSource *>::_type("AnimKeyFrameDataSourcePtr", "AnimDataSourcePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AnimKeyFrameDataSource *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimKeyFrameDataSource *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimKeyFrameDataSource *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimKeyFrameDataSourceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "inValues",
        "",
        InValuesFieldId, InValuesFieldMask,
        true,
        (Field::FThreadLocal),
        static_cast<FieldEditMethodSig>(&AnimKeyFrameDataSource::editHandleInValues),
        static_cast<FieldGetMethodSig >(&AnimKeyFrameDataSource::getHandleInValues));

    oType.addInitialDesc(pDesc);
}


AnimKeyFrameDataSourceBase::TypeObject AnimKeyFrameDataSourceBase::_type(
    AnimKeyFrameDataSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AnimKeyFrameDataSourceBase::createEmptyLocal),
    AnimKeyFrameDataSource::initMethod,
    AnimKeyFrameDataSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimKeyFrameDataSource::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"AnimKeyFrameDataSource\"\n"
    "    parent=\"AnimDataSource\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"inValues\"\n"
    "     category=\"data\"\n"
    "     type=\"Real32\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"internal\"\n"
    "     access=\"public\"\n"
    "     fieldFlags=\"FThreadLocal\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimKeyFrameDataSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimKeyFrameDataSourceBase::getType(void) const
{
    return _type;
}

UInt32 AnimKeyFrameDataSourceBase::getContainerSize(void) const
{
    return sizeof(AnimKeyFrameDataSource);
}

/*------------------------- decorator get ------------------------------*/


MFReal32 *AnimKeyFrameDataSourceBase::editMFInValues(void)
{
    editMField(InValuesFieldMask, _mfInValues);

    return &_mfInValues;
}

const MFReal32 *AnimKeyFrameDataSourceBase::getMFInValues(void) const
{
    return &_mfInValues;
}






/*------------------------------ access -----------------------------------*/

UInt32 AnimKeyFrameDataSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (InValuesFieldMask & whichField))
    {
        returnValue += _mfInValues.getBinSize();
    }

    return returnValue;
}

void AnimKeyFrameDataSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (InValuesFieldMask & whichField))
    {
        _mfInValues.copyToBin(pMem);
    }
}

void AnimKeyFrameDataSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (InValuesFieldMask & whichField))
    {
        _mfInValues.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AnimKeyFrameDataSourceTransitPtr AnimKeyFrameDataSourceBase::createLocal(BitVector bFlags)
{
    AnimKeyFrameDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimKeyFrameDataSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimKeyFrameDataSourceTransitPtr AnimKeyFrameDataSourceBase::createDependent(BitVector bFlags)
{
    AnimKeyFrameDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimKeyFrameDataSource>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimKeyFrameDataSourceTransitPtr AnimKeyFrameDataSourceBase::create(void)
{
    AnimKeyFrameDataSourceTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimKeyFrameDataSource>(tmpPtr);
    }

    return fc;
}

AnimKeyFrameDataSource *AnimKeyFrameDataSourceBase::createEmptyLocal(BitVector bFlags)
{
    AnimKeyFrameDataSource *returnValue;

    newPtr<AnimKeyFrameDataSource>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimKeyFrameDataSource *AnimKeyFrameDataSourceBase::createEmpty(void)
{
    AnimKeyFrameDataSource *returnValue;

    newPtr<AnimKeyFrameDataSource>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimKeyFrameDataSourceBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimKeyFrameDataSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimKeyFrameDataSource *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimKeyFrameDataSourceBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimKeyFrameDataSource *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimKeyFrameDataSource *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimKeyFrameDataSourceBase::shallowCopy(void) const
{
    AnimKeyFrameDataSource *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimKeyFrameDataSource *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimKeyFrameDataSourceBase::AnimKeyFrameDataSourceBase(void) :
    Inherited(),
    _mfInValues               ()
{
}

AnimKeyFrameDataSourceBase::AnimKeyFrameDataSourceBase(const AnimKeyFrameDataSourceBase &source) :
    Inherited(source),
    _mfInValues               (source._mfInValues               )
{
}


/*-------------------------- destructors ----------------------------------*/

AnimKeyFrameDataSourceBase::~AnimKeyFrameDataSourceBase(void)
{
}


GetFieldHandlePtr AnimKeyFrameDataSourceBase::getHandleInValues        (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfInValues,
             this->getType().getFieldDesc(InValuesFieldId),
             const_cast<AnimKeyFrameDataSourceBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimKeyFrameDataSourceBase::editHandleInValues       (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfInValues,
             this->getType().getFieldDesc(InValuesFieldId),
             this));


    editMField(InValuesFieldMask, _mfInValues);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AnimKeyFrameDataSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimKeyFrameDataSource *pThis = static_cast<AnimKeyFrameDataSource *>(this);

    pThis->execSync(static_cast<AnimKeyFrameDataSource *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimKeyFrameDataSourceBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimKeyFrameDataSource *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimKeyFrameDataSource *>(pRefAspect),
                  dynamic_cast<const AnimKeyFrameDataSource *>(this));

    return returnValue;
}
#endif

void AnimKeyFrameDataSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfInValues.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
