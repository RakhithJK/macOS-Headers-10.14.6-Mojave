//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class NSError;

@protocol SVVideoPlaybackEventTracking <NSObject>
@property(readonly, copy, nonatomic) NSError *error;
@property(copy, nonatomic, setter=onPlaybackFailed:) CDUnknownBlockType playbackFailedBlock;
@property(copy, nonatomic, setter=onPlaybackFinished:) CDUnknownBlockType playbackFinishedBlock;
@property(copy, nonatomic, setter=onPlaybackResumed:) CDUnknownBlockType playbackResumedBlock;
@property(copy, nonatomic, setter=onPlaybackPaused:) CDUnknownBlockType playbackPausedBlock;
@property(copy, nonatomic, setter=onPlaybackStart:) CDUnknownBlockType playbackStartBlock;
@end

