//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class IDSConnection, IDSDeviceIdentity, IDSMessageContext, IDSProtobuf, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol IDSConnectionDelegate <NSObject>

@optional
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3;
- (void)connection:(IDSConnection *)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 fromID:(NSString *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(BOOL)arg3 error:(NSError *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 devicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 isActiveChanged:(BOOL)arg2;
- (void)connection:(IDSConnection *)arg1 incomingProtobuf:(IDSProtobuf *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryReportMessage:(NSString *)arg2 accessoryID:(NSString *)arg3 controllerID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 didUpdateDeviceIdentity:(IDSDeviceIdentity *)arg2 error:(NSError *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingGroupData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingEngramMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
@end

