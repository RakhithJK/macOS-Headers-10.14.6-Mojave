//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAudioStreamInterface, NSError;

@protocol HMDAudioStreamInterfaceDelegate <NSObject>
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didStop:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didResume:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didPause:(NSError *)arg2;
- (void)audioStream:(HMDAudioStreamInterface *)arg1 didStart:(NSError *)arg2;
@end

