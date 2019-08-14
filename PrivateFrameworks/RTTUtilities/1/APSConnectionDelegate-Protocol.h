//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <RTTUtilities/NSObject-Protocol.h>

@class APSConnection, APSIncomingMessage, APSOutgoingMessage, NSData, NSDictionary, NSError, NSString;

@protocol APSConnectionDelegate <NSObject>
- (void)connection:(APSConnection *)arg1 didReceivePublicToken:(NSData *)arg2;

@optional
- (void)connectionDidReconnect:(APSConnection *)arg1;
- (void)connection:(APSConnection *)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(APSConnection *)arg1 didFailToSendOutgoingMessage:(APSOutgoingMessage *)arg2 error:(NSError *)arg3;
- (void)connection:(APSConnection *)arg1 didSendOutgoingMessage:(APSOutgoingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;
@end

