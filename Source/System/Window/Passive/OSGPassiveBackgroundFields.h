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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPASSIVEBACKGROUNDFIELDS_H_
#define _OSGPASSIVEBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class PassiveBackground;

OSG_GEN_CONTAINERPTR(PassiveBackground);
/*! \ingroup GrpWindowPassiveFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<PassiveBackground *, nsOSG> :
    public FieldTraitsFCPtrBase<PassiveBackground *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<PassiveBackground *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

};

template<> inline
const Char8 *FieldTraits<PassiveBackground *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPassiveBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveBackground *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPassiveBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveBackground *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPassiveBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PassiveBackground *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPassiveBackgroundPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveBackground *,
                      RecordedRefCountPolicy, nsOSG  > SFRecPassiveBackgroundPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveBackground *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecPassiveBackgroundPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveBackground *,
                      WeakRefCountPolicy, nsOSG      > SFWeakPassiveBackgroundPtr;
/*! \ingroup GrpWindowPassiveFieldSFields */
typedef PointerSField<PassiveBackground *,
                      NoRefCountPolicy, nsOSG        > SFUncountedPassiveBackgroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecPassiveBackgroundPtr : 
    public PointerSField<PassiveBackground *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecPassiveBackgroundPtr : 
    public PointerSField<PassiveBackground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakPassiveBackgroundPtr :
    public PointerSField<PassiveBackground *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowPassiveFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedPassiveBackgroundPtr :
    public PointerSField<PassiveBackground *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPASSIVEBACKGROUNDFIELDS_H_ */
