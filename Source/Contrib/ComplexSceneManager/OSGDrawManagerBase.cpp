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
 **     class DrawManager!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGDrawer.h> // Drawer Class

#include "OSGDrawManagerBase.h"
#include "OSGDrawManager.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DrawManager
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Drawer *        DrawManagerBase::_mfDrawer
    
*/

/*! \var bool            DrawManagerBase::_sfParallel
    
*/

/*! \var std::string     DrawManagerBase::_sfSyncBarrierName
    
*/

/*! \var std::string     DrawManagerBase::_sfSwapBarrierName
    
*/


void DrawManagerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecDrawerPtr::Description(
        MFUnrecDrawerPtr::getClassType(),
        "drawer",
        "",
        DrawerFieldId, DrawerFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DrawManager::editHandleDrawer),
        static_cast<FieldGetMethodSig >(&DrawManager::getHandleDrawer));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "parallel",
        "",
        ParallelFieldId, ParallelFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DrawManager::editHandleParallel),
        static_cast<FieldGetMethodSig >(&DrawManager::getHandleParallel));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "syncBarrierName",
        "",
        SyncBarrierNameFieldId, SyncBarrierNameFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DrawManager::editHandleSyncBarrierName),
        static_cast<FieldGetMethodSig >(&DrawManager::getHandleSyncBarrierName));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "swapBarrierName",
        "",
        SwapBarrierNameFieldId, SwapBarrierNameFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DrawManager::editHandleSwapBarrierName),
        static_cast<FieldGetMethodSig >(&DrawManager::getHandleSwapBarrierName));

    oType.addInitialDesc(pDesc);
}


DrawManagerBase::TypeObject DrawManagerBase::_type(
    DrawManagerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DrawManagerBase::createEmptyLocal),
    DrawManager::initMethod,
    DrawManager::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DrawManagerBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"DrawManager\"\n"
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
    "\t\tname=\"drawer\"\n"
    "\t\ttype=\"Drawer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "       name=\"parallel\"\n"
    "       type=\"bool\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"syncBarrierName\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"&quot;&quot;\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"swapBarrierName\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"&quot;&quot;\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DrawManagerBase::getType(void)
{
    return _type;
}

const FieldContainerType &DrawManagerBase::getType(void) const
{
    return _type;
}

UInt32 DrawManagerBase::getContainerSize(void) const
{
    return sizeof(DrawManager);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DrawManager::_mfDrawer field.
const MFUnrecDrawerPtr *DrawManagerBase::getMFDrawer(void) const
{
    return &_mfDrawer;
}

MFUnrecDrawerPtr    *DrawManagerBase::editMFDrawer         (void)
{
    editMField(DrawerFieldMask, _mfDrawer);

    return &_mfDrawer;
}

SFBool *DrawManagerBase::editSFParallel(void)
{
    editSField(ParallelFieldMask);

    return &_sfParallel;
}

const SFBool *DrawManagerBase::getSFParallel(void) const
{
    return &_sfParallel;
}


SFString *DrawManagerBase::editSFSyncBarrierName(void)
{
    editSField(SyncBarrierNameFieldMask);

    return &_sfSyncBarrierName;
}

const SFString *DrawManagerBase::getSFSyncBarrierName(void) const
{
    return &_sfSyncBarrierName;
}


SFString *DrawManagerBase::editSFSwapBarrierName(void)
{
    editSField(SwapBarrierNameFieldMask);

    return &_sfSwapBarrierName;
}

const SFString *DrawManagerBase::getSFSwapBarrierName(void) const
{
    return &_sfSwapBarrierName;
}




void DrawManagerBase::pushToDrawer(Drawer * const value)
{
    editMField(DrawerFieldMask, _mfDrawer);

    _mfDrawer.push_back(value);
}

void DrawManagerBase::assignDrawer   (const MFUnrecDrawerPtr  &value)
{
    MFUnrecDrawerPtr ::const_iterator elemIt  =
        value.begin();
    MFUnrecDrawerPtr ::const_iterator elemEnd =
        value.end  ();

    static_cast<DrawManager *>(this)->clearDrawer();

    while(elemIt != elemEnd)
    {
        this->pushToDrawer(*elemIt);

        ++elemIt;
    }
}

void DrawManagerBase::removeFromDrawer(UInt32 uiIndex)
{
    if(uiIndex < _mfDrawer.size())
    {
        editMField(DrawerFieldMask, _mfDrawer);

        _mfDrawer.erase(uiIndex);
    }
}

void DrawManagerBase::removeObjFromDrawer(Drawer * const value)
{
    Int32 iElemIdx = _mfDrawer.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(DrawerFieldMask, _mfDrawer);

        _mfDrawer.erase(iElemIdx);
    }
}
void DrawManagerBase::clearDrawer(void)
{
    editMField(DrawerFieldMask, _mfDrawer);


    _mfDrawer.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 DrawManagerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawerFieldMask & whichField))
    {
        returnValue += _mfDrawer.getBinSize();
    }
    if(FieldBits::NoField != (ParallelFieldMask & whichField))
    {
        returnValue += _sfParallel.getBinSize();
    }
    if(FieldBits::NoField != (SyncBarrierNameFieldMask & whichField))
    {
        returnValue += _sfSyncBarrierName.getBinSize();
    }
    if(FieldBits::NoField != (SwapBarrierNameFieldMask & whichField))
    {
        returnValue += _sfSwapBarrierName.getBinSize();
    }

    return returnValue;
}

void DrawManagerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawerFieldMask & whichField))
    {
        _mfDrawer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParallelFieldMask & whichField))
    {
        _sfParallel.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SyncBarrierNameFieldMask & whichField))
    {
        _sfSyncBarrierName.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SwapBarrierNameFieldMask & whichField))
    {
        _sfSwapBarrierName.copyToBin(pMem);
    }
}

void DrawManagerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawerFieldMask & whichField))
    {
        _mfDrawer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParallelFieldMask & whichField))
    {
        _sfParallel.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SyncBarrierNameFieldMask & whichField))
    {
        _sfSyncBarrierName.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SwapBarrierNameFieldMask & whichField))
    {
        _sfSwapBarrierName.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DrawManagerTransitPtr DrawManagerBase::createLocal(BitVector bFlags)
{
    DrawManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DrawManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DrawManagerTransitPtr DrawManagerBase::create(void)
{
    return createLocal();
}

DrawManager *DrawManagerBase::createEmptyLocal(BitVector bFlags)
{
    DrawManager *returnValue;

    newPtr<DrawManager>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DrawManager *DrawManagerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr DrawManagerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DrawManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DrawManager *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DrawManagerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

DrawManagerBase::DrawManagerBase(void) :
    Inherited(),
    _mfDrawer                 (),
    _sfParallel               (),
    _sfSyncBarrierName        (std::string("")),
    _sfSwapBarrierName        (std::string(""))
{
}

DrawManagerBase::DrawManagerBase(const DrawManagerBase &source) :
    Inherited(source),
    _mfDrawer                 (),
    _sfParallel               (source._sfParallel               ),
    _sfSyncBarrierName        (source._sfSyncBarrierName        ),
    _sfSwapBarrierName        (source._sfSwapBarrierName        )
{
}


/*-------------------------- destructors ----------------------------------*/

DrawManagerBase::~DrawManagerBase(void)
{
}

void DrawManagerBase::onCreate(const DrawManager *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DrawManager *pThis = static_cast<DrawManager *>(this);

        MFUnrecDrawerPtr::const_iterator DrawerIt  =
            source->_mfDrawer.begin();
        MFUnrecDrawerPtr::const_iterator DrawerEnd =
            source->_mfDrawer.end  ();

        while(DrawerIt != DrawerEnd)
        {
            pThis->pushToDrawer(*DrawerIt);

            ++DrawerIt;
        }
    }
}

GetFieldHandlePtr DrawManagerBase::getHandleDrawer          (void) const
{
    MFUnrecDrawerPtr::GetHandlePtr returnValue(
        new  MFUnrecDrawerPtr::GetHandle(
             &_mfDrawer,
             this->getType().getFieldDesc(DrawerFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawManagerBase::editHandleDrawer         (void)
{
    MFUnrecDrawerPtr::EditHandlePtr returnValue(
        new  MFUnrecDrawerPtr::EditHandle(
             &_mfDrawer,
             this->getType().getFieldDesc(DrawerFieldId)));

    returnValue->setAddMethod(
        boost::bind(&DrawManager::pushToDrawer,
                    static_cast<DrawManager *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&DrawManager::removeFromDrawer,
                    static_cast<DrawManager *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&DrawManager::removeObjFromDrawer,
                    static_cast<DrawManager *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&DrawManager::clearDrawer,
                    static_cast<DrawManager *>(this)));

    editMField(DrawerFieldMask, _mfDrawer);

    return returnValue;
}

GetFieldHandlePtr DrawManagerBase::getHandleParallel        (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfParallel,
             this->getType().getFieldDesc(ParallelFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawManagerBase::editHandleParallel       (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfParallel,
             this->getType().getFieldDesc(ParallelFieldId)));


    editSField(ParallelFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawManagerBase::getHandleSyncBarrierName (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfSyncBarrierName,
             this->getType().getFieldDesc(SyncBarrierNameFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawManagerBase::editHandleSyncBarrierName(void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfSyncBarrierName,
             this->getType().getFieldDesc(SyncBarrierNameFieldId)));


    editSField(SyncBarrierNameFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawManagerBase::getHandleSwapBarrierName (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfSwapBarrierName,
             this->getType().getFieldDesc(SwapBarrierNameFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawManagerBase::editHandleSwapBarrierName(void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfSwapBarrierName,
             this->getType().getFieldDesc(SwapBarrierNameFieldId)));


    editSField(SwapBarrierNameFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DrawManagerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DrawManager *pThis = static_cast<DrawManager *>(this);

    pThis->execSync(static_cast<DrawManager *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DrawManagerBase::createAspectCopy(void) const
{
    DrawManager *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DrawManager *>(this));

    return returnValue;
}
#endif

void DrawManagerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DrawManager *>(this)->clearDrawer();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DrawManager *>::_type("DrawManagerPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DrawManager *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DrawManager *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DrawManager *,
                           0);

OSG_END_NAMESPACE
