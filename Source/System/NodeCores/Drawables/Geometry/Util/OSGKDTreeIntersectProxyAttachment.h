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

#ifndef _OSGKDTREEINTERSECTPROXYATTACHMENT_H_
#define _OSGKDTREEINTERSECTPROXYATTACHMENT_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"
#include "OSGGeometry.h"
#include "OSGKDTreeIntersectProxyAttachmentBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief KDTreeIntersectProxyAttachment class. See \ref
           PageDrawablesKDTreeIntersectProxyAttachment for a description.
*/

class OSG_DRAWABLE_DLLMAPPING KDTreeIntersectProxyAttachment : public KDTreeIntersectProxyAttachmentBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef KDTreeIntersectProxyAttachmentBase Inherited;
    typedef KDTreeIntersectProxyAttachment     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                    Intersect                                 */
    /*! \{                                                                 */

    virtual Action::ResultE intersectEnter(Node* node, Action* action);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Access                                    */
    /*! \{                                                                 */

    const MFIntersectKDTreeNode *getMFTreeNodes (      void        ) const;
    const IntersectKDTreeNode   &getTreeNodes   (const UInt32 index) const;

    const MFUInt32              *getMFTriIndices(      void        ) const;
          UInt32                 getTriIndices  (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in KDTreeIntersectProxyAttachmentBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    KDTreeIntersectProxyAttachment(void);
    KDTreeIntersectProxyAttachment(const KDTreeIntersectProxyAttachment &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~KDTreeIntersectProxyAttachment(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class KDTreeIntersectProxyAttachmentBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const KDTreeIntersectProxyAttachment &source);
};

typedef KDTreeIntersectProxyAttachment *KDTreeIntersectProxyAttachmentP;

OSG_END_NAMESPACE

#include "OSGKDTreeIntersectProxyAttachmentBase.inl"
#include "OSGKDTreeIntersectProxyAttachment.inl"

#endif /* _OSGKDTREEINTERSECTPROXYATTACHMENT_H_ */
