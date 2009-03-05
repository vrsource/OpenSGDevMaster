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
 **     class BlendChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // SrcFactor default header
#include <OSGGL.h>                        // DestFactor default header
#include <OSGGL.h>                        // Equation default header
#include <OSGGL.h>                        // AlphaFunc default header


#include "OSGBlendChunkBase.h"
#include "OSGBlendChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BlendChunk
    See \ref PageSystemBlendChunk for a description. 

    The blending chunk handles OpenGL blending, i.e. the definition how incoming pixel
    are combined with the pixel already in the frame buffer.

    This chunk wraps glBlendFunc() (OSG::BlendChunk::_sfSrcFactor,
    OSG::BlendChunk::_sfDestFactor), glBlendEquation() or glBlendEquationEXT()
    (whichever is supported) (OSG::BlendChunk::_sfEquation), glBlendColor() 
    (OSG::BlendChunk::_sfColor) and glAlphaFunc() (OSG::BlendChunk::_sfAlphaFunc,
    OSG::BlendChunk::_sfAlphaValue) including glEnable(GL_ALPHA_TEST).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          BlendChunkBase::_sfSrcFactor
    The incoming pixel is multiplied by the source factor. Legal values are directly taken from the glBlendFunc() manpage.
*/

/*! \var GLenum          BlendChunkBase::_sfDestFactor
    The frame buffer pixel is multiplied by the destination factor. Legal values are directly taken from the glBlendFunc() manpage.
*/

/*! \var GLenum          BlendChunkBase::_sfEquation
    The equation used to combine the two values. Only available where GL_ARB_imaging is supported. See glBlendEquation() for details.
*/

/*! \var Color4f         BlendChunkBase::_sfColor
    This is the constant color used by blend modes *_CONSTANT_*.
*/

/*! \var GLenum          BlendChunkBase::_sfAlphaFunc
    The alphaFunc defines how fragments which do not fulfill a certain condition are handled. 
    See glAlphaFunc() for details. GL_NONE is used to disable alpha comparison.
*/

/*! \var Real32          BlendChunkBase::_sfAlphaValue
    The value used in alpha comparison.
*/

/*! \var GLenum          BlendChunkBase::_sfAlphaSrcFactor
    The incoming alpha is multiplied by the source factor before being stored 
    in the frame buffer. Only available where GL_EXT_blend_func_separate is supported.
    The default is GL_NONE, which indicates using the standard BlendFunction.
*/

/*! \var GLenum          BlendChunkBase::_sfAlphaDestFactor
    The frame buffer alpha is multiplied by the source factor before being stored 
    in the frame buffer. Only available where GL_EXT_blend_func_separate is supported.
    The default is GL_NONE, which indicates using the standard BlendFunction.
*/


void BlendChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "srcFactor",
        "The incoming pixel is multiplied by the source factor. Legal values are directly taken from the glBlendFunc() manpage.\n",
        SrcFactorFieldId, SrcFactorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleSrcFactor),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleSrcFactor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "destFactor",
        "The frame buffer pixel is multiplied by the destination factor. Legal values are directly taken from the glBlendFunc() manpage.\n",
        DestFactorFieldId, DestFactorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleDestFactor),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleDestFactor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "equation",
        "The equation used to combine the two values. Only available where GL_ARB_imaging is supported. See glBlendEquation() for details.\n",
        EquationFieldId, EquationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleEquation),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleEquation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "color",
        "This is the constant color used by blend modes *_CONSTANT_*.\n",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleColor),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "alphaFunc",
        "The alphaFunc defines how fragments which do not fulfill a certain condition are handled. \n"
        "See glAlphaFunc() for details. GL_NONE is used to disable alpha comparison.\n",
        AlphaFuncFieldId, AlphaFuncFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleAlphaFunc),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleAlphaFunc));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "alphaValue",
        "The value used in alpha comparison.\n",
        AlphaValueFieldId, AlphaValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleAlphaValue),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleAlphaValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "alphaSrcFactor",
        "The incoming alpha is multiplied by the source factor before being stored \n"
        "in the frame buffer. Only available where GL_EXT_blend_func_separate is supported.\n"
        "The default is GL_NONE, which indicates using the standard BlendFunction.\n",
        AlphaSrcFactorFieldId, AlphaSrcFactorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleAlphaSrcFactor),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleAlphaSrcFactor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "alphaDestFactor",
        "The frame buffer alpha is multiplied by the source factor before being stored \n"
        "in the frame buffer. Only available where GL_EXT_blend_func_separate is supported.\n"
        "The default is GL_NONE, which indicates using the standard BlendFunction.\n",
        AlphaDestFactorFieldId, AlphaDestFactorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BlendChunk::editHandleAlphaDestFactor),
        static_cast<FieldGetMethodSig >(&BlendChunk::getHandleAlphaDestFactor));

    oType.addInitialDesc(pDesc);
}


