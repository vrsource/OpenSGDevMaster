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


#ifndef _OSGSHADERPROGRAMVARIABLECHUNKFIELDS_H_
#define _OSGSHADERPROGRAMVARIABLECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderProgramVariableChunk;

OSG_GEN_CONTAINERPTR(ShaderProgramVariableChunk);
/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderProgramVariableChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderProgramVariableChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderProgramVariableChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderProgramVariableChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProgramVariableChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderProgramVariableChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProgramVariableChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderProgramVariableChunkPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProgramVariableChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderProgramVariableChunkPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProgramVariableChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderProgramVariableChunkPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProgramVariableChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderProgramVariableChunkPtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProgramVariableChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderProgramVariableChunkPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProgramVariableChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderProgramVariableChunkPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProgramVariableChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderProgramVariableChunkPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProgramVariableChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderProgramVariableChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderProgramVariableChunkPtr : 
    public PointerSField<ShaderProgramVariableChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderProgramVariableChunkPtr : 
    public PointerSField<ShaderProgramVariableChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderProgramVariableChunkPtr :
    public PointerSField<ShaderProgramVariableChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderProgramVariableChunkPtr :
    public PointerSField<ShaderProgramVariableChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderProgramVariableChunkPtr :
    public PointerMField<ShaderProgramVariableChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderProgramVariableChunkPtr :
    public PointerMField<ShaderProgramVariableChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderProgramVariableChunkPtr :
    public PointerMField<ShaderProgramVariableChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderProgramVariableChunkPtr :
    public PointerMField<ShaderProgramVariableChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPROGRAMVARIABLECHUNKFIELDS_H_ */
