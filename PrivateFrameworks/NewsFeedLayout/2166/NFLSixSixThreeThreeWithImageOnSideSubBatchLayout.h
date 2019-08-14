//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsFeedLayout/NFLSubBatchLayout.h>

@class NFLPairSubBatchLayout, NFLSingleComponentLayout;

@interface NFLSixSixThreeThreeWithImageOnSideSubBatchLayout : NFLSubBatchLayout
{
    NFLSingleComponentLayout *_leftSixImageOnTopComponent;
    NFLSingleComponentLayout *_rightSixImageOnTopComponent;
    NFLPairSubBatchLayout *_topPairComponent;
    NFLSingleComponentLayout *_bottomImageOnSideComponent;
}

@property(retain, nonatomic) NFLSingleComponentLayout *bottomImageOnSideComponent; // @synthesize bottomImageOnSideComponent=_bottomImageOnSideComponent;
@property(retain, nonatomic) NFLPairSubBatchLayout *topPairComponent; // @synthesize topPairComponent=_topPairComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *rightSixImageOnTopComponent; // @synthesize rightSixImageOnTopComponent=_rightSixImageOnTopComponent;
@property(retain, nonatomic) NFLSingleComponentLayout *leftSixImageOnTopComponent; // @synthesize leftSixImageOnTopComponent=_leftSixImageOnTopComponent;
- (void).cxx_destruct;
- (id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
- (unsigned long long)columnSpan;
- (unsigned long long)rowSpan;
- (id)singleComponentLayouts;
- (id)tileInfosUsed;
- (double)rank;
- (BOOL)isValid;

@end

