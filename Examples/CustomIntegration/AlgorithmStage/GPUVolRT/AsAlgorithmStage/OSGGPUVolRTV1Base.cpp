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
 **     class GPUVolRTV1!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGGPUVolRTV1Base.h"
#include "OSGGPUVolRTV1.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GPUVolRTV1
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<GPUVolRTV1 *, nsOSG>::_type(
    "GPUVolRTV1Ptr", 
    "AlgorithmPtr", 
    GPUVolRTV1::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(GPUVolRTV1 *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GPUVolRTV1 *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GPUVolRTV1 *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GPUVolRTV1Base::classDescInserter(TypeObject &oType)
{
}


GPUVolRTV1Base::TypeObject GPUVolRTV1Base::_type(
    GPUVolRTV1Base::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&GPUVolRTV1Base::createEmptyLocal),
    GPUVolRTV1::initMethod,
    GPUVolRTV1::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GPUVolRTV1::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"GPUVolRTV1\"\n"
    "   parent=\"Algorithm\"\n"
    "   library=\"ExGPUVolRT\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"false\"\n"
    "   >\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GPUVolRTV1Base::getType(void)
{
    return _type;
}

const FieldContainerType &GPUVolRTV1Base::getType(void) const
{
    return _type;
}

UInt32 GPUVolRTV1Base::getContainerSize(void) const
{
    return sizeof(GPUVolRTV1);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GPUVolRTV1Base::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GPUVolRTV1Base::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GPUVolRTV1Base::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GPUVolRTV1TransitPtr GPUVolRTV1Base::createLocal(BitVector bFlags)
{
    GPUVolRTV1TransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GPUVolRTV1>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GPUVolRTV1TransitPtr GPUVolRTV1Base::createDependent(BitVector bFlags)
{
    GPUVolRTV1TransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GPUVolRTV1>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GPUVolRTV1TransitPtr GPUVolRTV1Base::create(void)
{
    GPUVolRTV1TransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GPUVolRTV1>(tmpPtr);
    }

    return fc;
}

GPUVolRTV1 *GPUVolRTV1Base::createEmptyLocal(BitVector bFlags)
{
    GPUVolRTV1 *returnValue;

    newPtr<GPUVolRTV1>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GPUVolRTV1 *GPUVolRTV1Base::createEmpty(void)
{
    GPUVolRTV1 *returnValue;

    newPtr<GPUVolRTV1>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GPUVolRTV1Base::shallowCopyLocal(
    BitVector bFlags) const
{
    GPUVolRTV1 *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GPUVolRTV1 *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GPUVolRTV1Base::shallowCopyDependent(
    BitVector bFlags) const
{
    GPUVolRTV1 *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GPUVolRTV1 *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GPUVolRTV1Base::shallowCopy(void) const
{
    GPUVolRTV1 *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GPUVolRTV1 *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GPUVolRTV1Base::GPUVolRTV1Base(void) :
    Inherited()
{
}

GPUVolRTV1Base::GPUVolRTV1Base(const GPUVolRTV1Base &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GPUVolRTV1Base::~GPUVolRTV1Base(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GPUVolRTV1Base::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GPUVolRTV1 *pThis = static_cast<GPUVolRTV1 *>(this);

    pThis->execSync(static_cast<GPUVolRTV1 *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GPUVolRTV1Base::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GPUVolRTV1 *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GPUVolRTV1 *>(pRefAspect),
                  dynamic_cast<const GPUVolRTV1 *>(this));

    return returnValue;
}
#endif

void GPUVolRTV1Base::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
