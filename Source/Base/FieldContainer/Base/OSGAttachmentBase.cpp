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
 **     class Attachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGFieldContainer.h"          // Parents Class

#include "OSGAttachmentBase.h"
#include "OSGAttachment.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Attachment
    Abstract base type for all attachments, containers that can be added
    to any AttachmentContainer derived type to store additional/optional
    data.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var FieldContainer * AttachmentBase::_mfParents
    Parents of this Attachment, that is the AttachmentContainer this
    is attached to.
*/

/*! \var bool            AttachmentBase::_sfInternal
    If true this attachment is marked internal, which excludes it from
    begin stored in files.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<Attachment *, nsOSG>::_type(
    "AttachmentPtr", 
    "AttachmentContainerPtr", 
    Attachment::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(Attachment *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Attachment *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Attachment *,
                           nsOSG);

DataType &FieldTraits< Attachment *, nsOSG + 1 >::getType(void)
{
    return FieldTraits<Attachment *, nsOSG>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      Attachment *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      Attachment *,
                      UnrecordedRefCountPolicy,
                      nsOSG + 1);


DataType &FieldTraits<Attachment *, nsOSG + 2 >::getType(void)
{
    return FieldTraits<Attachment *, nsOSG>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    Attachment *,
                    NoRefCountPolicy,
                    nsOSG + 2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         Attachment *,
                         NoRefCountPolicy,
                         nsOSG + 2);


OSG_MFIELDTYPE_INST(ParentPointerMField,
                    Attachment *,
                    NoRefCountPolicy,
                    2);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerMField,
                         Attachment *,
                         NoRefCountPolicy,
                         2);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AttachmentBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFParentFieldContainerPtr::Description(
        MFParentFieldContainerPtr::getClassType(),
        "parents",
        "Parents of this Attachment, that is the AttachmentContainer this\n"
        "is attached to.\n",
        ParentsFieldId, ParentsFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&Attachment::invalidEditField),
        static_cast     <FieldGetMethodSig >(&Attachment::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "internal",
        "If true this attachment is marked internal, which excludes it from\n"
        "begin stored in files.\n",
        InternalFieldId, InternalFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Attachment::editHandleInternal),
        static_cast<FieldGetMethodSig >(&Attachment::getHandleInternal));

    oType.addInitialDesc(pDesc);
}


AttachmentBase::TypeObject AttachmentBase::_type(
    AttachmentBase::getClassname(),
    Inherited::getClassname(),
    "FieldContainer",
    nsOSG, //Namespace
    NULL,
    Attachment::initMethod,
    Attachment::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Attachment::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"Attachment\"\n"
    "   parent=\"AttachmentContainer\"\n"
    "   library=\"Base\"\n"
    "   structure=\"abstract\"\n"
    "   group=\"FieldContainer\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   parentFields=\"both\"\n"
    "   childFields=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"false\"\n"
    "   docGroupBase=\"GrpBaseFieldContainerBase\"\n"
    "   >\n"
    "   Abstract base type for all attachments, containers that can be added\n"
    "   to any AttachmentContainer derived type to store additional/optional\n"
    "   data.\n"
    "\n"
    "  <Field\n"
    "     name=\"parents\"\n"
    "     category=\"parentpointer\"\n"
    "     type=\"FieldContainer\"\n"
    "     cardinality=\"multi\"\n"
    "     access=\"none\"\n"
    "     visibility=\"internal\"\n"
    "     >\n"
    "     Parents of this Attachment, that is the AttachmentContainer this\n"
    "     is attached to.\n"
    "  </Field>\n"
    "  <Field\n"
    "     name=\"internal\"\n"
    "     category=\"data\"\n"
    "     type=\"bool\"\n"
    "     cardinality=\"single\"\n"
    "     access=\"public\"\n"
    "     visibility=\"external\"\n"
    "     >\n"
    "     If true this attachment is marked internal, which excludes it from\n"
    "     begin stored in files.\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    "Abstract base type for all attachments, containers that can be added\n"
    "to any AttachmentContainer derived type to store additional/optional\n"
    "data.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &AttachmentBase::getType(void) const
{
    return _type;
}

UInt32 AttachmentBase::getContainerSize(void) const
{
    return sizeof(Attachment);
}

/*------------------------- decorator get ------------------------------*/



SFBool *AttachmentBase::editSFInternal(void)
{
    editSField(InternalFieldMask);

    return &_sfInternal;
}

const SFBool *AttachmentBase::getSFInternal(void) const
{
    return &_sfInternal;
}






/*------------------------------ access -----------------------------------*/

UInt32 AttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        returnValue += _mfParents.getBinSize();
    }
    if(FieldBits::NoField != (InternalFieldMask & whichField))
    {
        returnValue += _sfInternal.getBinSize();
    }

    return returnValue;
}

void AttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        _mfParents.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InternalFieldMask & whichField))
    {
        _sfInternal.copyToBin(pMem);
    }
}

void AttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParentsFieldMask & whichField))
    {
        editMField(ParentsFieldMask, _mfParents);
        _mfParents.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InternalFieldMask & whichField))
    {
        editSField(InternalFieldMask);
        _sfInternal.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

AttachmentBase::AttachmentBase(void) :
    Inherited(),
    _mfParents                (),
    _sfInternal               ()
{
}

AttachmentBase::AttachmentBase(const AttachmentBase &source) :
    Inherited(source),
    _mfParents                (),
    _sfInternal               (source._sfInternal               )
{
}


/*-------------------------- destructors ----------------------------------*/

AttachmentBase::~AttachmentBase(void)
{
}
/*-------------------------------------------------------------------------*/
/* Parent linking                                                          */

bool AttachmentBase::linkParent(
    FieldContainer * const pParent,
    UInt16           const childFieldId,
    UInt16           const parentFieldId )
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            editMField(ParentsFieldMask, _mfParents);

            _mfParents.push_back(pTypedParent, childFieldId);

            return true;
        }

        return false;
    }

    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

bool AttachmentBase::unlinkParent(
    FieldContainer * const pParent,
    UInt16           const parentFieldId)
{
    if(parentFieldId == ParentsFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            Int32 iParentIdx = _mfParents.findIndex(pTypedParent);

            if(iParentIdx != -1)
            {
                editMField(ParentsFieldMask, _mfParents);

                _mfParents.erase(iParentIdx);

                return true;
            }

            SWARNING << "Child (["          << this
                     << "] id ["            << this->getId()
                     << "] type ["          << this->getType().getCName()
                     << "] parentFieldId [" << parentFieldId
                     << "]) - Parent (["    << pParent
                     << "] id ["            << pParent->getId()
                     << "] type ["          << pParent->getType().getCName()
                     << "]): link inconsistent!"
                     << std::endl;

            return false;
        }

        return false;
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}



GetFieldHandlePtr AttachmentBase::getHandleParents         (void) const
{
    MFParentFieldContainerPtr::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr AttachmentBase::editHandleParents        (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr AttachmentBase::getHandleInternal        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfInternal,
             this->getType().getFieldDesc(InternalFieldId),
             const_cast<AttachmentBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AttachmentBase::editHandleInternal       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfInternal,
             this->getType().getFieldDesc(InternalFieldId),
             this));


    editSField(InternalFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Attachment *pThis = static_cast<Attachment *>(this);

    pThis->execSync(static_cast<Attachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void AttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
