//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSData, NSString;

@protocol SFContinuityScannerProtocol <SDXPCDaemonProtocol>
- (void)activityPayloadFromDeviceUniqueID:(NSString *)arg1 forAdvertisementPayload:(NSData *)arg2 command:(NSString *)arg3 timeout:(long long)arg4 withCompletionHandler:(void (^)(NSData *, NSError *))arg5;
- (void)scanForTypes:(unsigned long long)arg1;
@end

