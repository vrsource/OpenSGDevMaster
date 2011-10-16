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
 **     class GlobalsAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Elements Class

#include "OSGGlobalsAttachmentBase.h"
#include "OSGGlobalsAttachment.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GlobalsAttachment
    attached to the root node by the loader infrastructure if the file
    contains elements outside the main graph.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * GlobalsAttachmentBase::_mfElements
    global elements store inside the attachment
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<GlobalsAttachment *, nsOSG>::_type(
    "GlobalsAttachmentPtr", 
    "AttachmentPtr", 
    GlobalsAttachment::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(GlobalsAttachment *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GlobalsAttachment *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GlobalsAttachment *,
                           nsOSG);

DataType &FieldTraits< GlobalsAttachment *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<GlobalsAttachment *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      GlobalsAttachment *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      GlobalsAttachment *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


DataType &FieldTraits<GlobalsAttachment *, nsOSG + 2 >::getType(void)
{
    return FieldTraits<GlobalsAttachment *, nsOSG>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    GlobalsAttachment *,
                    NoRefCountPolicy,
                    nsOSG + 2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         GlobalsAttachment *,
                         NoRefCountPolicy,
                         nsOSG + 2);


OSG_MFIELDTYPE_INST(ParentPointerMField,
                    GlobalsAttachment *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerMField,
                         GlobalsAttachment *,
                         NoRefCountPolicy,
                         2);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GlobalsAttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecFieldContainerPtr::Description(
        MFUnrecFieldContainerPtr::getClassType(),
        "elements",
        "global elements store inside the attachment\n",
        ElementsFieldId, ElementsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GlobalsAttachment::editHandleElements),
        static_cast<FieldGetMethodSig >(&GlobalsAttachment::getHandleElements));

    oType.addInitialDesc(pDesc);
}


GlobalsAttachmentBase::TypeObject GlobalsAttachmentBase::_type(
    GlobalsAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "globals",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&GlobalsAttachmentBase::createEmptyLocal),
    GlobalsAttachment::initMethod,
    GlobalsAttachment::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GlobalsAttachment::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"GlobalsAttachment\"\n"
    "   parent=\"Attachment\"\n"
    "   library=\"Base\"\n"
    "   structure=\"concrete\"\n"
    "   group=\"globals\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   parentFields=\"both\"\n"
    "   childFields=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"false\"\n"
    "   docGroupBase=\"GrpBaseFieldContainer\"\n"
    "   >\n"
    "  attached to the root node by the loader infrastructure if the file\n"
    "  contains elements outside the main graph.\n"
    "  <Field\n"
    "     name=\"elements\"\n"
    "     category=\"pointer\"\n"
    "     type=\"FieldContainer\"\n"
    "     cardinality=\"multi\"\n"
    "     visibility=\"external\"\n"
    "     >\n"
    "    global elements store inside the attachment\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "attached to the root node by the loader infrastructure if the file\n"
    "contains elements outside the main graph.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GlobalsAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &GlobalsAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 GlobalsAttachmentBase::getContainerSize(void) const
{
    return sizeof(GlobalsAttachment);
}

/*------------------------- decorator get ------------------------------*/


//! Get the GlobalsAttachment::_mfElements field.
const MFUnrecFieldContainerPtr *GlobalsAttachmentBase::getMFElements(void) const
{
    return &_mfElements;
}

MFUnrecFieldContainerPtr *GlobalsAttachmentBase::editMFElements       (void)
{
    editMField(ElementsFieldMask, _mfElements);

    return &_mfElements;
}



void GlobalsAttachmentBase::pushToElements(FieldContainer * const value)
{
    editMField(ElementsFieldMask, _mfElements);

    _mfElements.push_back(value);
}

void GlobalsAttachmentBase::assignElements (const MFUnrecFieldContainerPtr &value)
{
    MFUnrecFieldContainerPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFieldContainerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<GlobalsAttachment *>(this)->clearElements();

    while(elemIt != elemEnd)
    {
        this->pushToElements(*elemIt);

        ++elemIt;
    }
}

void GlobalsAttachmentBase::removeFromElements(UInt32 uiIndex)
{
    if(uiIndex < _mfElements.size())
    {
        editMField(ElementsFieldMask, _mfElements);

        _mfElements.erase(uiIndex);
    }
}

