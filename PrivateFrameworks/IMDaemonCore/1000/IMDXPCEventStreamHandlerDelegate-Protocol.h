//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class IMDXPCEventStreamHandler, NSDictionary, NSString;

@protocol IMDXPCEventStreamHandlerDelegate <NSObject>
- (void)eventStreamHandler:(IMDXPCEventStreamHandler *)arg1 didReceiveEventWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

