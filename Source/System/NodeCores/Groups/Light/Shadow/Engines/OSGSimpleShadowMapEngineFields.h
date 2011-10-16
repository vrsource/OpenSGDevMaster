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


#ifndef _OSGSIMPLESHADOWMAPENGINEFIELDS_H_
#define _OSGSIMPLESHADOWMAPENGINEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class SimpleShadowMapEngine;

OSG_GEN_CONTAINERPTR(SimpleShadowMapEngine);
/*! \ingroup GrpGroupLightShadowEnginesFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<SimpleShadowMapEngine *, nsOSG> :
    public FieldTraitsFCPtrBase<SimpleShadowMapEngine *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<SimpleShadowMapEngine *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSimpleShadowMapEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<SimpleShadowMapEngine *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSimpleShadowMapEnginePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields */
typedef PointerSField<SimpleShadowMapEngine *,
                      RecordedRefCountPolicy, nsOSG  > SFRecSimpleShadowMapEnginePtr;
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields */
typedef PointerSField<SimpleShadowMapEngine *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecSimpleShadowMapEnginePtr;
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields */
typedef PointerSField<SimpleShadowMapEngine *,
                      WeakRefCountPolicy, nsOSG      > SFWeakSimpleShadowMapEnginePtr;
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields */
typedef PointerSField<SimpleShadowMapEngine *,
                      NoRefCountPolicy, nsOSG        > SFUncountedSimpleShadowMapEnginePtr;


/*! \ingroup GrpGroupLightShadowEnginesFieldMFields */
typedef PointerMField<SimpleShadowMapEngine *,
                      RecordedRefCountPolicy, nsOSG  > MFRecSimpleShadowMapEnginePtr;
/*! \ingroup GrpGroupLightShadowEnginesFieldMFields */
typedef PointerMField<SimpleShadowMapEngine *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecSimpleShadowMapEnginePtr;
/*! \ingroup GrpGroupLightShadowEnginesFieldMFields */
typedef PointerMField<SimpleShadowMapEngine *,
                      WeakRefCountPolicy, nsOSG      > MFWeakSimpleShadowMapEnginePtr;
/*! \ingroup GrpGroupLightShadowEnginesFieldMFields */
typedef PointerMField<SimpleShadowMapEngine *,
                      NoRefCountPolicy, nsOSG        > MFUncountedSimpleShadowMapEnginePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupLightShadowEnginesFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecSimpleShadowMapEnginePtr : 
    public PointerSField<SimpleShadowMapEngine *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecSimpleShadowMapEnginePtr : 
    public PointerSField<SimpleShadowMapEngine *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakSimpleShadowMapEnginePtr :
    public PointerSField<SimpleShadowMapEngine *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupLightShadowEnginesFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedSimpleShadowMapEnginePtr :
    public PointerSField<SimpleShadowMapEngine *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupLightShadowEnginesFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecSimpleShadowMapEnginePtr :
    public PointerMField<SimpleShadowMapEngine *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupLightShadowEnginesFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecSimpleShadowMapEnginePtr :
    public PointerMField<SimpleShadowMapEngine *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupLightShadowEnginesFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakSimpleShadowMapEnginePtr :
    public PointerMField<SimpleShadowMapEngine *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupLightShadowEnginesFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedSimpleShadowMapEnginePtr :
    public PointerMField<SimpleShadowMapEngine *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSIMPLESHADOWMAPENGINEFIELDS_H_ */
