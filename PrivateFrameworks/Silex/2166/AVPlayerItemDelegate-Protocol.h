//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class AVPlayerItem;

@protocol AVPlayerItemDelegate <NSObject>

@optional
- (BOOL)playerItem:(AVPlayerItem *)arg1 shouldSeekToTime:(CDStruct_1b6d18a9 *)arg2 toleranceBefore:(CDStruct_1b6d18a9 *)arg3 toleranceAfter:(CDStruct_1b6d18a9 *)arg4;
@end
