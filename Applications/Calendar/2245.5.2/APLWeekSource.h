//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLCALSource.h"

@class NSDate;

@interface APLWeekSource : APLCALSource
{
    NSDate *week;
}

- (void).cxx_destruct;
- (id)lastDayOfWeek;
- (id)firstDayOfWeek;
- (id)objectForKey:(id)arg1;
- (void)reset;
- (void)nextGroup;
- (id)availableDataSourceTypes;
- (id)entitiesOfType:(id)arg1;
- (id)initWithPrintController:(id)arg1;

@end