void GlobalsAttachmentBase::removeObjFromElements(FieldContainer * const value)
{
    Int32 iElemIdx = _mfElements.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ElementsFieldMask, _mfElements);

        _mfElements.erase(iElemIdx);
    }
}
void GlobalsAttachmentBase::clearElements(void)
{
    editMField(ElementsFieldMask, _mfElements);


    _mfElements.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 GlobalsAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ElementsFieldMask & whichField))
    {
        returnValue += _mfElements.getBinSize();
    }

    return returnValue;
}

void GlobalsAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ElementsFieldMask & whichField))
    {
        _mfElements.copyToBin(pMem);
    }
}

void GlobalsAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ElementsFieldMask & whichField))
    {
        editMField(ElementsFieldMask, _mfElements);
        _mfElements.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GlobalsAttachmentTransitPtr GlobalsAttachmentBase::createLocal(BitVector bFlags)
{
    GlobalsAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GlobalsAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GlobalsAttachmentTransitPtr GlobalsAttachmentBase::createDependent(BitVector bFlags)
{
    GlobalsAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GlobalsAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GlobalsAttachmentTransitPtr GlobalsAttachmentBase::create(void)
{
    GlobalsAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GlobalsAttachment>(tmpPtr);
    }

    return fc;
}

GlobalsAttachment *GlobalsAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    GlobalsAttachment *returnValue;

    newPtr<GlobalsAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GlobalsAttachment *GlobalsAttachmentBase::createEmpty(void)
{
    GlobalsAttachment *returnValue;

    newPtr<GlobalsAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GlobalsAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GlobalsAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GlobalsAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GlobalsAttachmentBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GlobalsAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GlobalsAttachment *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GlobalsAttachmentBase::shallowCopy(void) const
{
    GlobalsAttachment *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GlobalsAttachment *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GlobalsAttachmentBase::GlobalsAttachmentBase(void) :
    Inherited(),
    _mfElements               ()
{
}

GlobalsAttachmentBase::GlobalsAttachmentBase(const GlobalsAttachmentBase &source) :
    Inherited(source),
    _mfElements               ()
{
}


/*-------------------------- destructors ----------------------------------*/

GlobalsAttachmentBase::~GlobalsAttachmentBase(void)
{
}

void GlobalsAttachmentBase::onCreate(const GlobalsAttachment *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        GlobalsAttachment *pThis = static_cast<GlobalsAttachment *>(this);

        MFUnrecFieldContainerPtr::const_iterator ElementsIt  =
            source->_mfElements.begin();
        MFUnrecFieldContainerPtr::const_iterator ElementsEnd =
            source->_mfElements.end  ();

        while(ElementsIt != ElementsEnd)
        {
            pThis->pushToElements(*ElementsIt);

            ++ElementsIt;
        }
    }
}

GetFieldHandlePtr GlobalsAttachmentBase::getHandleElements        (void) const
{
    MFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::GetHandle(
             &_mfElements,
             this->getType().getFieldDesc(ElementsFieldId),
             const_cast<GlobalsAttachmentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GlobalsAttachmentBase::editHandleElements       (void)
{
    MFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::EditHandle(
             &_mfElements,
             this->getType().getFieldDesc(ElementsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&GlobalsAttachment::pushToElements,
                    static_cast<GlobalsAttachment *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&GlobalsAttachment::removeFromElements,
                    static_cast<GlobalsAttachment *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&GlobalsAttachment::removeObjFromElements,
                    static_cast<GlobalsAttachment *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&GlobalsAttachment::clearElements,
                    static_cast<GlobalsAttachment *>(this)));

    editMField(ElementsFieldMask, _mfElements);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GlobalsAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GlobalsAttachment *pThis = static_cast<GlobalsAttachment *>(this);

    pThis->execSync(static_cast<GlobalsAttachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GlobalsAttachmentBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GlobalsAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GlobalsAttachment *>(pRefAspect),
                  dynamic_cast<const GlobalsAttachment *>(this));

    return returnValue;
}
#endif

void GlobalsAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<GlobalsAttachment *>(this)->clearElements();


}


OSG_END_NAMESPACE
