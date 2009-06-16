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


#ifndef _OSGFCDTESTFCFIELDS_H_
#define _OSGFCDTESTFCFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class FCDTestFC;

OSG_GEN_CONTAINERPTR(FCDTestFC);

/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<FCDTestFC *> :
    public FieldTraitsFCPtrBase<FCDTestFC *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<FCDTestFC *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFFCDTestFCPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFFCDTestFCPtr"; }
};

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFCDTestFCPtr"; 
}


/*! \ingroup GrpSystemFieldTraits
 */
template <>
struct FieldTraits<FCDTestFC *, 1> :
    public FieldTraitsFCPtrBase<FCDTestFC *, 1>
{
  private:

  public:
    typedef FieldTraits<FCDTestFC *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFC *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildFCDTestFCPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<FCDTestFC *,
                      RecordedRefCountPolicy  > SFRecFCDTestFCPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<FCDTestFC *,
                      UnrecordedRefCountPolicy> SFUnrecFCDTestFCPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<FCDTestFC *,
                      WeakRefCountPolicy      > SFWeakFCDTestFCPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<FCDTestFC *,
                      NoRefCountPolicy        > SFUncountedFCDTestFCPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<FCDTestFC *,
                      RecordedRefCountPolicy  > MFRecFCDTestFCPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<FCDTestFC *,
                      UnrecordedRefCountPolicy> MFUnrecFCDTestFCPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<FCDTestFC *,
                      WeakRefCountPolicy      > MFWeakFCDTestFCPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<FCDTestFC *,
                      NoRefCountPolicy        > MFUncountedFCDTestFCPtr;



/*! \ingroup GrpSystemFieldSFields */
typedef ChildPointerSField<
          FCDTestFC *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildFCDTestFCPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef ChildPointerMField<
          FCDTestFC *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildFCDTestFCPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecFCDTestFCPtr : 
    public PointerSField<FCDTestFC *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecFCDTestFCPtr : 
    public PointerSField<FCDTestFC *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakFCDTestFCPtr :
    public PointerSField<FCDTestFC *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedFCDTestFCPtr :
    public PointerSField<FCDTestFC *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecFCDTestFCPtr :
    public PointerMField<FCDTestFC *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecFCDTestFCPtr :
    public PointerMField<FCDTestFC *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakFCDTestFCPtr :
    public PointerMField<FCDTestFC *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedFCDTestFCPtr :
    public PointerMField<FCDTestFC *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecChildFCDTestFCPtr :
    public ChildPointerSField<
        FCDTestFC *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecChildFCDTestFCPtr :
    public ChildPointerMField<
        FCDTestFC *, 
        UnrecordedRefCountPolicy,
        1             > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGFCDTESTFCFIELDS_H_ */
