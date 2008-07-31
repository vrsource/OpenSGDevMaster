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
 **     class StatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGStatisticsForegroundBase.h"
#include "OSGStatisticsForeground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StatisticsForeground
    StatisticsForeground is the base class for all foregrounds that process
    statistics.  Decendents of this class can be used to print or draw Statistics
    elements on the rendered image.

    The OSG::StatCollector that is used to collect the elements needs to be
    attached to the foreground in the _sfCollection field and the list of
    OSG::StatElemDesc IDs that should be displayed need to be selected with the
    _mfElementIDs field.

    Statistics presentation is done as a foreground so it can be drawn on top of a
    currently rendering scene.  This does not mean you could not collect statistics
    directly and present them to the user in another way such as a GUI or text output.

    The format of every element is given by a format string for every element that
    is directly passed to OSG::StatElem::putToString(), so go there to see the
    possible options.

    If no elementIDs are given all elements in the OSG::StatCollector are display,
    using the default format.

    See \guide(Statistics) for further details.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           StatisticsForegroundBase::_mfElementIDs
    The StatElemDesc IDs to use. If not set, use all in the descriptor.
*/

/*! \var StatCollectorP  StatisticsForegroundBase::_sfCollector
    The OSG::StatCollector that keeps the displayed statistics.
*/


void StatisticsForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "elementIDs",
        "The StatElemDesc IDs to use. If not set, use all in the descriptor.\n",
        ElementIDsFieldId, ElementIDsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StatisticsForeground::editHandleElementIDs),
        static_cast<FieldGetMethodSig >(&StatisticsForeground::getHandleElementIDs));

    oType.addInitialDesc(pDesc);

    pDesc = new SFStatCollectorP::Description(
        SFStatCollectorP::getClassType(),
        "collector",
        "The OSG::StatCollector that keeps the displayed statistics.\n",
        CollectorFieldId, CollectorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&StatisticsForeground::editHandleCollector),
        static_cast<FieldGetMethodSig >(&StatisticsForeground::getHandleCollector));

    oType.addInitialDesc(pDesc);
}


StatisticsForegroundBase::TypeObject StatisticsForegroundBase::_type(
    StatisticsForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    StatisticsForeground::initMethod,
    StatisticsForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&StatisticsForegroundBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"StatisticsForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "StatisticsForeground is the base class for all foregrounds that process\n"
    "statistics.  Decendents of this class can be used to print or draw Statistics\n"
    "elements on the rendered image.\n"
    "\n"
    "The OSG::StatCollector that is used to collect the elements needs to be\n"
    "attached to the foreground in the _sfCollection field and the list of\n"
    "OSG::StatElemDesc IDs that should be displayed need to be selected with the\n"
    "_mfElementIDs field.\n"
    "\n"
    "Statistics presentation is done as a foreground so it can be drawn on top of a\n"
    "currently rendering scene.  This does not mean you could not collect statistics\n"
    "directly and present them to the user in another way such as a GUI or text output.\n"
    "\n"
    "The format of every element is given by a format string for every element that\n"
    "is directly passed to OSG::StatElem::putToString(), so go there to see the\n"
    "possible options.\n"
    "\n"
    "If no elementIDs are given all elements in the OSG::StatCollector are display,\n"
    "using the default format.\n"
    "\n"
    "See \\guide(Statistics) for further details.\n"
    "\t<Field\n"
    "\t\tname=\"elementIDs\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe StatElemDesc IDs to use. If not set, use all in the descriptor.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"collector\"\n"
    "\t\ttype=\"StatCollectorP\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The OSG::StatCollector that keeps the displayed statistics.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "StatisticsForeground is the base class for all foregrounds that process\n"
    "statistics.  Decendents of this class can be used to print or draw Statistics\n"
    "elements on the rendered image.\n"
    "\n"
    "The OSG::StatCollector that is used to collect the elements needs to be\n"
    "attached to the foreground in the _sfCollection field and the list of\n"
    "OSG::StatElemDesc IDs that should be displayed need to be selected with the\n"
    "_mfElementIDs field.\n"
    "\n"
    "Statistics presentation is done as a foreground so it can be drawn on top of a\n"
    "currently rendering scene.  This does not mean you could not collect statistics\n"
    "directly and present them to the user in another way such as a GUI or text output.\n"
    "\n"
    "The format of every element is given by a format string for every element that\n"
    "is directly passed to OSG::StatElem::putToString(), so go there to see the\n"
    "possible options.\n"
    "\n"
    "If no elementIDs are given all elements in the OSG::StatCollector are display,\n"
    "using the default format.\n"
    "\n"
    "See \\guide(Statistics) for further details.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StatisticsForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &StatisticsForegroundBase::getType(void) const
{
    return _type;
}

UInt32 StatisticsForegroundBase::getContainerSize(void) const
{
    return sizeof(StatisticsForeground);
}

/*------------------------- decorator get ------------------------------*/


MFInt32 *StatisticsForegroundBase::editMFElementIDs(void)
{
    editMField(ElementIDsFieldMask, _mfElementIDs);

    return &_mfElementIDs;
}

const MFInt32 *StatisticsForegroundBase::getMFElementIDs(void) const
{
    return &_mfElementIDs;
}


SFStatCollectorP *StatisticsForegroundBase::editSFCollector(void)
{
    editSField(CollectorFieldMask);

    return &_sfCollector;
}

const SFStatCollectorP *StatisticsForegroundBase::getSFCollector(void) const
{
    return &_sfCollector;
}






/*------------------------------ access -----------------------------------*/

UInt32 StatisticsForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ElementIDsFieldMask & whichField))
    {
        returnValue += _mfElementIDs.getBinSize();
    }
    if(FieldBits::NoField != (CollectorFieldMask & whichField))
    {
        returnValue += _sfCollector.getBinSize();
    }

    return returnValue;
}

void StatisticsForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ElementIDsFieldMask & whichField))
    {
        _mfElementIDs.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CollectorFieldMask & whichField))
    {
        _sfCollector.copyToBin(pMem);
    }
}

void StatisticsForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ElementIDsFieldMask & whichField))
    {
        _mfElementIDs.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CollectorFieldMask & whichField))
    {
        _sfCollector.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

StatisticsForegroundBase::StatisticsForegroundBase(void) :
    Inherited(),
    _mfElementIDs             (),
    _sfCollector              ()
{
}

StatisticsForegroundBase::StatisticsForegroundBase(const StatisticsForegroundBase &source) :
    Inherited(source),
    _mfElementIDs             (source._mfElementIDs             ),
    _sfCollector              (source._sfCollector              )
{
}


/*-------------------------- destructors ----------------------------------*/

StatisticsForegroundBase::~StatisticsForegroundBase(void)
{
}


GetFieldHandlePtr StatisticsForegroundBase::getHandleElementIDs      (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfElementIDs,
             this->getType().getFieldDesc(ElementIDsFieldId)));

    return returnValue;
}

EditFieldHandlePtr StatisticsForegroundBase::editHandleElementIDs     (void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfElementIDs,
             this->getType().getFieldDesc(ElementIDsFieldId)));


    editMField(ElementIDsFieldMask, _mfElementIDs);

    return returnValue;
}

GetFieldHandlePtr StatisticsForegroundBase::getHandleCollector       (void) const
{
    SFStatCollectorP::GetHandlePtr returnValue(
        new  SFStatCollectorP::GetHandle(
             &_sfCollector,
             this->getType().getFieldDesc(CollectorFieldId)));

    return returnValue;
}

EditFieldHandlePtr StatisticsForegroundBase::editHandleCollector      (void)
{
    SFStatCollectorP::EditHandlePtr returnValue(
        new  SFStatCollectorP::EditHandle(
             &_sfCollector,
             this->getType().getFieldDesc(CollectorFieldId)));


    editSField(CollectorFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void StatisticsForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StatisticsForegroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void StatisticsForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfElementIDs.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StatisticsForeground *>::_type("StatisticsForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StatisticsForeground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           StatisticsForeground *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           StatisticsForeground *,
                           0);

OSG_END_NAMESPACE
