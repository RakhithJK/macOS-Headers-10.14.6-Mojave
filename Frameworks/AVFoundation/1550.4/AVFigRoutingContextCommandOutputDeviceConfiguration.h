//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVOutputDeviceConfigurationRetrieval-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface AVFigRoutingContextCommandOutputDeviceConfiguration : NSObject <AVOutputDeviceConfigurationRetrieval>
{
    struct __CFDictionary *_response;
}

+ (void)initialize;
@property(readonly, nonatomic) NSArray *peersInHomeGroup;
@property(readonly, nonatomic) BOOL onlyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) BOOL automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) NSData *devicePublicKey;
@property(readonly, nonatomic) NSString *deviceID;
@property(readonly, nonatomic) NSString *devicePassword;
@property(readonly, nonatomic) NSString *deviceName;
- (void)dealloc;
- (id)initWithRoutingContextComandResponse:(struct __CFDictionary *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
