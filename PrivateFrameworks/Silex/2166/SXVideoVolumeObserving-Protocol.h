//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXVideoVolumeObserving <NSObject>
@property(copy, nonatomic, setter=onMuteStateChange:) CDUnknownBlockType muteStateChangeBlock;
@property(copy, nonatomic, setter=onVolumeChange:) CDUnknownBlockType volumeChangeBlock;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic) BOOL muted;
@end
