//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRFeedCollectionViewCell.h"

@class FRFeedSpotlightArticleHeadlineView;

@interface FRFeedSpotlightArticleCollectionViewCell : FRFeedCollectionViewCell
{
}

+ (Class)headlineViewClass;
- (void)showHeadline:(id)arg1;
- (void)_updateHeadlineViewAlpha;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) FRFeedSpotlightArticleHeadlineView *headlineView; // @dynamic headlineView;

@end
