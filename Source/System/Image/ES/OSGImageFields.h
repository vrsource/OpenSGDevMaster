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


#ifndef _OSGIMAGEFIELDS_H_
#define _OSGIMAGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Image;

OSG_GEN_CONTAINERPTR(Image);

/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<Image *> :
    public FieldTraitsFCPtrBase<Image *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Image *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFImagePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFImagePtr"; }
};

template<> inline
const Char8 *FieldTraits<Image *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakImagePtr"; 
}

template<> inline
const Char8 *FieldTraits<Image *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdImagePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Image *,
                      RecordedRefCountPolicy  > SFRecImagePtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Image *,
                      UnrecordedRefCountPolicy> SFUnrecImagePtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Image *,
                      WeakRefCountPolicy      > SFWeakImagePtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<Image *,
                      NoRefCountPolicy        > SFUncountedImagePtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Image *,
                      RecordedRefCountPolicy  > MFRecImagePtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Image *,
                      UnrecordedRefCountPolicy> MFUnrecImagePtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Image *,
                      WeakRefCountPolicy      > MFWeakImagePtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<Image *,
                      NoRefCountPolicy        > MFUncountedImagePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecImagePtr : 
    public PointerSField<Image *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecImagePtr : 
    public PointerSField<Image *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakImagePtr :
    public PointerSField<Image *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedImagePtr :
    public PointerSField<Image *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecImagePtr :
    public PointerMField<Image *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecImagePtr :
    public PointerMField<Image *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakImagePtr :
    public PointerMField<Image *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedImagePtr :
    public PointerMField<Image *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGIMAGEFIELDS_H_ */
