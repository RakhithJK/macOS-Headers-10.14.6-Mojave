//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPHTTPClient, NSData;

@protocol HAPHTTPClientDebugDelegate <NSObject>
- (void)httpClient:(HAPHTTPClient *)arg1 willSendHTTPMessageWithHeaders:(NSData *)arg2 body:(NSData *)arg3;
- (void)httpClient:(HAPHTTPClient *)arg1 didReceiveHTTPMessageWithHeaders:(NSData *)arg2 body:(NSData *)arg3;
@end

