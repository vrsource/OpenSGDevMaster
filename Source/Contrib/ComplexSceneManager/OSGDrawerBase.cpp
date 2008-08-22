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
 **     class Drawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGCSMWindow.h> // Windows Class

#include "OSGDrawerBase.h"
#include "OSGDrawer.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Drawer
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var CSMWindow *     DrawerBase::_mfWindows
    
*/

/*! \var std::string     DrawerBase::_sfDisplayString
    
*/

/*! \var UInt32          DrawerBase::_sfAspect
    
*/


void DrawerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecChildCSMWindowPtr::Description(
        MFUnrecChildCSMWindowPtr::getClassType(),
        "windows",
        "",
        WindowsFieldId, WindowsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Drawer::editHandleWindows),
        static_cast<FieldGetMethodSig >(&Drawer::getHandleWindows));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "displayString",
        "",
        DisplayStringFieldId, DisplayStringFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Drawer::editHandleDisplayString),
        static_cast<FieldGetMethodSig >(&Drawer::getHandleDisplayString));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "aspect",
        "",
        AspectFieldId, AspectFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&Drawer::editHandleAspect),
        static_cast<FieldGetMethodSig >(&Drawer::getHandleAspect));

    oType.addInitialDesc(pDesc);
}


DrawerBase::TypeObject DrawerBase::_type(
    DrawerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DrawerBase::createEmptyLocal),
    Drawer::initMethod,
    Drawer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DrawerBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"Drawer\"\n"
    "    parent=\"AttachmentContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"multi\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "    parentFields=\"single\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"windows\"\n"
    "\t\ttype=\"CSMWindow\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"childpointer\"\n"
    "        childParentType=\"Drawer\"\n"
    "        linkParentField=\"Parent\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"displayString\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "       name=\"aspect\"\n"
    "       type=\"UInt32\"\n"
    "       cardinality=\"single\"\n"
    "       visibility=\"external\"\n"
    "       access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DrawerBase::getType(void)
{
    return _type;
}

const FieldContainerType &DrawerBase::getType(void) const
{
    return _type;
}

UInt32 DrawerBase::getContainerSize(void) const
{
    return sizeof(Drawer);
}

/*------------------------- decorator get ------------------------------*/


//! Get the Drawer::_mfWindows field.
const MFUnrecChildCSMWindowPtr *DrawerBase::getMFWindows(void) const
{
    return &_mfWindows;
}

MFUnrecChildCSMWindowPtr *DrawerBase::editMFWindows        (void)
{
    editMField(WindowsFieldMask, _mfWindows);

    return &_mfWindows;
}

SFString *DrawerBase::editSFDisplayString(void)
{
    editSField(DisplayStringFieldMask);

    return &_sfDisplayString;
}

const SFString *DrawerBase::getSFDisplayString(void) const
{
    return &_sfDisplayString;
}


SFUInt32 *DrawerBase::editSFAspect(void)
{
    editSField(AspectFieldMask);

    return &_sfAspect;
}

const SFUInt32 *DrawerBase::getSFAspect(void) const
{
    return &_sfAspect;
}




void DrawerBase::pushToWindows(CSMWindow * const value)
{
    editMField(WindowsFieldMask, _mfWindows);

    _mfWindows.push_back(value);
}

void DrawerBase::assignWindows  (const MFUnrecChildCSMWindowPtr &value)
{
    MFUnrecChildCSMWindowPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecChildCSMWindowPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<Drawer *>(this)->clearWindows();

    while(elemIt != elemEnd)
    {
        this->pushToWindows(*elemIt);

        ++elemIt;
    }
}

void DrawerBase::removeFromWindows(UInt32 uiIndex)
{
    if(uiIndex < _mfWindows.size())
    {
        editMField(WindowsFieldMask, _mfWindows);

        _mfWindows.erase(uiIndex);
    }
}

void DrawerBase::removeObjFromWindows(CSMWindow * const value)
{
    Int32 iElemIdx = _mfWindows.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(WindowsFieldMask, _mfWindows);

        _mfWindows.erase(iElemIdx);
    }
}
void DrawerBase::clearWindows(void)
{
    editMField(WindowsFieldMask, _mfWindows);


    _mfWindows.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 DrawerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WindowsFieldMask & whichField))
    {
        returnValue += _mfWindows.getBinSize();
    }
    if(FieldBits::NoField != (DisplayStringFieldMask & whichField))
    {
        returnValue += _sfDisplayString.getBinSize();
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        returnValue += _sfAspect.getBinSize();
    }

    return returnValue;
}

void DrawerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WindowsFieldMask & whichField))
    {
        _mfWindows.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DisplayStringFieldMask & whichField))
    {
        _sfDisplayString.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyToBin(pMem);
    }
}

void DrawerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WindowsFieldMask & whichField))
    {
        _mfWindows.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DisplayStringFieldMask & whichField))
    {
        _sfDisplayString.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DrawerTransitPtr DrawerBase::createLocal(BitVector bFlags)
{
    DrawerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<Drawer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DrawerTransitPtr DrawerBase::create(void)
{
    return createLocal();
}

Drawer *DrawerBase::createEmptyLocal(BitVector bFlags)
{
    Drawer *returnValue;

    newPtr<Drawer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
Drawer *DrawerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr DrawerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    Drawer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const Drawer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DrawerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

DrawerBase::DrawerBase(void) :
    Inherited(),
    _mfWindows                (this,
                          WindowsFieldId,
                          CSMWindow::ParentFieldId),
    _sfDisplayString          (),
    _sfAspect                 ()
{
}

DrawerBase::DrawerBase(const DrawerBase &source) :
    Inherited(source),
    _mfWindows                (this,
                          WindowsFieldId,
                          CSMWindow::ParentFieldId),
    _sfDisplayString          (source._sfDisplayString          ),
    _sfAspect                 (source._sfAspect                 )
{
}


/*-------------------------- destructors ----------------------------------*/

DrawerBase::~DrawerBase(void)
{
}

/*-------------------------------------------------------------------------*/
/* Child linking                                                           */

bool DrawerBase::unlinkChild(
    FieldContainer * const pChild,
    UInt16           const childFieldId)
{
    if(childFieldId == WindowsFieldId)
    {
        CSMWindow * pTypedChild =
            dynamic_cast<CSMWindow *>(pChild);

        if(pTypedChild != NULL)
        {
            Int32 iChildIdx = _mfWindows.findIndex(pTypedChild);

            if(iChildIdx != -1)
            {
                editMField(WindowsFieldMask, _mfWindows);

                _mfWindows.erase(iChildIdx);

                return true;
            }

            FWARNING(("DrawerBase::unlinkParent: Child <-> "
                      "Parent link inconsistent.\n"));

            return false;
        }

        return false;
    }


    return Inherited::unlinkChild(pChild, childFieldId);
}

void DrawerBase::onCreate(const Drawer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        Drawer *pThis = static_cast<Drawer *>(this);

        MFUnrecChildCSMWindowPtr::const_iterator WindowsIt  =
            source->_mfWindows.begin();
        MFUnrecChildCSMWindowPtr::const_iterator WindowsEnd =
            source->_mfWindows.end  ();

        while(WindowsIt != WindowsEnd)
        {
            pThis->pushToWindows(*WindowsIt);

            ++WindowsIt;
        }
    }
}

GetFieldHandlePtr DrawerBase::getHandleWindows         (void) const
{
    MFUnrecChildCSMWindowPtr::GetHandlePtr returnValue(
        new  MFUnrecChildCSMWindowPtr::GetHandle(
             &_mfWindows,
             this->getType().getFieldDesc(WindowsFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawerBase::editHandleWindows        (void)
{
    MFUnrecChildCSMWindowPtr::EditHandlePtr returnValue(
        new  MFUnrecChildCSMWindowPtr::EditHandle(
             &_mfWindows,
             this->getType().getFieldDesc(WindowsFieldId)));

    returnValue->setAddMethod(
        boost::bind(&Drawer::pushToWindows,
                    static_cast<Drawer *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&Drawer::removeFromWindows,
                    static_cast<Drawer *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&Drawer::removeObjFromWindows,
                    static_cast<Drawer *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&Drawer::clearWindows,
                    static_cast<Drawer *>(this)));

    editMField(WindowsFieldMask, _mfWindows);

    return returnValue;
}

GetFieldHandlePtr DrawerBase::getHandleDisplayString   (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfDisplayString,
             this->getType().getFieldDesc(DisplayStringFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawerBase::editHandleDisplayString  (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfDisplayString,
             this->getType().getFieldDesc(DisplayStringFieldId)));


    editSField(DisplayStringFieldMask);

    return returnValue;
}

GetFieldHandlePtr DrawerBase::getHandleAspect          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfAspect,
             this->getType().getFieldDesc(AspectFieldId)));

    return returnValue;
}

EditFieldHandlePtr DrawerBase::editHandleAspect         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfAspect,
             this->getType().getFieldDesc(AspectFieldId)));


    editSField(AspectFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DrawerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Drawer *pThis = static_cast<Drawer *>(this);

    pThis->execSync(static_cast<Drawer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DrawerBase::createAspectCopy(void) const
{
    Drawer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Drawer *>(this));

    return returnValue;
}
#endif

void DrawerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Drawer *>(this)->clearWindows();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Drawer *>::_type("DrawerPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Drawer *)


OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Drawer *,
                           0);

DataType &FieldTraits<Drawer *, 1 >::getType(void)
{
    return FieldTraits<Drawer *, 0>::getType();
}


OSG_SFIELDTYPE_INST(ParentPointerSField,
                    Drawer *,
                    NoRefCountPolicy,
                    1);

OSG_FIELD_DLLEXPORT_DEF3(ParentPointerSField,
                         Drawer *,
                         NoRefCountPolicy,
                         1);


OSG_END_NAMESPACE
