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


#ifndef _OSGGPUVOLRTV1FIELDS_H_
#define _OSGGPUVOLRTV1FIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGExGPUVolRTDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class GPUVolRTV1;

OSG_GEN_CONTAINERPTR(GPUVolRTV1);
/*! \ingroup GrpExGPUVolRTFieldTraits
    \ingroup GrpLibOSGExGPUVolRT
 */
template <>
struct FieldTraits<GPUVolRTV1 *, nsOSG> :
    public FieldTraitsFCPtrBase<GPUVolRTV1 *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<GPUVolRTV1 *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EXGPUVOLRT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGPUVolRTV1Ptr"; 
}

template<> inline
const Char8 *FieldTraits<GPUVolRTV1 *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGPUVolRTV1Ptr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV1 *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGPUVolRTV1Ptr;
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV1 *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGPUVolRTV1Ptr;
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV1 *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGPUVolRTV1Ptr;
/*! \ingroup GrpExGPUVolRTFieldSFields */
typedef PointerSField<GPUVolRTV1 *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGPUVolRTV1Ptr;


/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV1 *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGPUVolRTV1Ptr;
/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV1 *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGPUVolRTV1Ptr;
/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV1 *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGPUVolRTV1Ptr;
/*! \ingroup GrpExGPUVolRTFieldMFields */
typedef PointerMField<GPUVolRTV1 *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGPUVolRTV1Ptr;




#else // these are the doxygen hacks

/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFRecGPUVolRTV1Ptr : 
    public PointerSField<GPUVolRTV1 *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFUnrecGPUVolRTV1Ptr : 
    public PointerSField<GPUVolRTV1 *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFWeakGPUVolRTV1Ptr :
    public PointerSField<GPUVolRTV1 *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldSFields \ingroup GrpLibOSGExGPUVolRT */
struct SFUncountedGPUVolRTV1Ptr :
    public PointerSField<GPUVolRTV1 *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFRecGPUVolRTV1Ptr :
    public PointerMField<GPUVolRTV1 *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFUnrecGPUVolRTV1Ptr :
    public PointerMField<GPUVolRTV1 *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFWeakGPUVolRTV1Ptr :
    public PointerMField<GPUVolRTV1 *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpExGPUVolRTFieldMFields \ingroup GrpLibOSGExGPUVolRT */
struct MFUncountedGPUVolRTV1Ptr :
    public PointerMField<GPUVolRTV1 *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGPUVOLRTV1FIELDS_H_ */
