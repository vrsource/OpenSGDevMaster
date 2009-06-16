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
 **     class FileGrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGFileGrabForegroundBase.h"
#include "OSGFileGrabForeground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FileGrabForeground
    \ingroup GrpSystemWindowForegrounds

    The FileGrabForeground is used for grabbing a frame or sequence of frames to
    disk.  See \ref
    PageSystemWindowForegroundGrabFile for a description.

    The name of the file(s) grabbed to are defined by the _sfName Field, the
    current frame number by _sfFrame. _sfIncrement can be used to automatically
    increment the frame number after each image is written. The whole grabber can
    be activated/deactivated using _sfActive.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     FileGrabForegroundBase::_sfName
    The filename template. %d is replaced by the frame number.
*/

/*! \var UInt32          FileGrabForegroundBase::_sfFrame
    The frame number to use.
*/

/*! \var bool            FileGrabForegroundBase::_sfIncrement
    Flag to start/stop automatic frame increments after each grab.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FileGrabForeground *>::_type("FileGrabForegroundPtr", "GrabForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FileGrabForeground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FileGrabForeground *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FileGrabForeground *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FileGrabForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "name",
        "The filename template. %d is replaced by the frame number.\n",
        NameFieldId, NameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FileGrabForeground::editHandleName),
        static_cast<FieldGetMethodSig >(&FileGrabForeground::getHandleName));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "frame",
        "The frame number to use.\n",
        FrameFieldId, FrameFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FileGrabForeground::editHandleFrame),
        static_cast<FieldGetMethodSig >(&FileGrabForeground::getHandleFrame));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "increment",
        "Flag to start/stop automatic frame increments after each grab.\n",
        IncrementFieldId, IncrementFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FileGrabForeground::editHandleIncrement),
        static_cast<FieldGetMethodSig >(&FileGrabForeground::getHandleIncrement));

    oType.addInitialDesc(pDesc);
}


FileGrabForegroundBase::TypeObject FileGrabForegroundBase::_type(
    FileGrabForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FileGrabForegroundBase::createEmptyLocal),
    FileGrabForeground::initMethod,
    FileGrabForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FileGrabForeground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FileGrabForeground\"\n"
    "\tparent=\"GrabForeground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The FileGrabForeground is used for grabbing a frame or sequence of frames to\n"
    "disk.  See \\ref\n"
    "PageSystemWindowForegroundGrabFile for a description.\n"
    "\n"
    "The name of the file(s) grabbed to are defined by the _sfName Field, the\n"
    "current frame number by _sfFrame. _sfIncrement can be used to automatically\n"
    "increment the frame number after each image is written. The whole grabber can\n"
    "be activated/deactivated using _sfActive.\n"
    "\t<Field\n"
    "\t\tname=\"name\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe filename template. %d is replaced by the frame number.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"frame\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe frame number to use.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"increment\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tFlag to start/stop automatic frame increments after each grab.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The FileGrabForeground is used for grabbing a frame or sequence of frames to\n"
    "disk.  See \\ref\n"
    "PageSystemWindowForegroundGrabFile for a description.\n"
    "\n"
    "The name of the file(s) grabbed to are defined by the _sfName Field, the\n"
    "current frame number by _sfFrame. _sfIncrement can be used to automatically\n"
    "increment the frame number after each image is written. The whole grabber can\n"
    "be activated/deactivated using _sfActive.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FileGrabForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &FileGrabForegroundBase::getType(void) const
{
    return _type;
}

UInt32 FileGrabForegroundBase::getContainerSize(void) const
{
    return sizeof(FileGrabForeground);
}

/*------------------------- decorator get ------------------------------*/


SFString *FileGrabForegroundBase::editSFName(void)
{
    editSField(NameFieldMask);

    return &_sfName;
}

const SFString *FileGrabForegroundBase::getSFName(void) const
{
    return &_sfName;
}


SFUInt32 *FileGrabForegroundBase::editSFFrame(void)
{
    editSField(FrameFieldMask);

    return &_sfFrame;
}

