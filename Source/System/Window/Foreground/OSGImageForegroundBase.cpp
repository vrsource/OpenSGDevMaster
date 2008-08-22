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
 **     class ImageForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // Images Class

#include "OSGImageForegroundBase.h"
#include "OSGImageForeground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ImageForeground
    \ingroup GrpSystemWindowForegrounds

    The ImageForeground is used to draw images on top of the viewport.  See \ref
    PageSystemWindowForegroundImage for a description.

    The images are stored in the _mfImages Field, the corresponding positions in
    the _mfPositions Field.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Image *         ImageForegroundBase::_mfImages
    The images to display.
*/

/*! \var Pnt2f           ImageForegroundBase::_mfPositions
    The positions of the images.
*/


void ImageForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecImagePtr::Description(
        MFUnrecImagePtr::getClassType(),
        "images",
        "The images to display.\n",
        ImagesFieldId, ImagesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ImageForeground::editHandleImages),
        static_cast<FieldGetMethodSig >(&ImageForeground::getHandleImages));

    oType.addInitialDesc(pDesc);

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "positions",
        "The positions of the images.\n",
        PositionsFieldId, PositionsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ImageForeground::editHandlePositions),
        static_cast<FieldGetMethodSig >(&ImageForeground::getHandlePositions));

    oType.addInitialDesc(pDesc);
}


ImageForegroundBase::TypeObject ImageForegroundBase::_type(
    ImageForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ImageForegroundBase::createEmptyLocal),
    ImageForeground::initMethod,
    ImageForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ImageForegroundBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ImageForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The ImageForeground is used to draw images on top of the viewport.  See \\ref\n"
    "PageSystemWindowForegroundImage for a description.\n"
    "\n"
    "The images are stored in the _mfImages Field, the corresponding positions in\n"
    "the _mfPositions Field.\n"
    "\t<Field\n"
    "\t\tname=\"images\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe images to display.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"positions\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe positions of the images.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The ImageForeground is used to draw images on top of the viewport.  See \\ref\n"
    "PageSystemWindowForegroundImage for a description.\n"
    "\n"
    "The images are stored in the _mfImages Field, the corresponding positions in\n"
    "the _mfPositions Field.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImageForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &ImageForegroundBase::getType(void) const
{
    return _type;
}

UInt32 ImageForegroundBase::getContainerSize(void) const
{
    return sizeof(ImageForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ImageForeground::_mfImages field.
const MFUnrecImagePtr *ImageForegroundBase::getMFImages(void) const
{
    return &_mfImages;
}

MFUnrecImagePtr     *ImageForegroundBase::editMFImages         (void)
{
    editMField(ImagesFieldMask, _mfImages);

    return &_mfImages;
}

MFPnt2f *ImageForegroundBase::editMFPositions(void)
{
    editMField(PositionsFieldMask, _mfPositions);

    return &_mfPositions;
}

const MFPnt2f *ImageForegroundBase::getMFPositions(void) const
{
    return &_mfPositions;
}




void ImageForegroundBase::pushToImages(Image * const value)
{
    editMField(ImagesFieldMask, _mfImages);

    _mfImages.push_back(value);
}

void ImageForegroundBase::assignImages   (const MFUnrecImagePtr   &value)
{
    MFUnrecImagePtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecImagePtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<ImageForeground *>(this)->clearImages();

    while(elemIt != elemEnd)
    {
        this->pushToImages(*elemIt);

        ++elemIt;
    }
}

void ImageForegroundBase::removeFromImages(UInt32 uiIndex)
{
    if(uiIndex < _mfImages.size())
    {
        editMField(ImagesFieldMask, _mfImages);

        _mfImages.erase(uiIndex);
    }
}

void ImageForegroundBase::removeObjFromImages(Image * const value)
{
    Int32 iElemIdx = _mfImages.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ImagesFieldMask, _mfImages);

        _mfImages.erase(iElemIdx);
    }
}
void ImageForegroundBase::clearImages(void)
{
    editMField(ImagesFieldMask, _mfImages);


    _mfImages.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ImageForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        returnValue += _mfImages.getBinSize();
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        returnValue += _mfPositions.getBinSize();
    }

    return returnValue;
}

void ImageForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyToBin(pMem);
    }
}

void ImageForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImagesFieldMask & whichField))
    {
        _mfImages.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionsFieldMask & whichField))
    {
        _mfPositions.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ImageForegroundTransitPtr ImageForegroundBase::createLocal(BitVector bFlags)
{
    ImageForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ImageForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ImageForegroundTransitPtr ImageForegroundBase::create(void)
{
    ImageForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ImageForeground>(tmpPtr);
    }

    return fc;
}

ImageForeground *ImageForegroundBase::createEmptyLocal(BitVector bFlags)
{
    ImageForeground *returnValue;

    newPtr<ImageForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ImageForeground *ImageForegroundBase::createEmpty(void)
{
    ImageForeground *returnValue;

    newPtr<ImageForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ImageForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ImageForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ImageForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ImageForegroundBase::shallowCopy(void) const
{
    ImageForeground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ImageForeground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ImageForegroundBase::ImageForegroundBase(void) :
    Inherited(),
    _mfImages                 (),
    _mfPositions              ()
{
}

ImageForegroundBase::ImageForegroundBase(const ImageForegroundBase &source) :
    Inherited(source),
    _mfImages                 (),
    _mfPositions              (source._mfPositions              )
{
}


/*-------------------------- destructors ----------------------------------*/

ImageForegroundBase::~ImageForegroundBase(void)
{
}

void ImageForegroundBase::onCreate(const ImageForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ImageForeground *pThis = static_cast<ImageForeground *>(this);

        MFUnrecImagePtr::const_iterator ImagesIt  =
            source->_mfImages.begin();
        MFUnrecImagePtr::const_iterator ImagesEnd =
            source->_mfImages.end  ();

        while(ImagesIt != ImagesEnd)
        {
            pThis->pushToImages(*ImagesIt);

            ++ImagesIt;
        }
    }
}

GetFieldHandlePtr ImageForegroundBase::getHandleImages          (void) const
{
    MFUnrecImagePtr::GetHandlePtr returnValue(
        new  MFUnrecImagePtr::GetHandle(
             &_mfImages,
             this->getType().getFieldDesc(ImagesFieldId)));

    return returnValue;
}

EditFieldHandlePtr ImageForegroundBase::editHandleImages         (void)
{
    MFUnrecImagePtr::EditHandlePtr returnValue(
        new  MFUnrecImagePtr::EditHandle(
             &_mfImages,
             this->getType().getFieldDesc(ImagesFieldId)));

    returnValue->setAddMethod(
        boost::bind(&ImageForeground::pushToImages,
                    static_cast<ImageForeground *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ImageForeground::removeFromImages,
                    static_cast<ImageForeground *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ImageForeground::removeObjFromImages,
                    static_cast<ImageForeground *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ImageForeground::clearImages,
                    static_cast<ImageForeground *>(this)));

    editMField(ImagesFieldMask, _mfImages);

    return returnValue;
}

GetFieldHandlePtr ImageForegroundBase::getHandlePositions       (void) const
{
    MFPnt2f::GetHandlePtr returnValue(
        new  MFPnt2f::GetHandle(
             &_mfPositions,
             this->getType().getFieldDesc(PositionsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ImageForegroundBase::editHandlePositions      (void)
{
    MFPnt2f::EditHandlePtr returnValue(
        new  MFPnt2f::EditHandle(
             &_mfPositions,
             this->getType().getFieldDesc(PositionsFieldId)));


    editMField(PositionsFieldMask, _mfPositions);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ImageForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ImageForeground *pThis = static_cast<ImageForeground *>(this);

    pThis->execSync(static_cast<ImageForeground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ImageForegroundBase::createAspectCopy(void) const
{
    ImageForeground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ImageForeground *>(this));

    return returnValue;
}
#endif

void ImageForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ImageForeground *>(this)->clearImages();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPositions.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ImageForeground *>::_type("ImageForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ImageForeground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ImageForeground *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ImageForeground *,
                           0);

OSG_END_NAMESPACE
