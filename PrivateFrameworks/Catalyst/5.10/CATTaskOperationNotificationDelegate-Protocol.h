//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATTaskOperation, NSDictionary, NSString;

@protocol CATTaskOperationNotificationDelegate <NSObject>

@optional
- (void)taskOperation:(CATTaskOperation *)arg1 didPostNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
@end

