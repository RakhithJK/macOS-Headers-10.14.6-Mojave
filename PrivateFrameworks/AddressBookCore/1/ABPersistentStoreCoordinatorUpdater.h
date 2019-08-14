//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABPersistentStoreCoordinatorMap;

@interface ABPersistentStoreCoordinatorUpdater : NSObject
{
    ABPersistentStoreCoordinatorMap *_coordinatorMap;
    BOOL _readOnly;
    BOOL _isPristine;
}

@property BOOL isPristine; // @synthesize isPristine=_isPristine;
- (id)scopeAccountUrls:(id)arg1 forCacheKey:(id)arg2;
- (void)updatePersistentStoresWithBuilder:(id)arg1 addedUrls:(id)arg2 removedUrls:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)updatePersistentStoresWithBuilder:(id)arg1 oldUrls:(id)arg2 newUrls:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (id)makeStoreBuilderWithCoordinator:(id)arg1;
- (id)storeUrlsForCoordinator:(id)arg1;
- (id)updatePersistentStoresInCacheWithKey:(id)arg1 newAccounts:(id)arg2;
- (void)checkIfMainDatabaseInResultsIsPristine:(id)arg1 forCacheKey:(id)arg2;
- (void)updatePersistentStoresForAccounts:(id)arg1;
- (void)dealloc;
- (id)initWithCoordinatorMap:(id)arg1 readOnly:(BOOL)arg2;

@end