const SFUInt32 *FileGrabForegroundBase::getSFFrame(void) const
{
    return &_sfFrame;
}


SFBool *FileGrabForegroundBase::editSFIncrement(void)
{
    editSField(IncrementFieldMask);

    return &_sfIncrement;
}

const SFBool *FileGrabForegroundBase::getSFIncrement(void) const
{
    return &_sfIncrement;
}






/*------------------------------ access -----------------------------------*/

UInt32 FileGrabForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        returnValue += _sfName.getBinSize();
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        returnValue += _sfFrame.getBinSize();
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        returnValue += _sfIncrement.getBinSize();
    }

    return returnValue;
}

void FileGrabForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        _sfFrame.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        _sfIncrement.copyToBin(pMem);
    }
}

void FileGrabForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (NameFieldMask & whichField))
    {
        _sfName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrameFieldMask & whichField))
    {
        _sfFrame.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IncrementFieldMask & whichField))
    {
        _sfIncrement.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FileGrabForegroundTransitPtr FileGrabForegroundBase::createLocal(BitVector bFlags)
{
    FileGrabForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FileGrabForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FileGrabForegroundTransitPtr FileGrabForegroundBase::createDependent(BitVector bFlags)
{
    FileGrabForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FileGrabForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FileGrabForegroundTransitPtr FileGrabForegroundBase::create(void)
{
    FileGrabForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FileGrabForeground>(tmpPtr);
    }

    return fc;
}

FileGrabForeground *FileGrabForegroundBase::createEmptyLocal(BitVector bFlags)
{
    FileGrabForeground *returnValue;

    newPtr<FileGrabForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FileGrabForeground *FileGrabForegroundBase::createEmpty(void)
{
    FileGrabForeground *returnValue;

    newPtr<FileGrabForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FileGrabForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FileGrabForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FileGrabForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FileGrabForegroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FileGrabForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FileGrabForeground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FileGrabForegroundBase::shallowCopy(void) const
{
    FileGrabForeground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FileGrabForeground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FileGrabForegroundBase::FileGrabForegroundBase(void) :
    Inherited(),
    _sfName                   (),
    _sfFrame                  (UInt32(0)),
    _sfIncrement              (bool(true))
{
}

FileGrabForegroundBase::FileGrabForegroundBase(const FileGrabForegroundBase &source) :
    Inherited(source),
    _sfName                   (source._sfName                   ),
    _sfFrame                  (source._sfFrame                  ),
    _sfIncrement              (source._sfIncrement              )
{
}


/*-------------------------- destructors ----------------------------------*/

FileGrabForegroundBase::~FileGrabForegroundBase(void)
{
}


GetFieldHandlePtr FileGrabForegroundBase::getHandleName            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfName,
             this->getType().getFieldDesc(NameFieldId),
             const_cast<FileGrabForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FileGrabForegroundBase::editHandleName           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfName,
             this->getType().getFieldDesc(NameFieldId),
             this));


    editSField(NameFieldMask);

    return returnValue;
}

GetFieldHandlePtr FileGrabForegroundBase::getHandleFrame           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFrame,
             this->getType().getFieldDesc(FrameFieldId),
             const_cast<FileGrabForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FileGrabForegroundBase::editHandleFrame          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFrame,
             this->getType().getFieldDesc(FrameFieldId),
             this));


    editSField(FrameFieldMask);

    return returnValue;
}

GetFieldHandlePtr FileGrabForegroundBase::getHandleIncrement       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIncrement,
             this->getType().getFieldDesc(IncrementFieldId),
             const_cast<FileGrabForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr FileGrabForegroundBase::editHandleIncrement      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIncrement,
             this->getType().getFieldDesc(IncrementFieldId),
             this));


    editSField(IncrementFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FileGrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FileGrabForeground *pThis = static_cast<FileGrabForeground *>(this);

    pThis->execSync(static_cast<FileGrabForeground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FileGrabForegroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FileGrabForeground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FileGrabForeground *>(pRefAspect),
                  dynamic_cast<const FileGrabForeground *>(this));

    return returnValue;
}
#endif

void FileGrabForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
