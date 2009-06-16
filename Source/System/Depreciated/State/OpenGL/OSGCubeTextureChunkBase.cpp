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
 **     class CubeTextureChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // PosZImage Class
#include <OSGImage.h> // PosXImage Class
#include <OSGImage.h> // NegXImage Class
#include <OSGImage.h> // PosYImage Class
#include <OSGImage.h> // NegYImage Class

#include "OSGCubeTextureChunkBase.h"
#include "OSGCubeTextureChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CubeTextureChunk
    \ingroup GrpSystemState

    See \ref PageSystemCubeTextureChunk for a description.

    The CubeTexture is defined by 6 separate texture images. As it is derived from 
    the standard texture chunk it already has an image, which is used for the 
    negative Z direction. The other 5 images are stored in variables that are named
    according to the direction they represent (OSG::CubeTextureChunk::_sfPosZImage,
    OSG::CubeTextureChunk::_sfNegYImage, OSG::CubeTextureChunk::_sfPosYImage, 
    OSG::CubeTextureChunk::_sfNegXImage, OSG::CubeTextureChunk::_sfPosXImage).

    \deprecated Use OSG::CubeTextureObjChunk instead.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Image *         CubeTextureChunkBase::_sfPosZImage
    The image for the positive Z direction for the cube tetxure.
*/

/*! \var Image *         CubeTextureChunkBase::_sfPosXImage
    The image for the positive X direction for the cube tetxure.
*/

/*! \var Image *         CubeTextureChunkBase::_sfNegXImage
    The image for the negative X direction for the cube tetxure.
*/

/*! \var Image *         CubeTextureChunkBase::_sfPosYImage
    The image for the positive Y direction for the cube tetxure.
*/

