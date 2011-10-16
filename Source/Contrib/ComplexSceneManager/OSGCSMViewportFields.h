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


#ifndef _OSGCSMVIEWPORTFIELDS_H_
#define _OSGCSMVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CSMViewport;

OSG_GEN_CONTAINERPTR(CSMViewport);
/*! \ingroup GrpContribCSMFieldTraits
    \ingroup GrpLibOSGContribCSM
 */
template <>
struct FieldTraits<CSMViewport *, nsOSG> :
    public FieldTraitsFCPtrBase<CSMViewport *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CSMViewport *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMViewport *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMViewportPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMViewport *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCSMViewportPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMViewport *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCSMViewportPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMViewport *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCSMViewportPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMViewport *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCSMViewportPtr;


/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMViewport *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCSMViewportPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMViewport *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCSMViewportPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMViewport *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCSMViewportPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMViewport *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCSMViewportPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFRecCSMViewportPtr : 
    public PointerSField<CSMViewport *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecCSMViewportPtr : 
    public PointerSField<CSMViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFWeakCSMViewportPtr :
    public PointerSField<CSMViewport *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUncountedCSMViewportPtr :
    public PointerSField<CSMViewport *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFRecCSMViewportPtr :
    public PointerMField<CSMViewport *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUnrecCSMViewportPtr :
    public PointerMField<CSMViewport *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFWeakCSMViewportPtr :
    public PointerMField<CSMViewport *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUncountedCSMViewportPtr :
    public PointerMField<CSMViewport *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCSMVIEWPORTFIELDS_H_ */
