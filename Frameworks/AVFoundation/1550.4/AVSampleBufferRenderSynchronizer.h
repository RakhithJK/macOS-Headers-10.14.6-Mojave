//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSampleBufferRenderSynchronizerInternal, NSArray;

@interface AVSampleBufferRenderSynchronizer : NSObject
{
    AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}

+ (void)setFigRenderSynchronizerFactory:(id)arg1 forQueue:(id)arg2;
+ (id)currentFigRenderSynchronizerFactory;
- (void)_updateRateFromTimebase;
- (void)setRate:(float)arg1 time:(CDStruct_1b6d18a9)arg2;
@property(nonatomic) float rate;
- (CDStruct_1b6d18a9)currentTime;
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (void)dealloc;
- (int)_initializeTimebase;
- (id)init;
- (void)_performRendererRemoval:(id)arg1;
- (void)removeRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_scheduleTimedRendererRemovalAtTime:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 withClientCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_storeObserver:(id)arg1 clientCompletionHandler:(CDUnknownBlockType)arg2 forRenderer:(id)arg3;
- (void)_removeTimebaseObserverForRenderer:(id)arg1;
- (CDUnknownBlockType)_getClientCompletionHandlerForRenderer:(id)arg1;
- (id)_getTimebaseObserverForRenderer:(id)arg1;
- (void)addRenderer:(id)arg1;
- (BOOL)_addRenderer:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *renderers;
- (long long)_addedAudioRendererCountInternal;
- (long long)_addedAudioRendererCount;
- (BOOL)_multipleAudioRenderersDisallowed;
- (BOOL)_rendererConfigurationIsValid:(id *)arg1;
- (BOOL)_canAddRendererInternal:(id)arg1 error:(id *)arg2;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

