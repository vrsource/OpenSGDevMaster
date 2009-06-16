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
 **     class CSMSceneParameter!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGNode.h> // SceneRef Class

#include "OSGCSMSceneParameterBase.h"
#include "OSGCSMSceneParameter.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CSMSceneParameter
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          CSMSceneParameterBase::_sfSceneRef
    
*/

/*! \var Real32          CSMSceneParameterBase::_sfDistScale
    
*/

/*! \var Vec3f           CSMSceneParameterBase::_sfSceneDiag
    
*/

/*! \var Pnt3f           CSMSceneParameterBase::_sfInitViewPos
    
*/

/*! \var Pnt3f           CSMSceneParameterBase::_sfSceneCenter
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CSMSceneParameter *>::_type("CSMSceneParameterPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CSMSceneParameter *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CSMSceneParameter *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CSMSceneParameter *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CSMSceneParameterBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "sceneRef",
        "",
        SceneRefFieldId, SceneRefFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMSceneParameter::editHandleSceneRef),
        static_cast<FieldGetMethodSig >(&CSMSceneParameter::getHandleSceneRef));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "distScale",
        "",
        DistScaleFieldId, DistScaleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMSceneParameter::editHandleDistScale),
        static_cast<FieldGetMethodSig >(&CSMSceneParameter::getHandleDistScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "sceneDiag",
        "",
        SceneDiagFieldId, SceneDiagFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMSceneParameter::editHandleSceneDiag),
        static_cast<FieldGetMethodSig >(&CSMSceneParameter::getHandleSceneDiag));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "initViewPos",
        "",
        InitViewPosFieldId, InitViewPosFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMSceneParameter::editHandleInitViewPos),
        static_cast<FieldGetMethodSig >(&CSMSceneParameter::getHandleInitViewPos));

    oType.addInitialDesc(pDesc);

    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "sceneCenter",
        "",
        SceneCenterFieldId, SceneCenterFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CSMSceneParameter::editHandleSceneCenter),
        static_cast<FieldGetMethodSig >(&CSMSceneParameter::getHandleSceneCenter));

    oType.addInitialDesc(pDesc);
}


CSMSceneParameterBase::TypeObject CSMSceneParameterBase::_type(
    CSMSceneParameterBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CSMSceneParameterBase::createEmptyLocal),
    CSMSceneParameter::initMethod,
    CSMSceneParameter::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CSMSceneParameter::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"CSMSceneParameter\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"sceneRef\"\n"
    "\t\ttype=\"Node\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"distScale\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"sceneDiag\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"initViewPos\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"sceneCenter\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CSMSceneParameterBase::getType(void)
{
    return _type;
}

const FieldContainerType &CSMSceneParameterBase::getType(void) const
{
    return _type;
}

UInt32 CSMSceneParameterBase::getContainerSize(void) const
{
    return sizeof(CSMSceneParameter);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CSMSceneParameter::_sfSceneRef field.
const SFUnrecNodePtr *CSMSceneParameterBase::getSFSceneRef(void) const
{
    return &_sfSceneRef;
}

SFUnrecNodePtr      *CSMSceneParameterBase::editSFSceneRef       (void)
{
    editSField(SceneRefFieldMask);

    return &_sfSceneRef;
}

SFReal32 *CSMSceneParameterBase::editSFDistScale(void)
{
    editSField(DistScaleFieldMask);

    return &_sfDistScale;
}

const SFReal32 *CSMSceneParameterBase::getSFDistScale(void) const
{
    return &_sfDistScale;
}


SFVec3f *CSMSceneParameterBase::editSFSceneDiag(void)
{
    editSField(SceneDiagFieldMask);

    return &_sfSceneDiag;
}

const SFVec3f *CSMSceneParameterBase::getSFSceneDiag(void) const
{
    return &_sfSceneDiag;
}


SFPnt3f *CSMSceneParameterBase::editSFInitViewPos(void)
{
    editSField(InitViewPosFieldMask);

    return &_sfInitViewPos;
}

const SFPnt3f *CSMSceneParameterBase::getSFInitViewPos(void) const
{
    return &_sfInitViewPos;
}


SFPnt3f *CSMSceneParameterBase::editSFSceneCenter(void)
{
    editSField(SceneCenterFieldMask);

    return &_sfSceneCenter;
}

const SFPnt3f *CSMSceneParameterBase::getSFSceneCenter(void) const
{
    return &_sfSceneCenter;
}






/*------------------------------ access -----------------------------------*/

UInt32 CSMSceneParameterBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SceneRefFieldMask & whichField))
    {
        returnValue += _sfSceneRef.getBinSize();
    }
    if(FieldBits::NoField != (DistScaleFieldMask & whichField))
    {
        returnValue += _sfDistScale.getBinSize();
    }
    if(FieldBits::NoField != (SceneDiagFieldMask & whichField))
    {
        returnValue += _sfSceneDiag.getBinSize();
    }
    if(FieldBits::NoField != (InitViewPosFieldMask & whichField))
    {
        returnValue += _sfInitViewPos.getBinSize();
    }
    if(FieldBits::NoField != (SceneCenterFieldMask & whichField))
    {
        returnValue += _sfSceneCenter.getBinSize();
    }

    return returnValue;
}

void CSMSceneParameterBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SceneRefFieldMask & whichField))
    {
        _sfSceneRef.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DistScaleFieldMask & whichField))
    {
        _sfDistScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SceneDiagFieldMask & whichField))
    {
        _sfSceneDiag.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InitViewPosFieldMask & whichField))
    {
        _sfInitViewPos.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SceneCenterFieldMask & whichField))
    {
        _sfSceneCenter.copyToBin(pMem);
    }
}

void CSMSceneParameterBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SceneRefFieldMask & whichField))
    {
        _sfSceneRef.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DistScaleFieldMask & whichField))
    {
        _sfDistScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SceneDiagFieldMask & whichField))
    {
        _sfSceneDiag.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InitViewPosFieldMask & whichField))
    {
        _sfInitViewPos.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SceneCenterFieldMask & whichField))
    {
        _sfSceneCenter.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CSMSceneParameterTransitPtr CSMSceneParameterBase::createLocal(BitVector bFlags)
{
    CSMSceneParameterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CSMSceneParameter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CSMSceneParameterTransitPtr CSMSceneParameterBase::createDependent(BitVector bFlags)
{
    CSMSceneParameterTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CSMSceneParameter>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CSMSceneParameterTransitPtr CSMSceneParameterBase::create(void)
{
    return createLocal();
}

CSMSceneParameter *CSMSceneParameterBase::createEmptyLocal(BitVector bFlags)
{
    CSMSceneParameter *returnValue;

    newPtr<CSMSceneParameter>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CSMSceneParameter *CSMSceneParameterBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr CSMSceneParameterBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CSMSceneParameter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMSceneParameter *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMSceneParameterBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CSMSceneParameter *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CSMSceneParameter *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CSMSceneParameterBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

CSMSceneParameterBase::CSMSceneParameterBase(void) :
    Inherited(),
    _sfSceneRef               (NULL),
    _sfDistScale              (Real32(1.f)),
    _sfSceneDiag              (Vec3f(1.f)),
    _sfInitViewPos            (Pnt3f(1.f)),
    _sfSceneCenter            (Pnt3f(1.f))
{
}

CSMSceneParameterBase::CSMSceneParameterBase(const CSMSceneParameterBase &source) :
    Inherited(source),
    _sfSceneRef               (NULL),
    _sfDistScale              (source._sfDistScale              ),
    _sfSceneDiag              (source._sfSceneDiag              ),
    _sfInitViewPos            (source._sfInitViewPos            ),
    _sfSceneCenter            (source._sfSceneCenter            )
{
}


/*-------------------------- destructors ----------------------------------*/

CSMSceneParameterBase::~CSMSceneParameterBase(void)
{
}

void CSMSceneParameterBase::onCreate(const CSMSceneParameter *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CSMSceneParameter *pThis = static_cast<CSMSceneParameter *>(this);

        pThis->setSceneRef(source->getSceneRef());
    }
}

GetFieldHandlePtr CSMSceneParameterBase::getHandleSceneRef        (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfSceneRef,
             this->getType().getFieldDesc(SceneRefFieldId),
             const_cast<CSMSceneParameterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMSceneParameterBase::editHandleSceneRef       (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfSceneRef,
             this->getType().getFieldDesc(SceneRefFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CSMSceneParameter::setSceneRef,
                    static_cast<CSMSceneParameter *>(this), _1));

    editSField(SceneRefFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMSceneParameterBase::getHandleDistScale       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfDistScale,
             this->getType().getFieldDesc(DistScaleFieldId),
             const_cast<CSMSceneParameterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMSceneParameterBase::editHandleDistScale      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfDistScale,
             this->getType().getFieldDesc(DistScaleFieldId),
             this));


    editSField(DistScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMSceneParameterBase::getHandleSceneDiag       (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfSceneDiag,
             this->getType().getFieldDesc(SceneDiagFieldId),
             const_cast<CSMSceneParameterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMSceneParameterBase::editHandleSceneDiag      (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfSceneDiag,
             this->getType().getFieldDesc(SceneDiagFieldId),
             this));


    editSField(SceneDiagFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMSceneParameterBase::getHandleInitViewPos     (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfInitViewPos,
             this->getType().getFieldDesc(InitViewPosFieldId),
             const_cast<CSMSceneParameterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMSceneParameterBase::editHandleInitViewPos    (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfInitViewPos,
             this->getType().getFieldDesc(InitViewPosFieldId),
             this));


    editSField(InitViewPosFieldMask);

    return returnValue;
}

GetFieldHandlePtr CSMSceneParameterBase::getHandleSceneCenter     (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfSceneCenter,
             this->getType().getFieldDesc(SceneCenterFieldId),
             const_cast<CSMSceneParameterBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CSMSceneParameterBase::editHandleSceneCenter    (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfSceneCenter,
             this->getType().getFieldDesc(SceneCenterFieldId),
             this));


    editSField(SceneCenterFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CSMSceneParameterBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CSMSceneParameter *pThis = static_cast<CSMSceneParameter *>(this);

    pThis->execSync(static_cast<CSMSceneParameter *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CSMSceneParameterBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CSMSceneParameter *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CSMSceneParameter *>(pRefAspect),
                  dynamic_cast<const CSMSceneParameter *>(this));

    return returnValue;
}
#endif

void CSMSceneParameterBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CSMSceneParameter *>(this)->setSceneRef(NULL);


}


OSG_END_NAMESPACE