BlendChunkBase::TypeObject BlendChunkBase::_type(
    BlendChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&BlendChunkBase::createEmptyLocal),
    BlendChunk::initMethod,
    BlendChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BlendChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"BlendChunk\"\n"
    "   parent=\"StateChunk\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpSystemState\"\n"
    "   >\n"
    "\n"
    "See \\ref PageSystemBlendChunk for a description. \n"
    "\n"
    "The blending chunk handles OpenGL blending, i.e. the definition how incoming pixel\n"
    "are combined with the pixel already in the frame buffer.\n"
    "\n"
    "This chunk wraps glBlendFunc() (OSG::BlendChunk::_sfSrcFactor,\n"
    "OSG::BlendChunk::_sfDestFactor), glBlendEquation() or glBlendEquationEXT()\n"
    "(whichever is supported) (OSG::BlendChunk::_sfEquation), glBlendColor() \n"
    "(OSG::BlendChunk::_sfColor) and glAlphaFunc() (OSG::BlendChunk::_sfAlphaFunc,\n"
    "OSG::BlendChunk::_sfAlphaValue) including glEnable(GL_ALPHA_TEST).\n"
    "\t<Field\n"
    "\t\tname=\"srcFactor\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\tdefaultValue=\"GL_ONE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe incoming pixel is multiplied by the source factor. Legal values are directly taken from the glBlendFunc() manpage.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"destFactor\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\tdefaultValue=\"GL_ZERO\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe frame buffer pixel is multiplied by the destination factor. Legal values are directly taken from the glBlendFunc() manpage.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"equation\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe equation used to combine the two values. Only available where GL_ARB_imaging is supported. See glBlendEquation() for details.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0,0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThis is the constant color used by blend modes *_CONSTANT_*.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alphaFunc\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe alphaFunc defines how fragments which do not fulfill a certain condition are handled. \n"
    "        See glAlphaFunc() for details. GL_NONE is used to disable alpha comparison.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alphaValue\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The value used in alpha comparison.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alphaSrcFactor\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"OSG_GL_UNUSED\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe incoming alpha is multiplied by the source factor before being stored \n"
    "        in the frame buffer. Only available where GL_EXT_blend_func_separate is supported.\n"
    "        The default is GL_NONE, which indicates using the standard BlendFunction.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alphaDestFactor\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"OSG_GL_UNUSED\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe frame buffer alpha is multiplied by the source factor before being stored \n"
    "        in the frame buffer. Only available where GL_EXT_blend_func_separate is supported.\n"
    "        The default is GL_NONE, which indicates using the standard BlendFunction.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "See \\ref PageSystemBlendChunk for a description. \n"
    "\n"
    "The blending chunk handles OpenGL blending, i.e. the definition how incoming pixel\n"
    "are combined with the pixel already in the frame buffer.\n"
    "\n"
    "This chunk wraps glBlendFunc() (OSG::BlendChunk::_sfSrcFactor,\n"
    "OSG::BlendChunk::_sfDestFactor), glBlendEquation() or glBlendEquationEXT()\n"
    "(whichever is supported) (OSG::BlendChunk::_sfEquation), glBlendColor() \n"
    "(OSG::BlendChunk::_sfColor) and glAlphaFunc() (OSG::BlendChunk::_sfAlphaFunc,\n"
    "OSG::BlendChunk::_sfAlphaValue) including glEnable(GL_ALPHA_TEST).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BlendChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &BlendChunkBase::getType(void) const
{
    return _type;
}

