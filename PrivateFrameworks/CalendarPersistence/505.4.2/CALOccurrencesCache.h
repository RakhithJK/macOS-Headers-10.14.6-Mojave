//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CALOccurrencesCache : NSObject
{
    NSMutableDictionary *_entityIndexes;
}

- (void).cxx_destruct;
- (id)getOccurrenceForEntity:(id)arg1 forStartDate:(id)arg2;
- (id)getOccurrenceForEntity:(id)arg1 occurrenceID:(id)arg2;
- (id)getOccurrencesForEntity:(id)arg1 forStartDates:(id)arg2;
- (void)flushCacheForEntity:(id)arg1;
- (void)addCachedOccurrence:(id)arg1 forEntity:(id)arg2;
- (void)removeCachedOccurrence:(id)arg1 forEntity:(id)arg2;
- (id)cachedOccurrenceForEntity:(id)arg1 startDate:(id)arg2;
- (id)occurrenceCacheForEntity:(id)arg1;
- (id)createOccurrenceForEntity:(id)arg1 startDate:(id)arg2;
- (void)flush;
- (id)init;

@end

