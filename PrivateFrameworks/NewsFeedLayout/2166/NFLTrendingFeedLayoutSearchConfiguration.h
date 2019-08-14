//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedLayoutSearchConfiguration-Protocol.h>

@class NSArray, NSString;

@interface NFLTrendingFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration>
{
    BOOL _showAccessoryText;
    unsigned long long _feedLayoutType;
    long long _groupConfigurationType;
}

@property(nonatomic) long long groupConfigurationType; // @synthesize groupConfigurationType=_groupConfigurationType;
@property(nonatomic) unsigned long long feedLayoutType; // @synthesize feedLayoutType=_feedLayoutType;
@property(nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText; // @synthesize showAccessoryText=_showAccessoryText;
- (id)preferredOrderingOfTileInfos:(id)arg1;
- (Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (Class)_tilingOperationClassForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (id)descriptionForRowType:(unsigned long long)arg1;
- (BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3;
@property(readonly, nonatomic) NSArray *allRowTypes;
@property(readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
- (BOOL)supportsTileInfoType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTrendingArticlesFeedLayoutType:(unsigned long long)arg1 groupConfigurationType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