UInt32 BlendChunkBase::getContainerSize(void) const
{
    return sizeof(BlendChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *BlendChunkBase::editSFSrcFactor(void)
{
    editSField(SrcFactorFieldMask);

    return &_sfSrcFactor;
}

const SFGLenum *BlendChunkBase::getSFSrcFactor(void) const
{
    return &_sfSrcFactor;
}


SFGLenum *BlendChunkBase::editSFDestFactor(void)
{
    editSField(DestFactorFieldMask);

    return &_sfDestFactor;
}

const SFGLenum *BlendChunkBase::getSFDestFactor(void) const
{
    return &_sfDestFactor;
}


SFGLenum *BlendChunkBase::editSFEquation(void)
{
    editSField(EquationFieldMask);

    return &_sfEquation;
}

const SFGLenum *BlendChunkBase::getSFEquation(void) const
{
    return &_sfEquation;
}


SFColor4f *BlendChunkBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *BlendChunkBase::getSFColor(void) const
{
    return &_sfColor;
}


SFGLenum *BlendChunkBase::editSFAlphaFunc(void)
{
    editSField(AlphaFuncFieldMask);

    return &_sfAlphaFunc;
}

const SFGLenum *BlendChunkBase::getSFAlphaFunc(void) const
{
    return &_sfAlphaFunc;
}


SFReal32 *BlendChunkBase::editSFAlphaValue(void)
{
    editSField(AlphaValueFieldMask);

    return &_sfAlphaValue;
}

const SFReal32 *BlendChunkBase::getSFAlphaValue(void) const
{
    return &_sfAlphaValue;
}


SFGLenum *BlendChunkBase::editSFAlphaSrcFactor(void)
{
    editSField(AlphaSrcFactorFieldMask);

    return &_sfAlphaSrcFactor;
}

const SFGLenum *BlendChunkBase::getSFAlphaSrcFactor(void) const
{
    return &_sfAlphaSrcFactor;
}


SFGLenum *BlendChunkBase::editSFAlphaDestFactor(void)
{
    editSField(AlphaDestFactorFieldMask);

    return &_sfAlphaDestFactor;
}

const SFGLenum *BlendChunkBase::getSFAlphaDestFactor(void) const
{
    return &_sfAlphaDestFactor;
}






/*------------------------------ access -----------------------------------*/

UInt32 BlendChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SrcFactorFieldMask & whichField))
    {
        returnValue += _sfSrcFactor.getBinSize();
    }
    if(FieldBits::NoField != (DestFactorFieldMask & whichField))
    {
        returnValue += _sfDestFactor.getBinSize();
    }
    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        returnValue += _sfEquation.getBinSize();
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFuncFieldMask & whichField))
    {
        returnValue += _sfAlphaFunc.getBinSize();
    }
    if(FieldBits::NoField != (AlphaValueFieldMask & whichField))
    {
        returnValue += _sfAlphaValue.getBinSize();
    }
    if(FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField))
    {
        returnValue += _sfAlphaSrcFactor.getBinSize();
    }
    if(FieldBits::NoField != (AlphaDestFactorFieldMask & whichField))
    {
        returnValue += _sfAlphaDestFactor.getBinSize();
    }

    return returnValue;
}

void BlendChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SrcFactorFieldMask & whichField))
    {
        _sfSrcFactor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DestFactorFieldMask & whichField))
    {
        _sfDestFactor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        _sfEquation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFuncFieldMask & whichField))
    {
        _sfAlphaFunc.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaValueFieldMask & whichField))
    {
        _sfAlphaValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField))
    {
        _sfAlphaSrcFactor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaDestFactorFieldMask & whichField))
    {
        _sfAlphaDestFactor.copyToBin(pMem);
    }
}

void BlendChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SrcFactorFieldMask & whichField))
    {
        _sfSrcFactor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DestFactorFieldMask & whichField))
    {
        _sfDestFactor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        _sfEquation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFuncFieldMask & whichField))
    {
        _sfAlphaFunc.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaValueFieldMask & whichField))
    {
        _sfAlphaValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaSrcFactorFieldMask & whichField))
    {
        _sfAlphaSrcFactor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaDestFactorFieldMask & whichField))
    {
        _sfAlphaDestFactor.copyFromBin(pMem);
    }
}

