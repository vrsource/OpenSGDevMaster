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
 **     class CPUSkinningAlgorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGCPUSkinningAlgorithmBase.h"
#include "OSGCPUSkinningAlgorithm.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CPUSkinningAlgorithm
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<CPUSkinningAlgorithm *, nsOSG>::_type(
    "CPUSkinningAlgorithmPtr", 
    "SkinningAlgorithmPtr", 
    CPUSkinningAlgorithm::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(CPUSkinningAlgorithm *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CPUSkinningAlgorithm *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CPUSkinningAlgorithm *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CPUSkinningAlgorithmBase::classDescInserter(TypeObject &oType)
{
}


CPUSkinningAlgorithmBase::TypeObject CPUSkinningAlgorithmBase::_type(
    CPUSkinningAlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&CPUSkinningAlgorithmBase::createEmptyLocal),
    CPUSkinningAlgorithm::initMethod,
    CPUSkinningAlgorithm::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CPUSkinningAlgorithm::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CPUSkinningAlgorithm\"\n"
    "    parent=\"SkinningAlgorithm\"\n"
    "    library=\"Dynamics\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    childFields=\"none\"\n"
    "    parentFields=\"none\"\n"
    "    >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CPUSkinningAlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &CPUSkinningAlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 CPUSkinningAlgorithmBase::getContainerSize(void) const
{
    return sizeof(CPUSkinningAlgorithm);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 CPUSkinningAlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void CPUSkinningAlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void CPUSkinningAlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
CPUSkinningAlgorithmTransitPtr CPUSkinningAlgorithmBase::createLocal(BitVector bFlags)
{
    CPUSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CPUSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CPUSkinningAlgorithmTransitPtr CPUSkinningAlgorithmBase::createDependent(BitVector bFlags)
{
    CPUSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CPUSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CPUSkinningAlgorithmTransitPtr CPUSkinningAlgorithmBase::create(void)
{
    CPUSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CPUSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

CPUSkinningAlgorithm *CPUSkinningAlgorithmBase::createEmptyLocal(BitVector bFlags)
{
    CPUSkinningAlgorithm *returnValue;

    newPtr<CPUSkinningAlgorithm>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CPUSkinningAlgorithm *CPUSkinningAlgorithmBase::createEmpty(void)
{
    CPUSkinningAlgorithm *returnValue;

    newPtr<CPUSkinningAlgorithm>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CPUSkinningAlgorithmBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CPUSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CPUSkinningAlgorithm *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CPUSkinningAlgorithmBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CPUSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CPUSkinningAlgorithm *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CPUSkinningAlgorithmBase::shallowCopy(void) const
{
    CPUSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CPUSkinningAlgorithm *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CPUSkinningAlgorithmBase::CPUSkinningAlgorithmBase(void) :
    Inherited()
{
}

CPUSkinningAlgorithmBase::CPUSkinningAlgorithmBase(const CPUSkinningAlgorithmBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

CPUSkinningAlgorithmBase::~CPUSkinningAlgorithmBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void CPUSkinningAlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CPUSkinningAlgorithm *pThis = static_cast<CPUSkinningAlgorithm *>(this);

    pThis->execSync(static_cast<CPUSkinningAlgorithm *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CPUSkinningAlgorithmBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CPUSkinningAlgorithm *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CPUSkinningAlgorithm *>(pRefAspect),
                  dynamic_cast<const CPUSkinningAlgorithm *>(this));

    return returnValue;
}
#endif

void CPUSkinningAlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
