//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol SFCompanionServiceManagerClient, SFRemoteHotspotClient;

@protocol SFCompanionXPCManagerProtocol <NSObject>
- (void)createHotspotSessionForClientProxy:(id <SFRemoteHotspotClient>)arg1 reply:(void (^)(id <SFRemoteHotspotProtocol>, NSError *))arg2;
- (void)appleAccountSignedOut;
- (void)appleAccountSignedIn;
- (void)createUnlockManagerWithReply:(void (^)(id <SFUnlockProtocol>, NSError *))arg1;
- (void)createStreamsForMessage:(NSDictionary *)arg1 reply:(void (^)(NSFileHandle *, NSError *))arg2;
- (void)createCompanionServiceManagerWithIdentifier:(NSString *)arg1 clientProxy:(id <SFCompanionServiceManagerClient>)arg2 reply:(void (^)(id <SFCompanionServiceManagerProtocol>, NSString *, NSString *, NSString *, NSError *))arg3;
@end

