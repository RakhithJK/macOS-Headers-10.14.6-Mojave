//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ServerFoundation/NSObject-Protocol.h>

@class NSDate, XSLogMessageSet;

@protocol XSLogParser <NSObject>
@property XSLogMessageSet *messageSet;
- (XSLogMessageSet *)messageSetForMessagesBetween:(NSDate *)arg1 and:(NSDate *)arg2 limit:(unsigned long long)arg3;
@end

