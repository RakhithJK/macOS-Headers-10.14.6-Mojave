//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/VNDetectorKeyProviding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSDictionary, NSString, VNMetalContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNDetector : NSObject <VNDetectorKeyProviding, VNRequestRevisionProviding>
{
    NSDictionary *_configurationOptions;
    NSObject<OS_dispatch_queue> *_processingQueue;
    unsigned long long _requestRevision;
    VNMetalContext *_metalContext;
    unsigned long long _backingStore;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2;
+ (id)keyForDetectorWithConfigurationOptions:(id)arg1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)detectorWithConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (void)fullyPopulateConfigurationOptions:(id)arg1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
+ (id)detectorName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(readonly, nonatomic) unsigned long long backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) VNMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(readonly, nonatomic) unsigned long long requestRevision; // @synthesize requestRevision=_requestRevision;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, copy, nonatomic) NSDictionary *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
- (void).cxx_destruct;
- (id)validatedProcessingDeviceInOptions:(id)arg1 error:(id *)arg2;
- (BOOL)supportsProcessingDevice:(id)arg1;
- (id)requiredCancellerInOptions:(id)arg1 error:(id *)arg2;
- (BOOL)getOptionalCanceller:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;
- (id)newMetalContextForConfigurationOptions:(id)arg1 error:(id *)arg2;
- (BOOL)needsMetalContext;
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id *)arg2;
- (BOOL)validateImageBuffer:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)currentQueueIsSynchronizationQueue;
- (id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5;
- (BOOL)useGPU;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;
- (id)initWithConfigurationOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

