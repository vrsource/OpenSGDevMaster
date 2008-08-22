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
 **     class CarbonWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGCarbonWindowBase.h"
#include "OSGCarbonWindow.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CarbonWindow
    The class for MacOS X Carbon windows.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var AGLContext      CarbonWindowBase::_sfContext
    
*/


void CarbonWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFAGLContext::Description(
        SFAGLContext::getClassType(),
        "context",
        "",
        ContextFieldId, ContextFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CarbonWindow::editHandleContext),
        static_cast<FieldGetMethodSig >(&CarbonWindow::getHandleContext));

    oType.addInitialDesc(pDesc);
}


CarbonWindowBase::TypeObject CarbonWindowBase::_type(
    CarbonWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CarbonWindowBase::createEmptyLocal),
    CarbonWindow::initMethod,
    CarbonWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CarbonWindowBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CarbonWindow\"\n"
    "\tparent=\"Window\"\n"
    "\tlibrary=\"WindowCarbon\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "The class for MacOS X Carbon windows.\n"
    "\t<Field\n"
    "\t\tname=\"context\"\n"
    "\t\ttype=\"AGLContext\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\theader=\"OSGCarbonWindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The class for MacOS X Carbon windows.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CarbonWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &CarbonWindowBase::getType(void) const
{
    return _type;
}

UInt32 CarbonWindowBase::getContainerSize(void) const
{
    return sizeof(CarbonWindow);
}

/*------------------------- decorator get ------------------------------*/


SFAGLContext *CarbonWindowBase::editSFContext(void)
{
    editSField(ContextFieldMask);

    return &_sfContext;
}

const SFAGLContext *CarbonWindowBase::getSFContext(void) const
{
    return &_sfContext;
}






/*------------------------------ access -----------------------------------*/

UInt32 CarbonWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        returnValue += _sfContext.getBinSize();
    }

    return returnValue;
}

void CarbonWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyToBin(pMem);
    }
}

void CarbonWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CarbonWindowTransitPtr CarbonWindowBase::createLocal(BitVector bFlags)
{
    CarbonWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CarbonWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CarbonWindowTransitPtr CarbonWindowBase::create(void)
{
    CarbonWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CarbonWindow>(tmpPtr);
    }

    return fc;
}

CarbonWindow *CarbonWindowBase::createEmptyLocal(BitVector bFlags)
{
    CarbonWindow *returnValue;

    newPtr<CarbonWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CarbonWindow *CarbonWindowBase::createEmpty(void)
{
    CarbonWindow *returnValue;

    newPtr<CarbonWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CarbonWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CarbonWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CarbonWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CarbonWindowBase::shallowCopy(void) const
{
    CarbonWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CarbonWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CarbonWindowBase::CarbonWindowBase(void) :
    Inherited(),
    _sfContext                (AGLContext(0))
{
}

CarbonWindowBase::CarbonWindowBase(const CarbonWindowBase &source) :
    Inherited(source),
    _sfContext                (source._sfContext                )
{
}


/*-------------------------- destructors ----------------------------------*/

CarbonWindowBase::~CarbonWindowBase(void)
{
}


GetFieldHandlePtr CarbonWindowBase::getHandleContext         (void) const
{
    SFAGLContext::GetHandlePtr returnValue(
        new  SFAGLContext::GetHandle(
             &_sfContext,
             this->getType().getFieldDesc(ContextFieldId)));

    return returnValue;
}

EditFieldHandlePtr CarbonWindowBase::editHandleContext        (void)
{
    SFAGLContext::EditHandlePtr returnValue(
        new  SFAGLContext::EditHandle(
             &_sfContext,
             this->getType().getFieldDesc(ContextFieldId)));


    editSField(ContextFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CarbonWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CarbonWindow *pThis = static_cast<CarbonWindow *>(this);

    pThis->execSync(static_cast<CarbonWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CarbonWindowBase::createAspectCopy(void) const
{
    CarbonWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CarbonWindow *>(this));

    return returnValue;
}
#endif

void CarbonWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CarbonWindow *>::_type("CarbonWindowPtr", "WindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CarbonWindow *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CarbonWindow *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CarbonWindow *,
                           0);

OSG_END_NAMESPACE
