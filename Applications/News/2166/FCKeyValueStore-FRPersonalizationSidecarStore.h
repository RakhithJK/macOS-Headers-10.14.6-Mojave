//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCKeyValueStore.h>

#import "FRPersonalizationSidecarStore-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface FCKeyValueStore (FRPersonalizationSidecarStore) <FRPersonalizationSidecarStore>
- (double)hourlyFlowRateWithTreatment:(id)arg1 subscriptionCount:(unsigned long long)arg2 hourlyFlowRateHighWaterMarks:(id)arg3;
- (void)articlePresented:(id)arg1 treatment:(id)arg2 subscriptionCount:(unsigned long long)arg3 hourlyFlowRateHighWaterMarks:(id)arg4;
- (void)_setTodaysPresentedArticles:(id)arg1;
- (id)_todaysPresentedArticles;
- (void)_maybeUpdateToday:(id)arg1 subscriptionCount:(unsigned long long)arg2 hourlyFlowRateHighWaterMarks:(id)arg3;
- (void)_resetEndOfDayWithNow:(double)arg1;
- (void)_retireToday:(id)arg1 subscriptionCount:(unsigned long long)arg2 hourlyFlowRateHighWaterMarks:(id)arg3;
@property(readonly, nonatomic) NSArray *tagsOrderedByVisitation;
@property(retain, nonatomic) NSDictionary *visitations;
- (void)recordVisitationToTags:(id)arg1;
- (void)recordVisitationToTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