/*! \var Image *         CubeTextureChunkBase::_sfNegYImage
    The image for the negative Y direction for the cube tetxure.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CubeTextureChunk *>::_type("CubeTextureChunkPtr", "TextureChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CubeTextureChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CubeTextureChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CubeTextureChunk *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CubeTextureChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "posZImage",
        "The image for the positive Z direction for the cube tetxure.\n",
        PosZImageFieldId, PosZImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeTextureChunk::editHandlePosZImage),
        static_cast<FieldGetMethodSig >(&CubeTextureChunk::getHandlePosZImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "posXImage",
        "The image for the positive X direction for the cube tetxure.\n",
        PosXImageFieldId, PosXImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeTextureChunk::editHandlePosXImage),
        static_cast<FieldGetMethodSig >(&CubeTextureChunk::getHandlePosXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "negXImage",
        "The image for the negative X direction for the cube tetxure.\n",
        NegXImageFieldId, NegXImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeTextureChunk::editHandleNegXImage),
        static_cast<FieldGetMethodSig >(&CubeTextureChunk::getHandleNegXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "posYImage",
        "The image for the positive Y direction for the cube tetxure.\n",
        PosYImageFieldId, PosYImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeTextureChunk::editHandlePosYImage),
        static_cast<FieldGetMethodSig >(&CubeTextureChunk::getHandlePosYImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "negYImage",
        "The image for the negative Y direction for the cube tetxure.\n",
        NegYImageFieldId, NegYImageFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CubeTextureChunk::editHandleNegYImage),
        static_cast<FieldGetMethodSig >(&CubeTextureChunk::getHandleNegYImage));

    oType.addInitialDesc(pDesc);
}


CubeTextureChunkBase::TypeObject CubeTextureChunkBase::_type(
    CubeTextureChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CubeTextureChunkBase::createEmptyLocal),
    CubeTextureChunk::initMethod,
    CubeTextureChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CubeTextureChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CubeTextureChunk\"\n"
    "\tparent=\"TextureChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (OSG::CubeTextureChunk::_sfPosZImage,\n"
    "OSG::CubeTextureChunk::_sfNegYImage, OSG::CubeTextureChunk::_sfPosYImage, \n"
    "OSG::CubeTextureChunk::_sfNegXImage, OSG::CubeTextureChunk::_sfPosXImage).\n"
    "\n"
    "\\deprecated Use OSG::CubeTextureObjChunk instead.\n"
    "\t<Field\n"
    "\t\tname=\"posZImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Z direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive X direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative X direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Y direction for the cube tetxure.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative Y direction for the cube tetxure.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (OSG::CubeTextureChunk::_sfPosZImage,\n"
    "OSG::CubeTextureChunk::_sfNegYImage, OSG::CubeTextureChunk::_sfPosYImage, \n"
    "OSG::CubeTextureChunk::_sfNegXImage, OSG::CubeTextureChunk::_sfPosXImage).\n"
    "\n"
    "\\deprecated Use OSG::CubeTextureObjChunk instead.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CubeTextureChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &CubeTextureChunkBase::getType(void) const
{
    return _type;
}

UInt32 CubeTextureChunkBase::getContainerSize(void) const
{
    return sizeof(CubeTextureChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CubeTextureChunk::_sfPosZImage field.
const SFUnrecImagePtr *CubeTextureChunkBase::getSFPosZImage(void) const
{
    return &_sfPosZImage;
}

SFUnrecImagePtr     *CubeTextureChunkBase::editSFPosZImage      (void)
{
    editSField(PosZImageFieldMask);

    return &_sfPosZImage;
}

//! Get the CubeTextureChunk::_sfPosXImage field.
const SFUnrecImagePtr *CubeTextureChunkBase::getSFPosXImage(void) const
{
    return &_sfPosXImage;
}

SFUnrecImagePtr     *CubeTextureChunkBase::editSFPosXImage      (void)
{
    editSField(PosXImageFieldMask);

    return &_sfPosXImage;
}

//! Get the CubeTextureChunk::_sfNegXImage field.
const SFUnrecImagePtr *CubeTextureChunkBase::getSFNegXImage(void) const
{
    return &_sfNegXImage;
}

SFUnrecImagePtr     *CubeTextureChunkBase::editSFNegXImage      (void)
{
    editSField(NegXImageFieldMask);

    return &_sfNegXImage;
}

//! Get the CubeTextureChunk::_sfPosYImage field.
const SFUnrecImagePtr *CubeTextureChunkBase::getSFPosYImage(void) const
{
    return &_sfPosYImage;
}

SFUnrecImagePtr     *CubeTextureChunkBase::editSFPosYImage      (void)
{
    editSField(PosYImageFieldMask);

    return &_sfPosYImage;
}

//! Get the CubeTextureChunk::_sfNegYImage field.
const SFUnrecImagePtr *CubeTextureChunkBase::getSFNegYImage(void) const
{
    return &_sfNegYImage;
}

SFUnrecImagePtr     *CubeTextureChunkBase::editSFNegYImage      (void)
{
    editSField(NegYImageFieldMask);

    return &_sfNegYImage;
}





/*------------------------------ access -----------------------------------*/

UInt32 CubeTextureChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        returnValue += _sfPosZImage.getBinSize();
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        returnValue += _sfPosXImage.getBinSize();
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        returnValue += _sfNegXImage.getBinSize();
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        returnValue += _sfPosYImage.getBinSize();
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        returnValue += _sfNegYImage.getBinSize();
    }

    return returnValue;
}

void CubeTextureChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyToBin(pMem);
    }
}

void CubeTextureChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CubeTextureChunkTransitPtr CubeTextureChunkBase::createLocal(BitVector bFlags)
{
    CubeTextureChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CubeTextureChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CubeTextureChunkTransitPtr CubeTextureChunkBase::createDependent(BitVector bFlags)
{
    CubeTextureChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CubeTextureChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CubeTextureChunkTransitPtr CubeTextureChunkBase::create(void)
{
    CubeTextureChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CubeTextureChunk>(tmpPtr);
    }

    return fc;
}

CubeTextureChunk *CubeTextureChunkBase::createEmptyLocal(BitVector bFlags)
{
    CubeTextureChunk *returnValue;

    newPtr<CubeTextureChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CubeTextureChunk *CubeTextureChunkBase::createEmpty(void)
{
    CubeTextureChunk *returnValue;

    newPtr<CubeTextureChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr CubeTextureChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CubeTextureChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CubeTextureChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CubeTextureChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CubeTextureChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CubeTextureChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CubeTextureChunkBase::shallowCopy(void) const
{
    CubeTextureChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CubeTextureChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

CubeTextureChunkBase::CubeTextureChunkBase(void) :
    Inherited(),
    _sfPosZImage              (NULL),
    _sfPosXImage              (NULL),
    _sfNegXImage              (NULL),
    _sfPosYImage              (NULL),
    _sfNegYImage              (NULL)
{
}

CubeTextureChunkBase::CubeTextureChunkBase(const CubeTextureChunkBase &source) :
    Inherited(source),
    _sfPosZImage              (NULL),
    _sfPosXImage              (NULL),
    _sfNegXImage              (NULL),
    _sfPosYImage              (NULL),
    _sfNegYImage              (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

CubeTextureChunkBase::~CubeTextureChunkBase(void)
{
}

void CubeTextureChunkBase::onCreate(const CubeTextureChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CubeTextureChunk *pThis = static_cast<CubeTextureChunk *>(this);

        pThis->setPosZImage(source->getPosZImage());

        pThis->setPosXImage(source->getPosXImage());

        pThis->setNegXImage(source->getNegXImage());

        pThis->setPosYImage(source->getPosYImage());

        pThis->setNegYImage(source->getNegYImage());
    }
}

GetFieldHandlePtr CubeTextureChunkBase::getHandlePosZImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfPosZImage,
             this->getType().getFieldDesc(PosZImageFieldId),
             const_cast<CubeTextureChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureChunkBase::editHandlePosZImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfPosZImage,
             this->getType().getFieldDesc(PosZImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CubeTextureChunk::setPosZImage,
                    static_cast<CubeTextureChunk *>(this), _1));

    editSField(PosZImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureChunkBase::getHandlePosXImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfPosXImage,
             this->getType().getFieldDesc(PosXImageFieldId),
             const_cast<CubeTextureChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureChunkBase::editHandlePosXImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfPosXImage,
             this->getType().getFieldDesc(PosXImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CubeTextureChunk::setPosXImage,
                    static_cast<CubeTextureChunk *>(this), _1));

    editSField(PosXImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureChunkBase::getHandleNegXImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfNegXImage,
             this->getType().getFieldDesc(NegXImageFieldId),
             const_cast<CubeTextureChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureChunkBase::editHandleNegXImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfNegXImage,
             this->getType().getFieldDesc(NegXImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CubeTextureChunk::setNegXImage,
                    static_cast<CubeTextureChunk *>(this), _1));

    editSField(NegXImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureChunkBase::getHandlePosYImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfPosYImage,
             this->getType().getFieldDesc(PosYImageFieldId),
             const_cast<CubeTextureChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureChunkBase::editHandlePosYImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfPosYImage,
             this->getType().getFieldDesc(PosYImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CubeTextureChunk::setPosYImage,
                    static_cast<CubeTextureChunk *>(this), _1));

    editSField(PosYImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureChunkBase::getHandleNegYImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfNegYImage,
             this->getType().getFieldDesc(NegYImageFieldId),
             const_cast<CubeTextureChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureChunkBase::editHandleNegYImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfNegYImage,
             this->getType().getFieldDesc(NegYImageFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CubeTextureChunk::setNegYImage,
                    static_cast<CubeTextureChunk *>(this), _1));

    editSField(NegYImageFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CubeTextureChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CubeTextureChunk *pThis = static_cast<CubeTextureChunk *>(this);

    pThis->execSync(static_cast<CubeTextureChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CubeTextureChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CubeTextureChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CubeTextureChunk *>(pRefAspect),
                  dynamic_cast<const CubeTextureChunk *>(this));

    return returnValue;
}
#endif

void CubeTextureChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CubeTextureChunk *>(this)->setPosZImage(NULL);

    static_cast<CubeTextureChunk *>(this)->setPosXImage(NULL);

    static_cast<CubeTextureChunk *>(this)->setNegXImage(NULL);

    static_cast<CubeTextureChunk *>(this)->setPosYImage(NULL);

    static_cast<CubeTextureChunk *>(this)->setNegYImage(NULL);


}


OSG_END_NAMESPACE
