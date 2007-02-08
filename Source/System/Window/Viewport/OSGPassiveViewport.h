/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGPASSIVEVIEWPORT_H_
#define _OSGPASSIVEVIEWPORT_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGPassiveViewportBase.h"

OSG_BEGIN_NAMESPACE

class RenderActionBase;

/*! \brief Passive Viewport class. See \ref 
    PageSystemWindowViewportsPassive for a description.
*/

class OSG_WINDOW_DLLMAPPING PassiveViewport : public PassiveViewportBase
{
  private:

    typedef PassiveViewportBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector whichField, 
                         UInt32    origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    your_category                             */
    /*! \{                                                                 */

#ifdef OSG_OLD_RENDER_ACTION
    virtual void render(DrawActionBase *action);
#endif

#ifdef OSG_CLEANED_RENDERACTION
    virtual void render(RenderTraversalActionBase *action);
#endif

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in PassiveViewportBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    PassiveViewport(void);
    PassiveViewport(const PassiveViewport &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PassiveViewport(void); 

    /*! \}                                                                 */
    
    static void initMethod(InitPhase ePhase);

    /*==========================  PRIVATE  ================================*/
  private:

    friend class PassiveViewportBase;

    template<class ContainerFactoryT>
    friend struct CPtrConstructionFunctions;

    template<class ContainerFactoryT>
    friend struct PtrConstructionFunctions; 

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const PassiveViewport &source);
};

typedef PassiveViewport *PassiveViewportP;

OSG_END_NAMESPACE

#include "OSGPassiveViewportBase.inl"
#include "OSGPassiveViewport.inl"

#define OSGPASSIVEVIEWPORT_HEADER_CVSID "@(#)$Id: $"

#endif /* _OSGPASSIVEVIEWPORT_H_ */
