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
 **     class ShadowMapEngine
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADOWMAPENGINEBASE_H_
#define _OSGSHADOWMAPENGINEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGLightEngine.h" // Parent

#include "OSGFrameBufferObjectFields.h" // RenderTarget type
#include "OSGInt32Fields.h" // Width type
#include "OSGInt32Fields.h" // Height type
#include "OSGColor4fFields.h" // ShadowColor type
#include "OSGReal32Fields.h" // OffsetBias type
#include "OSGReal32Fields.h" // OffsetFactor type

#include "OSGShadowMapEngineFields.h"

#include "OSGShadowMapEngineParent.h"

OSG_BEGIN_NAMESPACE

class ShadowMapEngine;

//! \brief ShadowMapEngine Base Class.

class OSG_GROUP_DLLMAPPING ShadowMapEngineBase : public ShadowMapEngineParent
{
  public:

    typedef ShadowMapEngineParent Inherited;
    typedef LightEngine ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShadowMapEngine);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RenderTargetFieldId = Inherited::NextFieldId,
        WidthFieldId = RenderTargetFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        ShadowColorFieldId = HeightFieldId + 1,
        OffsetBiasFieldId = ShadowColorFieldId + 1,
        OffsetFactorFieldId = OffsetBiasFieldId + 1,
        NextFieldId = OffsetFactorFieldId + 1
    };

    static const OSG::BitVector RenderTargetFieldMask =
        (TypeTraits<BitVector>::One << RenderTargetFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector ShadowColorFieldMask =
        (TypeTraits<BitVector>::One << ShadowColorFieldId);
    static const OSG::BitVector OffsetBiasFieldMask =
        (TypeTraits<BitVector>::One << OffsetBiasFieldId);
    static const OSG::BitVector OffsetFactorFieldMask =
        (TypeTraits<BitVector>::One << OffsetFactorFieldId);
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

            const SFFrameBufferObjectPtr *getSFRenderTarget    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFWidth           (void);
#endif
                  SFInt32             *editSFWidth          (void);
            const SFInt32             *getSFWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFHeight          (void);
#endif
                  SFInt32             *editSFHeight         (void);
            const SFInt32             *getSFHeight          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4f           *getSFShadowColor     (void);
#endif
                  SFColor4f           *editSFShadowColor    (void);
            const SFColor4f           *getSFShadowColor     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOffsetBias      (void);
#endif
                  SFReal32            *editSFOffsetBias     (void);
            const SFReal32            *getSFOffsetBias      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFOffsetFactor    (void);
#endif
                  SFReal32            *editSFOffsetFactor   (void);
            const SFReal32            *getSFOffsetFactor    (void) const;


                  FrameBufferObjectPtrConst getRenderTarget   (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getWidth           (void);
#endif
                  Int32               &editWidth          (void);
            const Int32               &getWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getHeight          (void);
#endif
                  Int32               &editHeight         (void);
            const Int32               &getHeight          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4f             &getShadowColor     (void);
#endif
                  Color4f             &editShadowColor    (void);
            const Color4f             &getShadowColor     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOffsetBias      (void);
#endif
                  Real32              &editOffsetBias     (void);
            const Real32              &getOffsetBias      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getOffsetFactor    (void);
#endif
                  Real32              &editOffsetFactor   (void);
            const Real32              &getOffsetFactor    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRenderTarget   (FrameBufferObjectPtrConstArg value);
            void setWidth          (const Int32 &value);
            void setHeight         (const Int32 &value);
            void setShadowColor    (const Color4f &value);
            void setOffsetBias     (const Real32 &value);
            void setOffsetFactor   (const Real32 &value);

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFFrameBufferObjectPtr _sfRenderTarget;
    SFInt32           _sfWidth;
    SFInt32           _sfHeight;
    SFColor4f         _sfShadowColor;
    SFReal32          _sfOffsetBias;
    SFReal32          _sfOffsetFactor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShadowMapEngineBase(void);
    ShadowMapEngineBase(const ShadowMapEngineBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShadowMapEngineBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShadowMapEngine *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRenderTarget    (void) const;
    EditFieldHandlePtr editHandleRenderTarget   (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandleShadowColor     (void) const;
    EditFieldHandlePtr editHandleShadowColor    (void);
    GetFieldHandlePtr  getHandleOffsetBias      (void) const;
    EditFieldHandlePtr editHandleOffsetBias     (void);
    GetFieldHandlePtr  getHandleOffsetFactor    (void) const;
    EditFieldHandlePtr editHandleOffsetFactor   (void);

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

            void execSync (      ShadowMapEngineBase *pFrom,
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
    void operator =(const ShadowMapEngineBase &source);
};

typedef ShadowMapEngineBase *ShadowMapEngineBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADOWMAPENGINEBASE_H_ */
