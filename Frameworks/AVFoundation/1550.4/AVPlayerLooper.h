//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerLooperInternal, NSArray, NSError;

@interface AVPlayerLooper : NSObject
{
    AVPlayerLooperInternal *_looper;
}

+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2;
+ (id)playerLooperWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
+ (void)initialize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_cleanupAfterPlayingLastLoopingCopy;
- (BOOL)_isWaitingForLastCopyToFinishSet;
- (void)_turnOffLooping;
- (BOOL)_setupLoopingReturningError:(id *)arg1;
- (int)_calculateNumberOfCopiesNeeded;
- (void)_configureLoopingItem:(id)arg1;
@property(readonly, nonatomic) NSArray *loopingPlayerItems;
@property(readonly) long long loopCount;
- (void)disableLooping;
- (void)_changeStatusToFailedWithError:(id)arg1;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 templateItem:(id)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (id)init;

@end