//! create a new instance of the class
BlendChunkTransitPtr BlendChunkBase::createLocal(BitVector bFlags)
{
    BlendChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<BlendChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
BlendChunkTransitPtr BlendChunkBase::createDependent(BitVector bFlags)
{
    BlendChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<BlendChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
BlendChunkTransitPtr BlendChunkBase::create(void)
{
    BlendChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<BlendChunk>(tmpPtr);
    }

    return fc;
}

BlendChunk *BlendChunkBase::createEmptyLocal(BitVector bFlags)
{
    BlendChunk *returnValue;

    newPtr<BlendChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
BlendChunk *BlendChunkBase::createEmpty(void)
{
    BlendChunk *returnValue;

    newPtr<BlendChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr BlendChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    BlendChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BlendChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr BlendChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    BlendChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const BlendChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr BlendChunkBase::shallowCopy(void) const
{
    BlendChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const BlendChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

BlendChunkBase::BlendChunkBase(void) :
    Inherited(),
    _sfSrcFactor              (GLenum(GL_ONE)),
    _sfDestFactor             (GLenum(GL_ZERO)),
    _sfEquation               (GLenum(GL_NONE)),
    _sfColor                  (Color4f(0,0,0,0)),
    _sfAlphaFunc              (GLenum(GL_NONE)),
    _sfAlphaValue             (Real32(0)),
    _sfAlphaSrcFactor         (GLenum(OSG_GL_UNUSED)),
    _sfAlphaDestFactor        (GLenum(OSG_GL_UNUSED))
{
}

BlendChunkBase::BlendChunkBase(const BlendChunkBase &source) :
    Inherited(source),
    _sfSrcFactor              (source._sfSrcFactor              ),
    _sfDestFactor             (source._sfDestFactor             ),
    _sfEquation               (source._sfEquation               ),
    _sfColor                  (source._sfColor                  ),
    _sfAlphaFunc              (source._sfAlphaFunc              ),
    _sfAlphaValue             (source._sfAlphaValue             ),
    _sfAlphaSrcFactor         (source._sfAlphaSrcFactor         ),
    _sfAlphaDestFactor        (source._sfAlphaDestFactor        )
{
}


/*-------------------------- destructors ----------------------------------*/

BlendChunkBase::~BlendChunkBase(void)
{
}


GetFieldHandlePtr BlendChunkBase::getHandleSrcFactor       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfSrcFactor,
             this->getType().getFieldDesc(SrcFactorFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleSrcFactor      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfSrcFactor,
             this->getType().getFieldDesc(SrcFactorFieldId)));


    editSField(SrcFactorFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleDestFactor      (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfDestFactor,
             this->getType().getFieldDesc(DestFactorFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleDestFactor     (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfDestFactor,
             this->getType().getFieldDesc(DestFactorFieldId)));


    editSField(DestFactorFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleEquation        (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfEquation,
             this->getType().getFieldDesc(EquationFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleEquation       (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfEquation,
             this->getType().getFieldDesc(EquationFieldId)));


    editSField(EquationFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleAlphaFunc       (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfAlphaFunc,
             this->getType().getFieldDesc(AlphaFuncFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleAlphaFunc      (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfAlphaFunc,
             this->getType().getFieldDesc(AlphaFuncFieldId)));


    editSField(AlphaFuncFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleAlphaValue      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAlphaValue,
             this->getType().getFieldDesc(AlphaValueFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleAlphaValue     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAlphaValue,
             this->getType().getFieldDesc(AlphaValueFieldId)));


    editSField(AlphaValueFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleAlphaSrcFactor  (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfAlphaSrcFactor,
             this->getType().getFieldDesc(AlphaSrcFactorFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleAlphaSrcFactor (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfAlphaSrcFactor,
             this->getType().getFieldDesc(AlphaSrcFactorFieldId)));


    editSField(AlphaSrcFactorFieldMask);

    return returnValue;
}

GetFieldHandlePtr BlendChunkBase::getHandleAlphaDestFactor (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfAlphaDestFactor,
             this->getType().getFieldDesc(AlphaDestFactorFieldId)));

    return returnValue;
}

EditFieldHandlePtr BlendChunkBase::editHandleAlphaDestFactor(void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfAlphaDestFactor,
             this->getType().getFieldDesc(AlphaDestFactorFieldId)));


    editSField(AlphaDestFactorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BlendChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    BlendChunk *pThis = static_cast<BlendChunk *>(this);

    pThis->execSync(static_cast<BlendChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *BlendChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    BlendChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const BlendChunk *>(pRefAspect),
                  dynamic_cast<const BlendChunk *>(this));

    return returnValue;
}
#endif

void BlendChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BlendChunk *>::_type("BlendChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BlendChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BlendChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BlendChunk *,
                           0);

OSG_END_NAMESPACE
