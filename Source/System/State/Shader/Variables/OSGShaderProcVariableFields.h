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


#ifndef _OSGSHADERPROCVARIABLEFIELDS_H_
#define _OSGSHADERPROCVARIABLEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderProcVariable;

OSG_GEN_CONTAINERPTR(ShaderProcVariable);
/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderProcVariable *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderProcVariable *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderProcVariable *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderProcVariablePtr"; 
}


/*! \ingroup GrpSystemShaderFieldTraits
 */
template <>
struct FieldTraits<ShaderProcVariable *, nsOSG + 1> :
    public FieldTraitsFCPtrBase<ShaderProcVariable *, nsOSG + 1>
{
  private:

  public:
    typedef FieldTraits<ShaderProcVariable *, nsOSG + 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildShaderProcVariablePtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderProcVariable *, nsOSG + 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildShaderProcVariablePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProcVariable *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderProcVariablePtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProcVariable *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderProcVariablePtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProcVariable *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderProcVariablePtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderProcVariable *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderProcVariablePtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProcVariable *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderProcVariablePtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProcVariable *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderProcVariablePtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProcVariable *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderProcVariablePtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderProcVariable *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderProcVariablePtr;



/*! \ingroup GrpSystemShaderFieldMFields */
typedef ChildPointerMField<
          ShaderProcVariable *, 
          UnrecordedRefCountPolicy,
          nsOSG + 1             > MFUnrecChildShaderProcVariablePtr;



#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderProcVariablePtr : 
    public PointerSField<ShaderProcVariable *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderProcVariablePtr : 
    public PointerSField<ShaderProcVariable *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderProcVariablePtr :
    public PointerSField<ShaderProcVariable *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderProcVariablePtr :
    public PointerSField<ShaderProcVariable *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderProcVariablePtr :
    public PointerMField<ShaderProcVariable *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderProcVariablePtr :
    public PointerMField<ShaderProcVariable *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderProcVariablePtr :
    public PointerMField<ShaderProcVariable *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderProcVariablePtr :
    public PointerMField<ShaderProcVariable *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecChildShaderProcVariablePtr :
    public ChildPointerMField<
        ShaderProcVariable *, 
        UnrecordedRefCountPolicy,
        nsOSG + 1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPROCVARIABLEFIELDS_H_ */
