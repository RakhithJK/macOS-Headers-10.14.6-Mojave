//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSError, TSKAVPlayerController;

@protocol TSKAVPlayerControllerDelegate <NSObject>
- (void)playbackDidStopForPlayerController:(TSKAVPlayerController *)arg1;
- (void)playerController:(TSKAVPlayerController *)arg1 playbackDidFailWithError:(NSError *)arg2;
@end

