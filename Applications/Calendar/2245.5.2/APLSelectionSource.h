//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "APLListSource.h"

@class NSArray, NSMutableArray;

@interface APLSelectionSource : APLListSource
{
    NSArray *_sortedDates;
    NSMutableArray *_alldayEvents;
    NSMutableArray *_events;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (id)entitiesOfType:(id)arg1;
- (void)reset;
- (BOOL)hasSomethingToLayout;
- (id)initWithPrintController:(id)arg1;

@end

