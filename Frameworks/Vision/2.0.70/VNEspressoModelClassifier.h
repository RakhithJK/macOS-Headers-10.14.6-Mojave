//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNDetector.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VNEspressoModelClassifier : VNDetector
{
    shared_ptr_b26ea6de mDescriptorProcessor;
    shared_ptr_047f28ed mClassifier;
    NSSet *_blacklistedIdentifiers;
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;
+ (void)convertRelationships:(id)arg1 toStdRelationships:(vector_153622dc *)arg2;
+ (shared_ptr_eb20c8f2)createHierarchicalModelForRequestRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2;
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)blacklistedIdentifiers;
- (id)getLabels;
- (BOOL)_calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 descriptorBuffer:(shared_ptr_0a6daad2 *)arg5 debugIntermediatesDumpPath:(id)arg6 outputDebugDictionary:(id)arg7 error:(id *)arg8;
- (id)calculateImageDescriptorsWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

@end

