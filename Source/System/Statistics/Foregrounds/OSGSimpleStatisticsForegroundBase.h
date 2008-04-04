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
 **     class SimpleStatisticsForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_
#define _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGUtilDef.h"

#include "OSGBaseTypes.h"

#include "OSGStatisticsForeground.h" // Parent

#include "OSGStringFields.h" // Formats type
#include "OSGReal32Fields.h" // Size type
#include "OSGColor4fFields.h" // Color type
#include "OSGColor4fFields.h" // ShadowColor type
#include "OSGColor4fFields.h" // BgColor type
#include "OSGStringFields.h" // Family type
#include "OSGVec2fFields.h" // ShadowOffset type
#include "OSGUInt8Fields.h" // HorizontalAlign type
#include "OSGUInt8Fields.h" // VerticalAlign type
#include "OSGColor4fFields.h" // BorderColor type
#include "OSGVec2fFields.h" // BorderOffset type
#include "OSGVec2fFields.h" // TextMargin type

#include "OSGSimpleStatisticsForegroundFields.h"

OSG_BEGIN_NAMESPACE

class SimpleStatisticsForeground;

//! \brief SimpleStatisticsForeground Base Class.

class OSG_UTIL_DLLMAPPING SimpleStatisticsForegroundBase : public StatisticsForeground
{
  public:

    typedef StatisticsForeground Inherited;
    typedef StatisticsForeground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SimpleStatisticsForeground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FormatsFieldId = Inherited::NextFieldId,
        SizeFieldId = FormatsFieldId + 1,
        ColorFieldId = SizeFieldId + 1,
        ShadowColorFieldId = ColorFieldId + 1,
        BgColorFieldId = ShadowColorFieldId + 1,
        FamilyFieldId = BgColorFieldId + 1,
        ShadowOffsetFieldId = FamilyFieldId + 1,
        HorizontalAlignFieldId = ShadowOffsetFieldId + 1,
        VerticalAlignFieldId = HorizontalAlignFieldId + 1,
        BorderColorFieldId = VerticalAlignFieldId + 1,
        BorderOffsetFieldId = BorderColorFieldId + 1,
        TextMarginFieldId = BorderOffsetFieldId + 1,
        NextFieldId = TextMarginFieldId + 1
    };

    static const OSG::BitVector FormatsFieldMask =
        (TypeTraits<BitVector>::One << FormatsFieldId);
    static const OSG::BitVector SizeFieldMask =
        (TypeTraits<BitVector>::One << SizeFieldId);
    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector ShadowColorFieldMask =
        (TypeTraits<BitVector>::One << ShadowColorFieldId);
    static const OSG::BitVector BgColorFieldMask =
        (TypeTraits<BitVector>::One << BgColorFieldId);
    static const OSG::BitVector FamilyFieldMask =
        (TypeTraits<BitVector>::One << FamilyFieldId);
    static const OSG::BitVector ShadowOffsetFieldMask =
        (TypeTraits<BitVector>::One << ShadowOffsetFieldId);
    static const OSG::BitVector HorizontalAlignFieldMask =
        (TypeTraits<BitVector>::One << HorizontalAlignFieldId);
    static const OSG::BitVector VerticalAlignFieldMask =
        (TypeTraits<BitVector>::One << VerticalAlignFieldId);
    static const OSG::BitVector BorderColorFieldMask =
        (TypeTraits<BitVector>::One << BorderColorFieldId);
    static const OSG::BitVector BorderOffsetFieldMask =
        (TypeTraits<BitVector>::One << BorderOffsetFieldId);
    static const OSG::BitVector TextMarginFieldMask =
        (TypeTraits<BitVector>::One << TextMarginFieldId);
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


#ifdef OSG_1_GET_COMPAT
                  MFString            *getMFFormats         (void);
#endif
                  MFString            *editMFFormats        (void);
            const MFString            *getMFFormats         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFSize            (void);
#endif
                  SFReal32            *editSFSize           (void);
            const SFReal32            *getSFSize            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4f           *getSFColor           (void);
#endif
                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4f           *getSFShadowColor     (void);
#endif
                  SFColor4f           *editSFShadowColor    (void);
            const SFColor4f           *getSFShadowColor     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4f           *getSFBgColor         (void);
#endif
                  SFColor4f           *editSFBgColor        (void);
            const SFColor4f           *getSFBgColor         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFFamily          (void);
#endif
                  SFString            *editSFFamily         (void);
            const SFString            *getSFFamily          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFVec2f             *getSFShadowOffset    (void);
#endif
                  SFVec2f             *editSFShadowOffset   (void);
            const SFVec2f             *getSFShadowOffset    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt8             *getSFHorizontalAlign (void);
