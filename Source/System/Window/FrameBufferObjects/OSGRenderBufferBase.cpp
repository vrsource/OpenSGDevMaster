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
 **     class RenderBuffer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGRenderBufferBase.h"
#include "OSGRenderBuffer.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RenderBuffer
    Render buffer.  Wraps OpenGL render buffer objects.  RENDERBUFFER_EXT
    A renderbuffer is a data storage object containing a single image of a renderable internal format.

    \see TextureBuffer
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var GLenum          RenderBufferBase::_sfGLId
    The OpenGL texture id for this buffer object.
*/

/*! \var GLenum          RenderBufferBase::_sfInternalFormat
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RenderBuffer *>::_type("RenderBufferPtr", "FrameBufferAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RenderBuffer *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RenderBuffer *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RenderBuffer *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RenderBufferBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "GLId",
        "The OpenGL texture id for this buffer object.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&RenderBuffer::editHandleGLId),
        static_cast<FieldGetMethodSig >(&RenderBuffer::getHandleGLId));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "internalFormat",
        "",
        InternalFormatFieldId, InternalFormatFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RenderBuffer::editHandleInternalFormat),
        static_cast<FieldGetMethodSig >(&RenderBuffer::getHandleInternalFormat));

    oType.addInitialDesc(pDesc);
}


RenderBufferBase::TypeObject RenderBufferBase::_type(
    RenderBufferBase::getClassname(),
    Inherited::getClassname(),
    "RenderBuffer",
    0,
    reinterpret_cast<PrototypeCreateF>(&RenderBufferBase::createEmptyLocal),
    RenderBuffer::initMethod,
    RenderBuffer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RenderBuffer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "        name=\"RenderBuffer\"\n"
    "        parent=\"FrameBufferAttachment\"\n"
    "        library=\"System\"\n"
    "        pointerfieldtypes=\"both\"\n"
    "        structure=\"concrete\"\n"
    "        systemcomponent=\"true\"\n"
    "        parentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    ">\n"
    "Render buffer.  Wraps OpenGL render buffer objects.  RENDERBUFFER_EXT\n"
    "A renderbuffer is a data storage object containing a single image of a renderable internal format.\n"
    "\n"
    "\\see TextureBuffer\n"
    "        <Field\n"
    "                name=\"GLId\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"internal\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "        >\n"
    "        The OpenGL texture id for this buffer object.\n"
    "        </Field>\n"
    "        <Field\n"
    "                name=\"internalFormat\"\n"
    "                type=\"GLenum\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"public\"\n"
    "                defaultValue=\"GL_NONE\"\n"
    "        >\n"
    "        </Field>\n"
    "</FieldContainer>\n",
    "Render buffer.  Wraps OpenGL render buffer objects.  RENDERBUFFER_EXT\n"
    "A renderbuffer is a data storage object containing a single image of a renderable internal format.\n"
    "\n"
    "\\see TextureBuffer\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RenderBufferBase::getType(void)
{
    return _type;
}

const FieldContainerType &RenderBufferBase::getType(void) const
{
    return _type;
}

UInt32 RenderBufferBase::getContainerSize(void) const
{
    return sizeof(RenderBuffer);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *RenderBufferBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *RenderBufferBase::getSFGLId(void) const
{
    return &_sfGLId;
}


SFGLenum *RenderBufferBase::editSFInternalFormat(void)
{
    editSField(InternalFormatFieldMask);

    return &_sfInternalFormat;
}

const SFGLenum *RenderBufferBase::getSFInternalFormat(void) const
{
    return &_sfInternalFormat;
}






/*------------------------------ access -----------------------------------*/

UInt32 RenderBufferBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }
    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
    {
        returnValue += _sfInternalFormat.getBinSize();
    }

    return returnValue;
}

void RenderBufferBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
    {
        _sfInternalFormat.copyToBin(pMem);
    }
}

void RenderBufferBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InternalFormatFieldMask & whichField))
    {
        _sfInternalFormat.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RenderBufferTransitPtr RenderBufferBase::createLocal(BitVector bFlags)
{
    RenderBufferTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RenderBuffer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RenderBufferTransitPtr RenderBufferBase::createDependent(BitVector bFlags)
{
    RenderBufferTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RenderBuffer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RenderBufferTransitPtr RenderBufferBase::create(void)
{
    RenderBufferTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RenderBuffer>(tmpPtr);
    }

    return fc;
}

RenderBuffer *RenderBufferBase::createEmptyLocal(BitVector bFlags)
{
    RenderBuffer *returnValue;

    newPtr<RenderBuffer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RenderBuffer *RenderBufferBase::createEmpty(void)
{
    RenderBuffer *returnValue;

    newPtr<RenderBuffer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RenderBufferBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RenderBuffer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RenderBuffer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RenderBufferBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RenderBuffer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RenderBuffer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RenderBufferBase::shallowCopy(void) const
{
    RenderBuffer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RenderBuffer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RenderBufferBase::RenderBufferBase(void) :
    Inherited(),
    _sfGLId                   (GLenum(0)),
    _sfInternalFormat         (GLenum(GL_NONE))
{
}

RenderBufferBase::RenderBufferBase(const RenderBufferBase &source) :
    Inherited(source),
    _sfGLId                   (source._sfGLId                   ),
    _sfInternalFormat         (source._sfInternalFormat         )
{
}


/*-------------------------- destructors ----------------------------------*/

RenderBufferBase::~RenderBufferBase(void)
{
}


GetFieldHandlePtr RenderBufferBase::getHandleGLId            (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             const_cast<RenderBufferBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RenderBufferBase::editHandleGLId           (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             this));


    editSField(GLIdFieldMask);

    return returnValue;
}

GetFieldHandlePtr RenderBufferBase::getHandleInternalFormat  (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfInternalFormat,
             this->getType().getFieldDesc(InternalFormatFieldId),
             const_cast<RenderBufferBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RenderBufferBase::editHandleInternalFormat (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfInternalFormat,
             this->getType().getFieldDesc(InternalFormatFieldId),
             this));


    editSField(InternalFormatFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RenderBufferBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RenderBuffer *pThis = static_cast<RenderBuffer *>(this);

    pThis->execSync(static_cast<RenderBuffer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RenderBufferBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RenderBuffer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RenderBuffer *>(pRefAspect),
                  dynamic_cast<const RenderBuffer *>(this));

    return returnValue;
}
#endif

void RenderBufferBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
