//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol FCPersonalizationAggregate;

@protocol FCPersonalizationAggregate <NSObject>
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) double impressions;
@property(readonly, nonatomic) double clicks;
@property(readonly, nonatomic) NSString *featureKey;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id <FCPersonalizationAggregate>)arg1 baseline:(id <FCPersonalizationAggregate>)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)powerWithDecayFactor:(double)arg1;
- (double)personalizationValueWithCorrelatedAggregate:(id <FCPersonalizationAggregate>)arg1 baseline:(id <FCPersonalizationAggregate>)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)personalizationValueWithBaseline:(id <FCPersonalizationAggregate>)arg1 decayRate:(double)arg2;
@end

