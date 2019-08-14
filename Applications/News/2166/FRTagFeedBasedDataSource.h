//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRFeedBasedDataSource.h"

#import "FCStreamingResultsObserving-Protocol.h"
#import "FCSubscriptionObserving-Protocol.h"

@class NSString;

@interface FRTagFeedBasedDataSource : FRFeedBasedDataSource <FCSubscriptionObserving, FCStreamingResultsObserving>
{
}

- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;
- (void)resultsDidFinish:(id)arg1;
- (void)results:(id)arg1 didFetchObjectsInRange:(struct _NSRange)arg2;
- (id)feedsInSection:(long long)arg1;
- (id)feedAtIndexPath:(id)arg1;
- (long long)_numberOfSections;
- (void)setTagResults:(id)arg1;
- (id)_filteredTagsForTags:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1 subscribeLocation:(long long)arg2 tags:(id)arg3 delegate:(id)arg4;
- (id)initWithFeldsparContext:(id)arg1 subscribeLocation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

