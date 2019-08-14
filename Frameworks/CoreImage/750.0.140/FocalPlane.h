//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface FocalPlane : NSObject
{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLComputePipelineState> _disparityRefinementPreprocessingKernel;
    id <MTLComputePipelineState> _minMax0_kernel;
    id <MTLComputePipelineState> _minMax1_kernel;
    id <MTLComputePipelineState> _minMax2_kernel;
    id <MTLComputePipelineState> _calc_kernel;
    id <MTLBuffer> _minMaxAtomic_buf;
    id <MTLBuffer> _minMaxResult_buf;
    id <MTLBuffer> _zeroShiftResult_buf;
    CDStruct_6cae9ebd _config;
}

@property(readonly) id <MTLBuffer> zeroShiftResult_buf; // @synthesize zeroShiftResult_buf=_zeroShiftResult_buf;
@property(readonly) id <MTLBuffer> minMaxResult_buf; // @synthesize minMaxResult_buf=_minMaxResult_buf;
@property(readonly) id <MTLBuffer> minMaxAtomic_buf; // @synthesize minMaxAtomic_buf=_minMaxAtomic_buf;
@property CDStruct_6cae9ebd config; // @synthesize config=_config;
- (void).cxx_destruct;
- (int)encodeFocalPlaneCalcOn:(id)arg1 disparityTexture:(id)arg2;
- (int)encodeMinMaxOn:(id)arg1 inputTexture:(id)arg2;
- (int)encodeDisparityRefinementPreprocessingOn:(id)arg1 alphaTexture:(id)arg2 inputDisparityTexture:(id)arg3 outputDisparityTexture:(id)arg4 configuration:(CDStruct_ee2a85d1)arg5;
- (void)releaseResources;
- (int)_compileShadersWithLibrary:(id)arg1;
- (void)dealloc;
- (int)allocateResources;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

