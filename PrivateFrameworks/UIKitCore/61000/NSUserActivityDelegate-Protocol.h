//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSInputStream, NSOutputStream, NSUserActivity;

@protocol NSUserActivityDelegate <NSObject>

@optional
- (void)userActivity:(NSUserActivity *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)userActivityWasContinued:(NSUserActivity *)arg1;
- (void)userActivityWillSave:(NSUserActivity *)arg1;
@end

