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


#ifndef _OSGVERTEXPROGRAMCHUNKFIELDS_H_
#define _OSGVERTEXPROGRAMCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class VertexProgramChunk;

OSG_GEN_CONTAINERPTR(VertexProgramChunk);
/*! \ingroup GrpStateARBProgramFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<VertexProgramChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<VertexProgramChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<VertexProgramChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdVertexProgramChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateARBProgramFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecVertexProgramChunkPtr;
/*! \ingroup GrpStateARBProgramFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecVertexProgramChunkPtr;
/*! \ingroup GrpStateARBProgramFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakVertexProgramChunkPtr;
/*! \ingroup GrpStateARBProgramFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedVertexProgramChunkPtr;


/*! \ingroup GrpStateARBProgramFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecVertexProgramChunkPtr;
/*! \ingroup GrpStateARBProgramFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecVertexProgramChunkPtr;
/*! \ingroup GrpStateARBProgramFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakVertexProgramChunkPtr;
/*! \ingroup GrpStateARBProgramFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedVertexProgramChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateARBProgramFieldSFields \ingroup GrpLibOSGState */
struct SFRecVertexProgramChunkPtr : 
    public PointerSField<VertexProgramChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateARBProgramFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecVertexProgramChunkPtr : 
    public PointerSField<VertexProgramChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateARBProgramFieldSFields \ingroup GrpLibOSGState */
struct SFWeakVertexProgramChunkPtr :
    public PointerSField<VertexProgramChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateARBProgramFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedVertexProgramChunkPtr :
    public PointerSField<VertexProgramChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateARBProgramFieldMFields \ingroup GrpLibOSGState */
struct MFRecVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateARBProgramFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateARBProgramFieldMFields \ingroup GrpLibOSGState */
struct MFWeakVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateARBProgramFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGVERTEXPROGRAMCHUNKFIELDS_H_ */
