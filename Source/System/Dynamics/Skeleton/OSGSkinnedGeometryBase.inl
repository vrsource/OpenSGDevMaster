/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class SkinnedGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SkinnedGeometryBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SkinnedGeometryBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SkinnedGeometryBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the SkinnedGeometry::_sfSkeleton field.
inline
Skeleton * SkinnedGeometryBase::getSkeleton(void) const
{
    return _sfSkeleton.getValue();
}

//! Set the value of the SkinnedGeometry::_sfSkeleton field.
inline
void SkinnedGeometryBase::setSkeleton(Skeleton * const value)
{
    editSField(SkeletonFieldMask);

    _sfSkeleton.setValue(value);
}
//! Get the value of the SkinnedGeometry::_sfInfluencePropertyIndex field.

inline
UInt16 &SkinnedGeometryBase::editInfluencePropertyIndex(void)
{
    editSField(InfluencePropertyIndexFieldMask);

    return _sfInfluencePropertyIndex.getValue();
}

//! Get the value of the SkinnedGeometry::_sfInfluencePropertyIndex field.
inline
      UInt16  SkinnedGeometryBase::getInfluencePropertyIndex(void) const
{
    return _sfInfluencePropertyIndex.getValue();
}

//! Set the value of the SkinnedGeometry::_sfInfluencePropertyIndex field.
inline
void SkinnedGeometryBase::setInfluencePropertyIndex(const UInt16 value)
{
    editSField(InfluencePropertyIndexFieldMask);

    _sfInfluencePropertyIndex.setValue(value);
}
//! Get the value of the SkinnedGeometry::_sfWeightPropertyIndex field.

inline
UInt16 &SkinnedGeometryBase::editWeightPropertyIndex(void)
{
    editSField(WeightPropertyIndexFieldMask);

    return _sfWeightPropertyIndex.getValue();
}

//! Get the value of the SkinnedGeometry::_sfWeightPropertyIndex field.
inline
      UInt16  SkinnedGeometryBase::getWeightPropertyIndex(void) const
{
    return _sfWeightPropertyIndex.getValue();
}

//! Set the value of the SkinnedGeometry::_sfWeightPropertyIndex field.
inline
void SkinnedGeometryBase::setWeightPropertyIndex(const UInt16 value)
{
    editSField(WeightPropertyIndexFieldMask);

    _sfWeightPropertyIndex.setValue(value);
}
//! Get the value of the SkinnedGeometry::_sfFlags field.

inline
UInt32 &SkinnedGeometryBase::editFlags(void)
{
    editSField(FlagsFieldMask);

    return _sfFlags.getValue();
}

//! Get the value of the SkinnedGeometry::_sfFlags field.
inline
      UInt32  SkinnedGeometryBase::getFlags(void) const
{
    return _sfFlags.getValue();
}

//! Set the value of the SkinnedGeometry::_sfFlags field.
inline
void SkinnedGeometryBase::setFlags(const UInt32 value)
{
    editSField(FlagsFieldMask);

    _sfFlags.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SkinnedGeometryBase::execSync (      SkinnedGeometryBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
        _sfSkeleton.syncWith(pFrom->_sfSkeleton);

    if(FieldBits::NoField != (InfluencePropertyIndexFieldMask & whichField))
        _sfInfluencePropertyIndex.syncWith(pFrom->_sfInfluencePropertyIndex);

    if(FieldBits::NoField != (WeightPropertyIndexFieldMask & whichField))
        _sfWeightPropertyIndex.syncWith(pFrom->_sfWeightPropertyIndex);

    if(FieldBits::NoField != (FlagsFieldMask & whichField))
        _sfFlags.syncWith(pFrom->_sfFlags);
}
#endif


inline
const Char8 *SkinnedGeometryBase::getClassname(void)
{
    return "SkinnedGeometry";
}
OSG_GEN_CONTAINERPTR(SkinnedGeometry);

OSG_END_NAMESPACE

