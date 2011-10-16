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


#ifndef _OSGSCREENGROUPFIELDS_H_
#define _OSGSCREENGROUPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ScreenGroup;

OSG_GEN_CONTAINERPTR(ScreenGroup);
/*! \ingroup GrpGroupMiscFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<ScreenGroup *, nsOSG> :
    public FieldTraitsFCPtrBase<ScreenGroup *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ScreenGroup *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakScreenGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenGroup *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdScreenGroupPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<ScreenGroup *,
                      RecordedRefCountPolicy, nsOSG  > SFRecScreenGroupPtr;
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<ScreenGroup *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecScreenGroupPtr;
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<ScreenGroup *,
                      WeakRefCountPolicy, nsOSG      > SFWeakScreenGroupPtr;
/*! \ingroup GrpGroupMiscFieldSFields */
typedef PointerSField<ScreenGroup *,
                      NoRefCountPolicy, nsOSG        > SFUncountedScreenGroupPtr;


/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<ScreenGroup *,
                      RecordedRefCountPolicy, nsOSG  > MFRecScreenGroupPtr;
/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<ScreenGroup *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecScreenGroupPtr;
/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<ScreenGroup *,
                      WeakRefCountPolicy, nsOSG      > MFWeakScreenGroupPtr;
/*! \ingroup GrpGroupMiscFieldMFields */
typedef PointerMField<ScreenGroup *,
                      NoRefCountPolicy, nsOSG        > MFUncountedScreenGroupPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecScreenGroupPtr : 
    public PointerSField<ScreenGroup *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecScreenGroupPtr : 
    public PointerSField<ScreenGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakScreenGroupPtr :
    public PointerSField<ScreenGroup *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedScreenGroupPtr :
    public PointerSField<ScreenGroup *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecScreenGroupPtr :
    public PointerMField<ScreenGroup *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecScreenGroupPtr :
    public PointerMField<ScreenGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakScreenGroupPtr :
    public PointerMField<ScreenGroup *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupMiscFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedScreenGroupPtr :
    public PointerMField<ScreenGroup *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSCREENGROUPFIELDS_H_ */
