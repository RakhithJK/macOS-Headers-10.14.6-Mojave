//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest;

__attribute__((visibility("hidden")))
@interface CNCDContactFetchRequestBuilder : NSObject
{
    CNContactFetchRequest *_fetchRequest;
}

+ (long long)defaultSortOrder;
- (void).cxx_destruct;
- (BOOL)unifyResults;
- (CDUnknownBlockType)contactsByNameComparator;
- (id)effectiveKeysToFetch;
- (id)effectivePredicate:(id)arg1;
- (id)validatePredicate:(id)arg1 error:(id *)arg2;
- (id)validatePredicateWithError:(id *)arg1;
- (id)sortDescriptors;
- (id)buildFetchRequestDescription;
- (id)relationshipKeyPathsForKeysToFetch:(id)arg1;
- (id)relationshipKeyPaths;
- (id)initWithFetchRequest:(id)arg1;

@end

