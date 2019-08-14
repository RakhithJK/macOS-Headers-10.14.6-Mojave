//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FCTagRanking-Protocol.h"

@class FCFeedPersonalizedItems, NSArray, NSString;

@protocol FCFeedPersonalizing <FCTagRanking>
- (double)decayedPublisherDiversificationPenalty;
- (unsigned long long)whitelistLevelForTagID:(NSString *)arg1;
- (void)prepareForUseWithCompletionHandler:(void (^)(void))arg1;
- (NSArray *)limitItemsByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (NSArray *)limitItemsByMinimumItemQuality:(NSArray *)arg1;
- (NSArray *)diversifyItems:(NSArray *)arg1 limit:(unsigned long long)arg2 preselectedItems:(NSArray *)arg3;
- (NSArray *)diversifyItems:(NSArray *)arg1 limit:(unsigned long long)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1;

@optional
- (NSArray *)bestOfGroupFromItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (double)personalizedScoreForFeatureWithIdentifier:(NSString *)arg1 items:(NSArray *)arg2 baselineClicksMultiplier:(double)arg3;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (void)prepareFavorites:(void (^)(void))arg1;
@end

