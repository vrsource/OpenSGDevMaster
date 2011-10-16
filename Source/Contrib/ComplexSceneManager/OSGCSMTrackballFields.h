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


#ifndef _OSGCSMTRACKBALLFIELDS_H_
#define _OSGCSMTRACKBALLFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CSMTrackball;

OSG_GEN_CONTAINERPTR(CSMTrackball);
/*! \ingroup GrpContribCSMFieldTraits
    \ingroup GrpLibOSGContribCSM
 */
template <>
struct FieldTraits<CSMTrackball *, nsOSG> :
    public FieldTraitsFCPtrBase<CSMTrackball *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CSMTrackball *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCSM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCSMTrackballPtr"; 
}

template<> inline
const Char8 *FieldTraits<CSMTrackball *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCSMTrackballPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMTrackball *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCSMTrackballPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMTrackball *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCSMTrackballPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMTrackball *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCSMTrackballPtr;
/*! \ingroup GrpContribCSMFieldSFields */
typedef PointerSField<CSMTrackball *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCSMTrackballPtr;


/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMTrackball *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCSMTrackballPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMTrackball *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCSMTrackballPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMTrackball *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCSMTrackballPtr;
/*! \ingroup GrpContribCSMFieldMFields */
typedef PointerMField<CSMTrackball *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCSMTrackballPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFRecCSMTrackballPtr : 
    public PointerSField<CSMTrackball *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUnrecCSMTrackballPtr : 
    public PointerSField<CSMTrackball *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFWeakCSMTrackballPtr :
    public PointerSField<CSMTrackball *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldSFields \ingroup GrpLibOSGContribCSM */
struct SFUncountedCSMTrackballPtr :
    public PointerSField<CSMTrackball *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFRecCSMTrackballPtr :
    public PointerMField<CSMTrackball *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUnrecCSMTrackballPtr :
    public PointerMField<CSMTrackball *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFWeakCSMTrackballPtr :
    public PointerMField<CSMTrackball *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribCSMFieldMFields \ingroup GrpLibOSGContribCSM */
struct MFUncountedCSMTrackballPtr :
    public PointerMField<CSMTrackball *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCSMTRACKBALLFIELDS_H_ */
