//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MobileTimer/NSCopying-Protocol.h>
#import <MobileTimer/NSObject-Protocol.h>
#import <MobileTimer/NSSecureCoding-Protocol.h>

@protocol MTTimerTime;

@protocol MTTimerTime <NSObject, NSCopying, NSSecureCoding>
@property(readonly, nonatomic) double remainingTime;
- (long long)compare:(id <MTTimerTime>)arg1;
- (BOOL)isEqualToTime:(id <MTTimerTime>)arg1;
@end

