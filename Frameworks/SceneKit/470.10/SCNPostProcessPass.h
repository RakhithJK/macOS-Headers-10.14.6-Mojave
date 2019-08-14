//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNMTLComputePipeline, SCNMTLRenderPipeline;
@protocol MTLBuffer, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNPostProcessPass : NSObject
{
    unsigned long long _frameBufferFormat;
    unsigned long long _frameBufferWidth;
    unsigned long long _frameBufferHeight;
    unsigned long long _postProcessConstants;
    float _scaleFactor;
    id <MTLTexture> _dofColorCoCTexture;
    id <MTLTexture> _dofCoCTextureA;
    id <MTLTexture> _dofCoCTextureB;
    id <MTLTexture> _dofBlurTexture;
    int _dofSampleCount;
    SCNMTLComputePipeline *_dofPipelineState[5];
    id <MTLBuffer> _dofKernel;
    id <MTLTexture> _mbTileMax;
    id <MTLTexture> _mbNeighborMax;
    id <MTLTexture> _mbTexture;
    id <MTLTexture> _mbColor;
    SCNMTLRenderPipeline *_mbBlurPipelineState;
    SCNMTLComputePipeline *_mbVelocityPipelineState[3];
    id <MTLTexture> _bloomTextureA;
    id <MTLTexture> _bloomTextureB;
    SCNMTLRenderPipeline *_bloomBlurPipelineState[15];
    SCNMTLComputePipeline *_downSampleBloomDOFPipelineState[6];
    SCNMTLRenderPipeline *_postProcessPipelineState;
    id <MTLTexture> _frameLumTexture;
    id <MTLTexture> _averageLumTexture;
    id <MTLBuffer> _autoExposureParametersBuffer;
    SCNMTLRenderPipeline *_frameLuminancePipelineState;
    SCNMTLComputePipeline *_frameLuminanceCS;
    SCNMTLComputePipeline *_slidingLuminancePipelineState;
    SCNMTLComputePipeline *_adaptativeLuminancePipelineState;
    SCNMTLComputePipeline *_fixedLuminancePipelineState;
    unsigned int _frameIndex;
    // Error parsing type: , name: _VRscaleBias
    // Error parsing type: , name: _viewport
}

- (void)executeWithContext:(CDStruct_b9d91b93 *)arg1;
-     // Error parsing type: v64@0:8^{?=fffffffffffiffffffffiififf}16^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]}){?=[4]}dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})ffffffffffffifffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}24^{__C3DCullingContext=^{__C3DEnginePipeline}[6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})]ICCCB^{__C3DFXPass}^v^{__C3DNode}^{__C3DNode}BBBBBBBQQ^v^{__C3DScene}^{__C3DEngineContext}dd(?={?=ffff})(C3DMatrix4x4=[16f][4]{?=[4]})(C3DMatrix4x4=[16f][4]{?=[4]})[6{?=^{?}II}]B^?}32^{__C3DFXPassInstance=^{__C3DFXPass}q^{__C3DFXPassInstance}CBC[6^{__C3DArray}]{__C3DCullingContext=^{__C3DEnginePipeline}[6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6{?=[6(?={?=ffff})]}][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})][6(C3DMatrix4x4=[16f][4]{?=[4]})]ICCCB^{__C3DFXPass}^v^{__C3DNode}^{__C3DNode}BBBBBBBQQ^v^{__C3DScene}^{__C3DEngineContext}dd(?={?=ffff})(C3DMatrix4x4=[16f][4]{?=[4]})(C3DMatrix4x4=[16f][4]{?=[4]})[6{?=^{?}II}]B^?}^{__C3DNode}}40^{__C3DFXContext={__CFRuntimeBase=QAQ}^{__C3DFXTechnique}^{__C3DFXTechnique}{?=^{__C3DFXTechnique}^{__C3DFXTechnique}^{__C3DFXTechnique}^{__C3DFXTechnique}^{__C3DFXTechnique}^{__C3DFXTechnique}^^{__C3DFXTechnique}^{__C3DFXTechnique}q}CICb1b1b1b1b1b1^{__C3DRenderTarget}^{__C3DRenderTarget}{?=^{__C3DFramebuffer}^{__C3DFramebuffer}^{__C3DFXPass}BB}qq^{__C3DNode}^^{__C3DFXPassInstance}^{__C3DAllocator}qqq^{__C3DFramebufferRegistry}^{__C3DFXPass}^{__C3DFXPassInstance}^vI^{__CFArray}I^{__CFArray}I}48^{__C3DEngineContext=}56, name: _computeDofUniforms:camera:cullingContext:passInstance:fxContext:engineContext:
-     // Error parsing type: I40@0:8^{?=[16]}1624f32B36, name: _computeBloomBlurUniforms:textureSize:radius:horizontal:
- (void)setupWithContext:(CDStruct_b9d91b93 *)arg1;
- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 postProcessConstants:(unsigned long long)arg3;
- (void)dealloc;

@end
