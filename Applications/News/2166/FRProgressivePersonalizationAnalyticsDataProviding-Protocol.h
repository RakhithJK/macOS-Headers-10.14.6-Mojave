//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;
@protocol FRProgressivePersonalizationContext;

@protocol FRProgressivePersonalizationAnalyticsDataProviding
@property(readonly, nonatomic) id <FRProgressivePersonalizationContext> progressivePersonalizationContext;
- (unsigned long long)feedAutoSubscribeTypeForTagID:(NSString *)arg1;
- (unsigned long long)groupFormationReasonForTagID:(NSString *)arg1;
@end
