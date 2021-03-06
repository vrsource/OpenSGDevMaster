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
 **     class MatrixCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &MatrixCameraDecoratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MatrixCameraDecoratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MatrixCameraDecoratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MatrixCameraDecorator::_sfPreViewing field.

inline
Matrix &MatrixCameraDecoratorBase::editPreViewing(void)
{
    editSField(PreViewingFieldMask);

    return _sfPreViewing.getValue();
}

//! Get the value of the MatrixCameraDecorator::_sfPreViewing field.
inline
const Matrix &MatrixCameraDecoratorBase::getPreViewing(void) const
{
    return _sfPreViewing.getValue();
}

//! Set the value of the MatrixCameraDecorator::_sfPreViewing field.
inline
void MatrixCameraDecoratorBase::setPreViewing(const Matrix &value)
{
    editSField(PreViewingFieldMask);

    _sfPreViewing.setValue(value);
}
//! Get the value of the MatrixCameraDecorator::_sfPostViewing field.

inline
Matrix &MatrixCameraDecoratorBase::editPostViewing(void)
{
    editSField(PostViewingFieldMask);

    return _sfPostViewing.getValue();
}

//! Get the value of the MatrixCameraDecorator::_sfPostViewing field.
inline
const Matrix &MatrixCameraDecoratorBase::getPostViewing(void) const
{
    return _sfPostViewing.getValue();
}

//! Set the value of the MatrixCameraDecorator::_sfPostViewing field.
inline
void MatrixCameraDecoratorBase::setPostViewing(const Matrix &value)
{
    editSField(PostViewingFieldMask);

    _sfPostViewing.setValue(value);
}
//! Get the value of the MatrixCameraDecorator::_sfPreProjectionTranslation field.

inline
Matrix &MatrixCameraDecoratorBase::editPreProjectionTranslation(void)
{
    editSField(PreProjectionTranslationFieldMask);

    return _sfPreProjectionTranslation.getValue();
}

//! Get the value of the MatrixCameraDecorator::_sfPreProjectionTranslation field.
inline
const Matrix &MatrixCameraDecoratorBase::getPreProjectionTranslation(void) const
{
    return _sfPreProjectionTranslation.getValue();
}

//! Set the value of the MatrixCameraDecorator::_sfPreProjectionTranslation field.
inline
void MatrixCameraDecoratorBase::setPreProjectionTranslation(const Matrix &value)
{
    editSField(PreProjectionTranslationFieldMask);

    _sfPreProjectionTranslation.setValue(value);
}
//! Get the value of the MatrixCameraDecorator::_sfPostProjectionTranslation field.

inline
Matrix &MatrixCameraDecoratorBase::editPostProjectionTranslation(void)
{
    editSField(PostProjectionTranslationFieldMask);

    return _sfPostProjectionTranslation.getValue();
}

//! Get the value of the MatrixCameraDecorator::_sfPostProjectionTranslation field.
inline
const Matrix &MatrixCameraDecoratorBase::getPostProjectionTranslation(void) const
{
    return _sfPostProjectionTranslation.getValue();
}

//! Set the value of the MatrixCameraDecorator::_sfPostProjectionTranslation field.
inline
void MatrixCameraDecoratorBase::setPostProjectionTranslation(const Matrix &value)
{
    editSField(PostProjectionTranslationFieldMask);

    _sfPostProjectionTranslation.setValue(value);
}
//! Get the value of the MatrixCameraDecorator::_sfPreProjection field.

inline
Matrix &MatrixCameraDecoratorBase::editPreProjection(void)
{
    editSField(PreProjectionFieldMask);

    return _sfPreProjection.getValue();
}

//! Get the value of the MatrixCameraDecorator::_sfPreProjection field.
inline
const Matrix &MatrixCameraDecoratorBase::getPreProjection(void) const
{
    return _sfPreProjection.getValue();
}

//! Set the value of the MatrixCameraDecorator::_sfPreProjection field.
inline
void MatrixCameraDecoratorBase::setPreProjection(const Matrix &value)
{
    editSField(PreProjectionFieldMask);

    _sfPreProjection.setValue(value);
}
//! Get the value of the MatrixCameraDecorator::_sfPostProjection field.

inline
Matrix &MatrixCameraDecoratorBase::editPostProjection(void)
{
    editSField(PostProjectionFieldMask);

    return _sfPostProjection.getValue();
}

//! Get the value of the MatrixCameraDecorator::_sfPostProjection field.
inline
const Matrix &MatrixCameraDecoratorBase::getPostProjection(void) const
{
    return _sfPostProjection.getValue();
}

//! Set the value of the MatrixCameraDecorator::_sfPostProjection field.
inline
void MatrixCameraDecoratorBase::setPostProjection(const Matrix &value)
{
    editSField(PostProjectionFieldMask);

    _sfPostProjection.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MatrixCameraDecoratorBase::execSync (      MatrixCameraDecoratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PreViewingFieldMask & whichField))
        _sfPreViewing.syncWith(pFrom->_sfPreViewing);

    if(FieldBits::NoField != (PostViewingFieldMask & whichField))
        _sfPostViewing.syncWith(pFrom->_sfPostViewing);

    if(FieldBits::NoField != (PreProjectionTranslationFieldMask & whichField))
        _sfPreProjectionTranslation.syncWith(pFrom->_sfPreProjectionTranslation);

    if(FieldBits::NoField != (PostProjectionTranslationFieldMask & whichField))
        _sfPostProjectionTranslation.syncWith(pFrom->_sfPostProjectionTranslation);

    if(FieldBits::NoField != (PreProjectionFieldMask & whichField))
        _sfPreProjection.syncWith(pFrom->_sfPreProjection);

    if(FieldBits::NoField != (PostProjectionFieldMask & whichField))
        _sfPostProjection.syncWith(pFrom->_sfPostProjection);
}
#endif


inline
const Char8 *MatrixCameraDecoratorBase::getClassname(void)
{
    return "MatrixCameraDecorator";
}
OSG_GEN_CONTAINERPTR(MatrixCameraDecorator);

OSG_END_NAMESPACE

