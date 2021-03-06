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


#ifndef _OSGLIGHTMODELCHUNKFIELDS_H_
#define _OSGLIGHTMODELCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class LightModelChunk;

OSG_GEN_CONTAINERPTR(LightModelChunk);
/*! \ingroup GrpStateOpenGLFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<LightModelChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<LightModelChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<LightModelChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLightModelChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<LightModelChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLightModelChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<LightModelChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecLightModelChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<LightModelChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecLightModelChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<LightModelChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakLightModelChunkPtr;
/*! \ingroup GrpStateOpenGLFieldSFields */
typedef PointerSField<LightModelChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedLightModelChunkPtr;


/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<LightModelChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecLightModelChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<LightModelChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecLightModelChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<LightModelChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakLightModelChunkPtr;
/*! \ingroup GrpStateOpenGLFieldMFields */
typedef PointerMField<LightModelChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedLightModelChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFRecLightModelChunkPtr : 
    public PointerSField<LightModelChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecLightModelChunkPtr : 
    public PointerSField<LightModelChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFWeakLightModelChunkPtr :
    public PointerSField<LightModelChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedLightModelChunkPtr :
    public PointerSField<LightModelChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFRecLightModelChunkPtr :
    public PointerMField<LightModelChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecLightModelChunkPtr :
    public PointerMField<LightModelChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFWeakLightModelChunkPtr :
    public PointerMField<LightModelChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateOpenGLFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedLightModelChunkPtr :
    public PointerMField<LightModelChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGLIGHTMODELCHUNKFIELDS_H_ */
