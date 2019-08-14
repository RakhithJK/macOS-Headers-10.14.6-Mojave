//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCTime : NSObject
{
    int _hour;
    int _minute;
    int _second;
}

+ (id)midnight;
+ (id)timeWithString:(id)arg1;
- (id)description;
- (id)justAfter;
- (id)justBefore;
- (int)seconds;
- (id)dateValueForDate:(id)arg1;
- (id)dateValue;
- (id)stringValue;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3;

@end

