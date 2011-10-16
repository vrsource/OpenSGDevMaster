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


#ifndef _OSGGEOINTEGRALPROPERTYFIELDS_H_
#define _OSGGEOINTEGRALPROPERTYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GeoIntegralProperty;

OSG_GEN_CONTAINERPTR(GeoIntegralProperty);
/*! \ingroup GrpDrawablesGeometryFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<GeoIntegralProperty *, nsOSG> :
    public FieldTraitsFCPtrBase<GeoIntegralProperty *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GeoIntegralProperty *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoIntegralPropertyPtr"; 
}


/*! \ingroup GrpDrawablesGeometryFieldTraits
 */
template <>
struct FieldTraits<GeoIntegralProperty *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<GeoIntegralProperty *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<GeoIntegralProperty *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildGeoIntegralPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoIntegralProperty *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildGeoIntegralPropertyPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoIntegralProperty *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGeoIntegralPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoIntegralProperty *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGeoIntegralPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoIntegralProperty *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGeoIntegralPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<GeoIntegralProperty *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGeoIntegralPropertyPtr;


/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoIntegralProperty *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGeoIntegralPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoIntegralProperty *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGeoIntegralPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoIntegralProperty *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGeoIntegralPropertyPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<GeoIntegralProperty *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGeoIntegralPropertyPtr;



/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef ChildPointerSField<
          GeoIntegralProperty *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > SFUnrecChildGeoIntegralPropertyPtr;


/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef ChildPointerMField<
          GeoIntegralProperty *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildGeoIntegralPropertyPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecGeoIntegralPropertyPtr : 
    public PointerSField<GeoIntegralProperty *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecGeoIntegralPropertyPtr : 
    public PointerSField<GeoIntegralProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakGeoIntegralPropertyPtr :
    public PointerSField<GeoIntegralProperty *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedGeoIntegralPropertyPtr :
    public PointerSField<GeoIntegralProperty *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecGeoIntegralPropertyPtr :
    public PointerMField<GeoIntegralProperty *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecGeoIntegralPropertyPtr :
    public PointerMField<GeoIntegralProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakGeoIntegralPropertyPtr :
    public PointerMField<GeoIntegralProperty *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedGeoIntegralPropertyPtr :
    public PointerMField<GeoIntegralProperty *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecChildGeoIntegralPropertyPtr :
    public ChildPointerSField<
        GeoIntegralProperty *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecChildGeoIntegralPropertyPtr :
    public ChildPointerMField<
        GeoIntegralProperty *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOINTEGRALPROPERTYFIELDS_H_ */
