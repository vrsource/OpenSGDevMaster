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
 **     class ComputeElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGComputeElementBase.h"
#include "OSGComputeElement.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComputeElement
    Base of compute elements.  
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ComputeElement *, nsOSG>::_type(
    "ComputeElementPtr", 
    "GroupPtr", 
    ComputeElement::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ComputeElement *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ComputeElement *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ComputeElement *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ComputeElementBase::classDescInserter(TypeObject &oType)
{
    Inherited::classDescInserter(oType);

}


ComputeElementBase::TypeObject ComputeElementBase::_type(
    ComputeElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ComputeElementBase::createEmptyLocal),
    ComputeElement::initMethod,
    ComputeElement::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComputeElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ComputeElement\"\n"
    "   parent=\"Group\"\n"
    "   mixinparent=\"ComputeElementParent\"\n"
    "   library=\"ContribComputeBase\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   isNodeCore=\"true\"\n"
    "   >\n"
    "  Base of compute elements.  \n"
    "</FieldContainer>\n",
    "Base of compute elements.  \n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComputeElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComputeElementBase::getType(void) const
{
    return _type;
}

UInt32 ComputeElementBase::getContainerSize(void) const
{
    return sizeof(ComputeElement);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 ComputeElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void ComputeElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void ComputeElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
ComputeElementTransitPtr ComputeElementBase::createLocal(BitVector bFlags)
{
    ComputeElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComputeElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ComputeElementTransitPtr ComputeElementBase::createDependent(BitVector bFlags)
{
    ComputeElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ComputeElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComputeElementTransitPtr ComputeElementBase::create(void)
{
    ComputeElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ComputeElement>(tmpPtr);
    }

    return fc;
}

ComputeElement *ComputeElementBase::createEmptyLocal(BitVector bFlags)
{
    ComputeElement *returnValue;

    newPtr<ComputeElement>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComputeElement *ComputeElementBase::createEmpty(void)
{
    ComputeElement *returnValue;

    newPtr<ComputeElement>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ComputeElementBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComputeElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComputeElement *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComputeElementBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ComputeElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComputeElement *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComputeElementBase::shallowCopy(void) const
{
    ComputeElement *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ComputeElement *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ComputeElementBase::ComputeElementBase(void) :
    Inherited()
{
}

ComputeElementBase::ComputeElementBase(const ComputeElementBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

ComputeElementBase::~ComputeElementBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void ComputeElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ComputeElement *pThis = static_cast<ComputeElement *>(this);

    pThis->execSync(static_cast<ComputeElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComputeElementBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ComputeElement *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComputeElement *>(pRefAspect),
                  dynamic_cast<const ComputeElement *>(this));

    return returnValue;
}
#endif

void ComputeElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
