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
 **     class ShaderVariableVec4f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGShaderVariableVec4fBase.h"
#include "OSGShaderVariableVec4f.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableVec4f
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec4f           ShaderVariableVec4fBase::_sfValue
    variable value
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ShaderVariableVec4f *, nsOSG>::_type(
    "ShaderVariableVec4fPtr", 
    "ShaderValueVariablePtr", 
    ShaderVariableVec4f::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ShaderVariableVec4f *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableVec4f *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableVec4f *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ShaderVariableVec4fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "value",
        "variable value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableVec4f::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariableVec4f::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariableVec4fBase::TypeObject ShaderVariableVec4fBase::_type(
    ShaderVariableVec4fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableVec4fBase::createEmptyLocal),
    ShaderVariableVec4f::initMethod,
    ShaderVariableVec4f::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariableVec4f::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderVariableVec4f\"\n"
    "   parent=\"ShaderValueVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"value\"\n"
    "\t type=\"Vec4f\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tvariable value\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableVec4fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableVec4fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableVec4fBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableVec4f);
}

/*------------------------- decorator get ------------------------------*/


SFVec4f *ShaderVariableVec4fBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFVec4f *ShaderVariableVec4fBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderVariableVec4fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariableVec4fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderVariableVec4fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        editSField(ValueFieldMask);
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableVec4fTransitPtr ShaderVariableVec4fBase::createLocal(BitVector bFlags)
{
    ShaderVariableVec4fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableVec4f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableVec4fTransitPtr ShaderVariableVec4fBase::createDependent(BitVector bFlags)
{
    ShaderVariableVec4fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableVec4f>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableVec4fTransitPtr ShaderVariableVec4fBase::create(void)
{
    ShaderVariableVec4fTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableVec4f>(tmpPtr);
    }

    return fc;
}

ShaderVariableVec4f *ShaderVariableVec4fBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableVec4f *returnValue;

    newPtr<ShaderVariableVec4f>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableVec4f *ShaderVariableVec4fBase::createEmpty(void)
{
    ShaderVariableVec4f *returnValue;

    newPtr<ShaderVariableVec4f>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableVec4fBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableVec4f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableVec4f *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableVec4fBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableVec4f *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableVec4f *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableVec4fBase::shallowCopy(void) const
{
    ShaderVariableVec4f *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableVec4f *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableVec4fBase::ShaderVariableVec4fBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderVariableVec4fBase::ShaderVariableVec4fBase(const ShaderVariableVec4fBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableVec4fBase::~ShaderVariableVec4fBase(void)
{
}


GetFieldHandlePtr ShaderVariableVec4fBase::getHandleValue           (void) const
{
    SFVec4f::GetHandlePtr returnValue(
        new  SFVec4f::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<ShaderVariableVec4fBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableVec4fBase::editHandleValue          (void)
{
    SFVec4f::EditHandlePtr returnValue(
        new  SFVec4f::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableVec4fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableVec4f *pThis = static_cast<ShaderVariableVec4f *>(this);

    pThis->execSync(static_cast<ShaderVariableVec4f *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableVec4fBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableVec4f *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableVec4f *>(pRefAspect),
                  dynamic_cast<const ShaderVariableVec4f *>(this));

    return returnValue;
}
#endif

void ShaderVariableVec4fBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
