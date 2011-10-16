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
 **     class ShaderProgramFile!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGShaderProgramFileBase.h"
#include "OSGShaderProgramFile.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderProgramFile
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     ShaderProgramFileBase::_sfProgramUrl
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderProgramFile *, nsOSG>::_type(
    "ShaderProgramFilePtr", 
    "ShaderProgramPtr", 
    ShaderProgramFile::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderProgramFile *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderProgramFileBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "programUrl",
        "",
        ProgramUrlFieldId, ProgramUrlFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderProgramFile::editHandleProgramUrl),
        static_cast<FieldGetMethodSig >(&ShaderProgramFile::getHandleProgramUrl));

    oType.addInitialDesc(pDesc);
}


ShaderProgramFileBase::TypeObject ShaderProgramFileBase::_type(
    ShaderProgramFileBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderProgramFileBase::createEmptyLocal),
    ShaderProgramFile::initMethod,
    ShaderProgramFile::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderProgramFile::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ShaderProgramFile\"\n"
    "    parent=\"ShaderProgram\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"false\"\n"
    "    parentFields=\"none\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"programUrl\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderProgramFileBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderProgramFileBase::getType(void) const
{
    return _type;
}

UInt32 ShaderProgramFileBase::getContainerSize(void) const
{
    return sizeof(ShaderProgramFile);
}

/*------------------------- decorator get ------------------------------*/


SFString *ShaderProgramFileBase::editSFProgramUrl(void)
{
    editSField(ProgramUrlFieldMask);

    return &_sfProgramUrl;
}

const SFString *ShaderProgramFileBase::getSFProgramUrl(void) const
{
    return &_sfProgramUrl;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderProgramFileBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProgramUrlFieldMask & whichField))
    {
        returnValue += _sfProgramUrl.getBinSize();
    }

    return returnValue;
}

void ShaderProgramFileBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramUrlFieldMask & whichField))
    {
        _sfProgramUrl.copyToBin(pMem);
    }
}

void ShaderProgramFileBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProgramUrlFieldMask & whichField))
    {
        editSField(ProgramUrlFieldMask);
        _sfProgramUrl.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderProgramFileTransitPtr ShaderProgramFileBase::createLocal(BitVector bFlags)
{
    ShaderProgramFileTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramFile>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderProgramFileTransitPtr ShaderProgramFileBase::createDependent(BitVector bFlags)
{
    ShaderProgramFileTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderProgramFile>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderProgramFileTransitPtr ShaderProgramFileBase::create(void)
{
    ShaderProgramFileTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderProgramFile>(tmpPtr);
    }

    return fc;
}

ShaderProgramFile *ShaderProgramFileBase::createEmptyLocal(BitVector bFlags)
{
    ShaderProgramFile *returnValue;

    newPtr<ShaderProgramFile>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderProgramFile *ShaderProgramFileBase::createEmpty(void)
{
    ShaderProgramFile *returnValue;

    newPtr<ShaderProgramFile>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderProgramFileBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderProgramFile *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramFile *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramFileBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderProgramFile *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderProgramFile *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderProgramFileBase::shallowCopy(void) const
{
    ShaderProgramFile *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderProgramFile *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderProgramFileBase::ShaderProgramFileBase(void) :
    Inherited(),
    _sfProgramUrl             ()
{
}

ShaderProgramFileBase::ShaderProgramFileBase(const ShaderProgramFileBase &source) :
    Inherited(source),
    _sfProgramUrl             (source._sfProgramUrl             )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderProgramFileBase::~ShaderProgramFileBase(void)
{
}


GetFieldHandlePtr ShaderProgramFileBase::getHandleProgramUrl      (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfProgramUrl,
             this->getType().getFieldDesc(ProgramUrlFieldId),
             const_cast<ShaderProgramFileBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderProgramFileBase::editHandleProgramUrl     (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfProgramUrl,
             this->getType().getFieldDesc(ProgramUrlFieldId),
             this));


    editSField(ProgramUrlFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderProgramFileBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderProgramFile *pThis = static_cast<ShaderProgramFile *>(this);

    pThis->execSync(static_cast<ShaderProgramFile *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderProgramFileBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderProgramFile *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderProgramFile *>(pRefAspect),
                  dynamic_cast<const ShaderProgramFile *>(this));

    return returnValue;
}
#endif

void ShaderProgramFileBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
