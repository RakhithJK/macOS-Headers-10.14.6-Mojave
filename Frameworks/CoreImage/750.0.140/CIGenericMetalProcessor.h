//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIGenericMetalProcessor : CIImageProcessorKernel
{
}

+ (id)applyWithExtent:(struct CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
+ (_Bool)synchronizeInputs;
+ (_Bool)outputIsOpaque;
+ (int)formatForInputAtIndex:(int)arg1;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 className:(id)arg4 arguments:(id)arg5 error:(id *)arg6;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 arguments:(id)arg4 error:(id *)arg5;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 scaleFactors:(id)arg4 arguments:(id)arg5 error:(id *)arg6;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 insetRects:(id)arg4 arguments:(id)arg5 error:(id *)arg6;
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 roiMethods:(id)arg4 insetRects:(id)arg5 scaleFactors:(id)arg6 arguments:(id)arg7 error:(id *)arg8;
+ (BOOL)skipFormatChecks;

@end

