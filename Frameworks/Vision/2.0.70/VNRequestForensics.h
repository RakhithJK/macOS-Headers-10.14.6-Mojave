//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray;

@interface VNRequestForensics : NSObject
{
    NSArray *_originalRequests;
    NSArray *_orderedRequests;
    NSMutableArray *_implicitRequests;
    NSMutableArray *_performedRequests;
    NSMutableArray *_cachedRequestResults;
    NSMutableArray *_checkedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_locatedCachedResultsOnBehalfOfRequest;
    NSMutableArray *_ledger;
    NSMapTable *_requestToHumanReadableLabelMap;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)resultsObtainedFromObservationsCacheForRequest:(id)arg1;
- (id)requestThatProvidedObservationsForRequest:(id)arg1;
- (id)requestsImplicitlyPerformedOnBehalfOfRequest:(id)arg1;
- (id)_childRequestsImplicitlyPerformedOnBehalfOfParentRequest:(id)arg1;
- (id)requestsThatLookedUpCachedResultsKey:(id)arg1;
- (id)keyUsedToCacheResultsOfRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *performedRequests;
@property(copy, nonatomic) NSArray *orderedRequests;
@property(readonly, copy, nonatomic) NSArray *originalRequests;
- (void)cachedObservationsWithKey:(id)arg1 wereLocatedOnBehalfOfRequest:(id)arg2;
- (void)cachedObservationsWithKey:(id)arg1 wereCheckedOnBehalfOfRequest:(id)arg2;
- (void)request:(id)arg1 cachedResultsWithObservationsCacheKey:(id)arg2;
- (void)performedRequest:(id)arg1 withError:(id)arg2;
- (void)performingRequest:(id)arg1;
- (void)performingOrderedDependentRequests:(id)arg1 onBehalfOfRequest:(id)arg2;
- (id)initWithOriginalRequests:(id)arg1;
- (id)_humanReadableLabelForRequest:(id)arg1;

@end

