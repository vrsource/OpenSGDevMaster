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
 **     class TextureBuffer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREBUFFERBASE_H_
#define _OSGTEXTUREBUFFERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGFrameBufferAttachment.h" // Parent

#include "OSGTextureObjChunkFields.h" // Texture type
#include "OSGGLenumFields.h" // TexTarget type
#include "OSGUInt32Fields.h" // Level type
#include "OSGUInt32Fields.h" // Zoffset type

#include "OSGTextureBufferFields.h"

OSG_BEGIN_NAMESPACE

class TextureBuffer;

//! \brief TextureBuffer Base Class.

class OSG_SYSTEM_DLLMAPPING TextureBufferBase : public FrameBufferAttachment
{
  public:

    typedef FrameBufferAttachment Inherited;
    typedef FrameBufferAttachment ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextureBuffer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TextureFieldId = Inherited::NextFieldId,
        TexTargetFieldId = TextureFieldId + 1,
        LevelFieldId = TexTargetFieldId + 1,
        ZoffsetFieldId = LevelFieldId + 1,
        NextFieldId = ZoffsetFieldId + 1
    };

    static const OSG::BitVector TextureFieldMask =
        (TypeTraits<BitVector>::One << TextureFieldId);
    static const OSG::BitVector TexTargetFieldMask =
        (TypeTraits<BitVector>::One << TexTargetFieldId);
    static const OSG::BitVector LevelFieldMask =
        (TypeTraits<BitVector>::One << LevelFieldId);
    static const OSG::BitVector ZoffsetFieldMask =
        (TypeTraits<BitVector>::One << ZoffsetFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFTextureObjChunkPtr *getSFTexture         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFTexTarget       (void);
#endif
                  SFGLenum            *editSFTexTarget      (void);
            const SFGLenum            *getSFTexTarget       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFLevel           (void);
#endif
                  SFUInt32            *editSFLevel          (void);
            const SFUInt32            *getSFLevel           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFZoffset         (void);
#endif
                  SFUInt32            *editSFZoffset        (void);
            const SFUInt32            *getSFZoffset         (void) const;


                  TextureObjChunkPtrConst getTexture        (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getTexTarget       (void);
#endif
                  GLenum              &editTexTarget      (void);
            const GLenum              &getTexTarget       (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getLevel           (void);
#endif
                  UInt32              &editLevel          (void);
            const UInt32              &getLevel           (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getZoffset         (void);
#endif
                  UInt32              &editZoffset        (void);
            const UInt32              &getZoffset         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTexture        (TextureObjChunkPtrConstArg value);
            void setTexTarget      (const GLenum &value);
            void setLevel          (const UInt32 &value);
            void setZoffset        (const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TextureBufferPtr create     (void);
    static  TextureBufferPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFTextureObjChunkPtr _sfTexture;
    SFGLenum          _sfTexTarget;
    SFUInt32          _sfLevel;
    SFUInt32          _sfZoffset;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureBufferBase(void);
    TextureBufferBase(const TextureBufferBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureBufferBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextureBuffer *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTexture         (void) const;
    EditFieldHandlePtr editHandleTexture        (void);
    GetFieldHandlePtr  getHandleTexTarget       (void) const;
    EditFieldHandlePtr editHandleTexTarget      (void);
    GetFieldHandlePtr  getHandleLevel           (void) const;
    EditFieldHandlePtr editHandleLevel          (void);
    GetFieldHandlePtr  getHandleZoffset         (void) const;
    EditFieldHandlePtr editHandleZoffset        (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TextureBufferBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainerPtr createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextureBufferBase &source);
};

typedef TextureBufferBase *TextureBufferBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREBUFFERBASE_H_ */
