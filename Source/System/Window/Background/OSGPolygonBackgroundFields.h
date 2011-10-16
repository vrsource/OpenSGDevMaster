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


#ifndef _OSGPOLYGONBACKGROUNDFIELDS_H_
#define _OSGPOLYGONBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class PolygonBackground;

OSG_GEN_CONTAINERPTR(PolygonBackground);
/*! \ingroup GrpWindowBackgroundFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<PolygonBackground *, nsOSG> :
    public FieldTraitsFCPtrBase<PolygonBackground *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<PolygonBackground *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPolygonBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<PolygonBackground *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPolygonBackgroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<PolygonBackground *,
                      RecordedRefCountPolicy, nsOSG  > SFRecPolygonBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<PolygonBackground *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecPolygonBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<PolygonBackground *,
                      WeakRefCountPolicy, nsOSG      > SFWeakPolygonBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<PolygonBackground *,
                      NoRefCountPolicy, nsOSG        > SFUncountedPolygonBackgroundPtr;


/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<PolygonBackground *,
                      RecordedRefCountPolicy, nsOSG  > MFRecPolygonBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<PolygonBackground *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecPolygonBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<PolygonBackground *,
                      WeakRefCountPolicy, nsOSG      > MFWeakPolygonBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldMFields */
typedef PointerMField<PolygonBackground *,
                      NoRefCountPolicy, nsOSG        > MFUncountedPolygonBackgroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecPolygonBackgroundPtr : 
    public PointerSField<PolygonBackground *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecPolygonBackgroundPtr : 
    public PointerSField<PolygonBackground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakPolygonBackgroundPtr :
    public PointerSField<PolygonBackground *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedPolygonBackgroundPtr :
    public PointerSField<PolygonBackground *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecPolygonBackgroundPtr :
    public PointerMField<PolygonBackground *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecPolygonBackgroundPtr :
    public PointerMField<PolygonBackground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakPolygonBackgroundPtr :
    public PointerMField<PolygonBackground *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowBackgroundFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedPolygonBackgroundPtr :
    public PointerMField<PolygonBackground *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPOLYGONBACKGROUNDFIELDS_H_ */
