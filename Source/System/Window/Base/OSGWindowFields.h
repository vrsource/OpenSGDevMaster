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


#ifndef _OSGWINDOWFIELDS_H_
#define _OSGWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class Window;

OSG_GEN_CONTAINERPTR(Window);
/*! \ingroup GrpSystemWindowFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<Window *, nsOSG> :
    public FieldTraitsFCPtrBase<Window *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<Window *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<Window *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Window *,
                      RecordedRefCountPolicy, nsOSG  > SFRecWindowPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Window *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecWindowPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Window *,
                      WeakRefCountPolicy, nsOSG      > SFWeakWindowPtr;
/*! \ingroup GrpSystemWindowFieldSFields */
typedef PointerSField<Window *,
                      NoRefCountPolicy, nsOSG        > SFUncountedWindowPtr;


/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Window *,
                      RecordedRefCountPolicy, nsOSG  > MFRecWindowPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Window *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecWindowPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Window *,
                      WeakRefCountPolicy, nsOSG      > MFWeakWindowPtr;
/*! \ingroup GrpSystemWindowFieldMFields */
typedef PointerMField<Window *,
                      NoRefCountPolicy, nsOSG        > MFUncountedWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecWindowPtr : 
    public PointerSField<Window *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecWindowPtr : 
    public PointerSField<Window *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakWindowPtr :
    public PointerSField<Window *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedWindowPtr :
    public PointerSField<Window *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecWindowPtr :
    public PointerMField<Window *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecWindowPtr :
    public PointerMField<Window *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakWindowPtr :
    public PointerMField<Window *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemWindowFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedWindowPtr :
    public PointerMField<Window *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGWINDOWFIELDS_H_ */
