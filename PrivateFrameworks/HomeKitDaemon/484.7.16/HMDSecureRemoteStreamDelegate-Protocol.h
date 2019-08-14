//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMFMessageTransportDelegate-Protocol.h>

@class HMDSecureRemoteStream, HMFMessage, NSError;

@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)secureRemoteStreamIsIdle:(HMDSecureRemoteStream *)arg1;
@end

