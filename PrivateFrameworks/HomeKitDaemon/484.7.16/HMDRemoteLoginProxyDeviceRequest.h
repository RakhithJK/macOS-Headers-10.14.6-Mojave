//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMDRemoteLoginProxyDeviceRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (BOOL)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
- (id)xpcMessageName;
- (id)messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