#endif
                  SFUInt8             *editSFHorizontalAlign(void);
            const SFUInt8             *getSFHorizontalAlign (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt8             *getSFVerticalAlign   (void);
#endif
                  SFUInt8             *editSFVerticalAlign  (void);
            const SFUInt8             *getSFVerticalAlign   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFColor4f           *getSFBorderColor     (void);
#endif
                  SFColor4f           *editSFBorderColor    (void);
            const SFColor4f           *getSFBorderColor     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFVec2f             *getSFBorderOffset    (void);
#endif
                  SFVec2f             *editSFBorderOffset   (void);
            const SFVec2f             *getSFBorderOffset    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFVec2f             *getSFTextMargin      (void);
#endif
                  SFVec2f             *editSFTextMargin     (void);
            const SFVec2f             *getSFTextMargin      (void) const;


#ifdef OSG_1_GET_COMPAT
                  std::string         &getFormats         (const UInt32 index);
                  MFString            &getFormats        (void);
#endif
                  std::string         &editFormats        (const UInt32 index);
            const std::string         &getFormats         (const UInt32 index) const;
                  MFString            &editFormats        (void);
            const MFString            &getFormats        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getSize            (void);
#endif
                  Real32              &editSize           (void);
            const Real32              &getSize            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4f             &getColor           (void);
#endif
                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4f             &getShadowColor     (void);
#endif
                  Color4f             &editShadowColor    (void);
            const Color4f             &getShadowColor     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4f             &getBgColor         (void);
#endif
                  Color4f             &editBgColor        (void);
            const Color4f             &getBgColor         (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getFamily          (void);
#endif
                  std::string         &editFamily         (void);
            const std::string         &getFamily          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec2f               &getShadowOffset    (void);
#endif
                  Vec2f               &editShadowOffset   (void);
            const Vec2f               &getShadowOffset    (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt8               &getHorizontalAlign (void);
#endif
                  UInt8               &editHorizontalAlign(void);
            const UInt8               &getHorizontalAlign (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt8               &getVerticalAlign   (void);
#endif
                  UInt8               &editVerticalAlign  (void);
            const UInt8               &getVerticalAlign   (void) const;

#ifdef OSG_1_GET_COMPAT
                  Color4f             &getBorderColor     (void);
#endif
                  Color4f             &editBorderColor    (void);
            const Color4f             &getBorderColor     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec2f               &getBorderOffset    (void);
#endif
                  Vec2f               &editBorderOffset   (void);
            const Vec2f               &getBorderOffset    (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec2f               &getTextMargin      (void);
#endif
                  Vec2f               &editTextMargin     (void);
            const Vec2f               &getTextMargin      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSize           (const Real32 &value);
            void setColor          (const Color4f &value);
            void setShadowColor    (const Color4f &value);
            void setBgColor        (const Color4f &value);
            void setFamily         (const std::string &value);
            void setShadowOffset   (const Vec2f &value);
            void setHorizontalAlign(const UInt8 &value);
            void setVerticalAlign  (const UInt8 &value);
            void setBorderColor    (const Color4f &value);
            void setBorderOffset   (const Vec2f &value);
            void setTextMargin     (const Vec2f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToFormats                     (const std::string&value   );
    void insertIntoFormats                 (      UInt32     uiIndex,
                                            const std::string&value   );
    void replaceInFormats                  (      UInt32     uiIndex,
                                            const std::string&value   );
    void replaceInFormats                  (const std::string&pOldElem,
                                            const std::string&pNewElem);
    void removeFromFormats                 (      UInt32     uiIndex );
    void removeFromFormats                 (const std::string&value   );
    void clearFormats                      (      void               );


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

    static  SimpleStatisticsForegroundPtr create     (void);
    static  SimpleStatisticsForegroundPtr createEmpty(void);

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

    MFString          _mfFormats;
    SFReal32          _sfSize;
    SFColor4f         _sfColor;
    SFColor4f         _sfShadowColor;
    SFColor4f         _sfBgColor;
    SFString          _sfFamily;
    SFVec2f           _sfShadowOffset;
    SFUInt8           _sfHorizontalAlign;
    SFUInt8           _sfVerticalAlign;
    SFColor4f         _sfBorderColor;
    SFVec2f           _sfBorderOffset;
    SFVec2f           _sfTextMargin;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleStatisticsForegroundBase(void);
    SimpleStatisticsForegroundBase(const SimpleStatisticsForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SimpleStatisticsForegroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFormats         (void) const;
    EditFieldHandlePtr editHandleFormats        (void);
    GetFieldHandlePtr  getHandleSize            (void) const;
    EditFieldHandlePtr editHandleSize           (void);
    GetFieldHandlePtr  getHandleColor           (void) const;
    EditFieldHandlePtr editHandleColor          (void);
    GetFieldHandlePtr  getHandleShadowColor     (void) const;
    EditFieldHandlePtr editHandleShadowColor    (void);
    GetFieldHandlePtr  getHandleBgColor         (void) const;
    EditFieldHandlePtr editHandleBgColor        (void);
    GetFieldHandlePtr  getHandleFamily          (void) const;
    EditFieldHandlePtr editHandleFamily         (void);
    GetFieldHandlePtr  getHandleShadowOffset    (void) const;
    EditFieldHandlePtr editHandleShadowOffset   (void);
    GetFieldHandlePtr  getHandleHorizontalAlign (void) const;
    EditFieldHandlePtr editHandleHorizontalAlign(void);
    GetFieldHandlePtr  getHandleVerticalAlign   (void) const;
    EditFieldHandlePtr editHandleVerticalAlign  (void);
    GetFieldHandlePtr  getHandleBorderColor     (void) const;
    EditFieldHandlePtr editHandleBorderColor    (void);
    GetFieldHandlePtr  getHandleBorderOffset    (void) const;
    EditFieldHandlePtr editHandleBorderOffset   (void);
    GetFieldHandlePtr  getHandleTextMargin      (void) const;
    EditFieldHandlePtr editHandleTextMargin     (void);

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

            void execSync (      SimpleStatisticsForegroundBase *pFrom,
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
    void operator =(const SimpleStatisticsForegroundBase &source);
};

typedef SimpleStatisticsForegroundBase *SimpleStatisticsForegroundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSIMPLESTATISTICSFOREGROUNDBASE_H_ */
