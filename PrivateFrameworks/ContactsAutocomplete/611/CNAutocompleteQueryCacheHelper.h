//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteQueryCacheMissAuditor, CNCache, CNObservable, NSString;
@protocol CNSchedulerProvider;

@interface CNAutocompleteQueryCacheHelper : NSObject
{
    CNCache *_cache;
    NSString *_searchString;
    CNObservable *_serverSearchObservable;
    CNAutocompleteQueryCacheMissAuditor *_cacheMissAuditor;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (BOOL)shouldCacheResults:(id)arg1;
+ (id)stringByRemovingLastCharacterFromString:(id)arg1;
+ (id)cache_os_log;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) CNAutocompleteQueryCacheMissAuditor *cacheMissAuditor; // @synthesize cacheMissAuditor=_cacheMissAuditor;
@property(readonly, nonatomic) CNObservable *serverSearchObservable; // @synthesize serverSearchObservable=_serverSearchObservable;
@property(readonly, copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)observablesForSearchString:(id)arg1 withCachedResults:(id)arg2;
- (id)remoteResultsForSearchString:(id)arg1 andCompletePromise:(id)arg2;
- (id)remoteResultsForSearchString:(id)arg1;
- (id)uncachedResultsObservable;
- (id)cachedFutureForSearchString:(id)arg1;
- (id)cachedResultsObservable;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3 cacheMissAuditor:(id)arg4 schedulerProvider:(id)arg5;
- (id)initWithCache:(id)arg1 searchString:(id)arg2 serverSearchObservable:(id)arg3;

@end

