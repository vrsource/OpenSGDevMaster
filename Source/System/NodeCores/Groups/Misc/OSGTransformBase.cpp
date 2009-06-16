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
 **     Do not change this file, changes should be done in the derived      **
 **     class Transform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTransformBase.h"
#include "OSGTransform.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Transform
    The basic Transformation class. Just keeps a single matrix. For more complex
    behaviour, see its descendents.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Matrixr         TransformBase::_sfMatrix
    The transformation matrix.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Transform *>::_type("TransformPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Transform *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Transform *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Transform *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TransformBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrixr::Description(
        SFMatrixr::getClassType(),
        "matrix",
        "The transformation matrix.\n",
        MatrixFieldId, MatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Transform::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&Transform::getHandleMatrix));

    oType.addInitialDesc(pDesc);
}


TransformBase::TypeObject TransformBase::_type(
    TransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TransformBase::createEmptyLocal),
    Transform::initMethod,
    Transform::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Transform::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Transform\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "The basic Transformation class. Just keeps a single matrix. For more complex\n"
    "behaviour, see its descendents.\n"
    "\t<Field\n"
    "\t\tname=\"matrix\"\n"
    "\t\ttype=\"Matrixr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe transformation matrix.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The basic Transformation class. Just keeps a single matrix. For more complex\n"
    "behaviour, see its descendents.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformBase::getType(void)
{
    return _type;
}

const FieldContainerType &TransformBase::getType(void) const
{
    return _type;
}

UInt32 TransformBase::getContainerSize(void) const
{
    return sizeof(Transform);
}

/*------------------------- decorator get ------------------------------*/


SFMatrixr *TransformBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrixr *TransformBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}






/*------------------------------ access -----------------------------------*/

UInt32 TransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }

    return returnValue;
}

void TransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
}

void TransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TransformTransitPtr TransformBase::createLocal(BitVector bFlags)
{
    TransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Transform>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TransformTransitPtr TransformBase::createDependent(BitVector bFlags)
{
    TransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<Transform>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TransformTransitPtr TransformBase::create(void)
{
    TransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<Transform>(tmpPtr);
    }

    return fc;
}

Transform *TransformBase::createEmptyLocal(BitVector bFlags)
{
    Transform *returnValue;

    newPtr<Transform>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Transform *TransformBase::createEmpty(void)
{
    Transform *returnValue;

    newPtr<Transform>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TransformBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Transform *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Transform *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TransformBase::shallowCopyDependent(
    BitVector bFlags) const
{
    Transform *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Transform *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TransformBase::shallowCopy(void) const
{
    Transform *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const Transform *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TransformBase::TransformBase(void) :
    Inherited(),
    _sfMatrix                 ()
{
}

TransformBase::TransformBase(const TransformBase &source) :
    Inherited(source),
    _sfMatrix                 (source._sfMatrix                 )
{
}


/*-------------------------- destructors ----------------------------------*/

TransformBase::~TransformBase(void)
{
}


GetFieldHandlePtr TransformBase::getHandleMatrix          (void) const
{
    SFMatrixr::GetHandlePtr returnValue(
        new  SFMatrixr::GetHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             const_cast<TransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TransformBase::editHandleMatrix         (void)
{
    SFMatrixr::EditHandlePtr returnValue(
        new  SFMatrixr::EditHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             this));


    editSField(MatrixFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Transform *pThis = static_cast<Transform *>(this);

    pThis->execSync(static_cast<Transform *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TransformBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    Transform *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Transform *>(pRefAspect),
                  dynamic_cast<const Transform *>(this));

    return returnValue;
}
#endif

void TransformBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
