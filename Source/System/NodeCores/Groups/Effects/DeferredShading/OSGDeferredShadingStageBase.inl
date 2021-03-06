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
 **     class DeferredShadingStage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &DeferredShadingStageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DeferredShadingStageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DeferredShadingStageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the DeferredShadingStage::_sfGBufferProgram field.
inline
ShaderProgramChunk * DeferredShadingStageBase::getGBufferProgram(void) const
{
    return _sfGBufferProgram.getValue();
}

//! Set the value of the DeferredShadingStage::_sfGBufferProgram field.
inline
void DeferredShadingStageBase::setGBufferProgram(ShaderProgramChunk * const value)
{
    editSField(GBufferProgramFieldMask);

    _sfGBufferProgram.setValue(value);
}

//! Get the value of the DeferredShadingStage::_sfAmbientProgram field.
inline
ShaderProgramChunk * DeferredShadingStageBase::getAmbientProgram(void) const
{
    return _sfAmbientProgram.getValue();
}

//! Set the value of the DeferredShadingStage::_sfAmbientProgram field.
inline
void DeferredShadingStageBase::setAmbientProgram(ShaderProgramChunk * const value)
{
    editSField(AmbientProgramFieldMask);

    _sfAmbientProgram.setValue(value);
}

//! Get the value of the \a index element the DeferredShadingStage::_mfPixelFormats field.
inline
const GLenum &DeferredShadingStageBase::getPixelFormats(const UInt32 index) const
{
    return _mfPixelFormats[index];
}

inline
GLenum &DeferredShadingStageBase::editPixelFormats(const UInt32 index)
{
    editMField(PixelFormatsFieldMask, _mfPixelFormats);

    return _mfPixelFormats[index];
}


//! Get the value of the \a index element the DeferredShadingStage::_mfPixelTypes field.
inline
const GLenum &DeferredShadingStageBase::getPixelTypes(const UInt32 index) const
{
    return _mfPixelTypes[index];
}

inline
GLenum &DeferredShadingStageBase::editPixelTypes(const UInt32 index)
{
    editMField(PixelTypesFieldMask, _mfPixelTypes);

    return _mfPixelTypes[index];
}


//! Get the value of the \a index element the DeferredShadingStage::_mfLightPrograms field.
inline
ShaderProgramChunk * DeferredShadingStageBase::getLightPrograms(const UInt32 index) const
{
    return _mfLightPrograms[index];
}

//! Get the value of the \a index element the DeferredShadingStage::_mfLights field.
inline
Light * DeferredShadingStageBase::getLights(const UInt32 index) const
{
    return _mfLights[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DeferredShadingStageBase::execSync (      DeferredShadingStageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PixelFormatsFieldMask & whichField))
        _mfPixelFormats.syncWith(pFrom->_mfPixelFormats,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (PixelTypesFieldMask & whichField))
        _mfPixelTypes.syncWith(pFrom->_mfPixelTypes,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GBufferProgramFieldMask & whichField))
        _sfGBufferProgram.syncWith(pFrom->_sfGBufferProgram);

    if(FieldBits::NoField != (AmbientProgramFieldMask & whichField))
        _sfAmbientProgram.syncWith(pFrom->_sfAmbientProgram);

    if(FieldBits::NoField != (LightProgramsFieldMask & whichField))
        _mfLightPrograms.syncWith(pFrom->_mfLightPrograms,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (LightsFieldMask & whichField))
        _mfLights.syncWith(pFrom->_mfLights,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *DeferredShadingStageBase::getClassname(void)
{
    return "DeferredShadingStage";
}
OSG_GEN_CONTAINERPTR(DeferredShadingStage);

OSG_END_NAMESPACE

