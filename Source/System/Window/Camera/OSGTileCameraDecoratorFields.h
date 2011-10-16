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


#ifndef _OSGTILECAMERADECORATORFIELDS_H_
#define _OSGTILECAMERADECORATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class TileCameraDecorator;

OSG_GEN_CONTAINERPTR(TileCameraDecorator);
/*! \ingroup GrpWindowCameraFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<TileCameraDecorator *, nsOSG> :
    public FieldTraitsFCPtrBase<TileCameraDecorator *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<TileCameraDecorator *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTileCameraDecoratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<TileCameraDecorator *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTileCameraDecoratorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<TileCameraDecorator *,
                      RecordedRefCountPolicy, nsOSG  > SFRecTileCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<TileCameraDecorator *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecTileCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<TileCameraDecorator *,
                      WeakRefCountPolicy, nsOSG      > SFWeakTileCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldSFields */
typedef PointerSField<TileCameraDecorator *,
                      NoRefCountPolicy, nsOSG        > SFUncountedTileCameraDecoratorPtr;


/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<TileCameraDecorator *,
                      RecordedRefCountPolicy, nsOSG  > MFRecTileCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<TileCameraDecorator *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecTileCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<TileCameraDecorator *,
                      WeakRefCountPolicy, nsOSG      > MFWeakTileCameraDecoratorPtr;
/*! \ingroup GrpWindowCameraFieldMFields */
typedef PointerMField<TileCameraDecorator *,
                      NoRefCountPolicy, nsOSG        > MFUncountedTileCameraDecoratorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecTileCameraDecoratorPtr : 
    public PointerSField<TileCameraDecorator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecTileCameraDecoratorPtr : 
    public PointerSField<TileCameraDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakTileCameraDecoratorPtr :
    public PointerSField<TileCameraDecorator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedTileCameraDecoratorPtr :
    public PointerSField<TileCameraDecorator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecTileCameraDecoratorPtr :
    public PointerMField<TileCameraDecorator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecTileCameraDecoratorPtr :
    public PointerMField<TileCameraDecorator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakTileCameraDecoratorPtr :
    public PointerMField<TileCameraDecorator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowCameraFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedTileCameraDecoratorPtr :
    public PointerMField<TileCameraDecorator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTILECAMERADECORATORFIELDS_H_ */
