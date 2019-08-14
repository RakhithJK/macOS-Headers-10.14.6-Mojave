//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarStore/NSCopying-Protocol.h>

@interface CalNthWeekDay : NSObject <NSCopying>
{
    unsigned long long _dayOfTheWeek;
    long long _weekNumber;
}

+ (id)nthWeekDayWithDayOfTheWeek:(unsigned long long)arg1 weekNumber:(long long)arg2;
@property(readonly) long long weekNumber; // @synthesize weekNumber=_weekNumber;
@property(readonly) unsigned long long dayOfTheWeek; // @synthesize dayOfTheWeek=_dayOfTheWeek;
- (id)initWithDayOfTheWeek:(unsigned long long)arg1 weekNumber:(long long)arg2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

