/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                Copyright (C) 2011 by the OpenSG Forum                     *
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

#ifndef _OSGOPENFLIGHTLOG_H_
#define _OSGOPENFLIGHTLOG_H_
#ifdef __sgi
#pragma once
#endif

/*! \file OSGOpenFlightLog.h
    \ingroup GrpLoader
 */

#include "OSGConfig.h"
#include "OSGFileIODef.h"
#include "OSGLog.h"

OSG_BEGIN_NAMESPACE

#define OSG_OPENFLIGHT_SILENT 1

#ifndef OSG_OPENFLIGHT_SILENT
#define OSG_OPENFLIGHT_LOG(OSG_MESSAGE)         \
    FLOG(OSG_MESSAGE)

#define OSG_OPENFLIGHT_PLOG(OSG_MESSAGE)        \
    FPLOG(OSG_MESSAGE)

#else
#define OSG_OPENFLIGHT_LOG(OSG_MESSAGE)
#define OSG_OPENFLIGHT_PLOG(OSG_MESSAGE)

#endif // OSG_OPENFLIGHT_SILENT

OSG_END_NAMESPACE

#endif // _OSGOPENFLIGHTLOG_H_
