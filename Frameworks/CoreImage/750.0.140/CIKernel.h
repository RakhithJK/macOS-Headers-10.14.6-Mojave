//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CIKernel : NSObject
{
    void *_priv;
}

+ (id)colorMatrixBiasKernel;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 outputGroupSize:(struct CGSize)arg4 error:(id *)arg5;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(struct CGSize)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id *)arg4;
+ (id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id *)arg3;
+ (id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1;
+ (id)kernelsWithString:(id)arg1 messageLog:(id)arg2;
+ (id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2;
+ (id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3;
+ (id)modifiedKernelStringForFosl:(id)arg1;
+ (id)betterString:(id)arg1;
+ (id)hashForString:(id)arg1;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;
+ (id)SDOFV2MetalKernelNamed:(id)arg1;
- (id)parameters;
- (SEL)ROISelector;
- (void)setROISelector:(SEL)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
-     // Error parsing type: i32@0:8@16^{Kernel=^^?{atomic<unsigned int>=AI}**B^{SerialIntArray}^{SerialStringArray}^{__CFString}ii{ISize=QQ}BBBBBB}24, name: _outputFormatUsingDictionary:andKernel:
- (BOOL)_isValidOutputPixelFormat:(int)arg1;
@property(readonly) NSString *name;
@property(nonatomic) struct CGSize outputGroupSize;
@property(nonatomic) _Bool canReduceOutputChannels;
@property(nonatomic) _Bool preservesRange;
@property(nonatomic) _Bool perservesAlpha;
- (id)_initWithReflection:(struct CIKernelReflection)arg1;
- (id)initWithString:(id)arg1;
- (id)_initWithString:(id)arg1 usingCruftCompatibility:(_Bool)arg2;
- (id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(_Bool)arg3;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)init;

@end

