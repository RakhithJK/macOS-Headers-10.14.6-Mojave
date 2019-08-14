//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class MKStarRatingView, NSArray, NSString, NSTextField, _MKUILabel;

@interface MKStarRatingAndLabelView : NSView
{
    MKStarRatingView *_starRatingView;
    _MKUILabel *_reviewsLabel;
    NSString *_sourceName;
    unsigned long long _numberOfReviews;
    BOOL _displaysSourceOfReviews;
    NSArray *_reviewsLabelConstraints;
}

+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(BOOL)arg4 ratingStyle:(long long)arg5 theme:(id)arg6;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(BOOL)arg4 theme:(id)arg5;
+ (id)starRatingAndProviderAsAttributedStringForMapItem:(id)arg1 textColor:(id)arg2 font:(id)arg3 showReviewsOrTips:(BOOL)arg4;
+ (id)ratingAndReviewsAsAttributedString:(double)arg1 style:(long long)arg2 font:(id)arg3 numberOfReviews:(unsigned long long)arg4 textColor:(id)arg5 theme:(id)arg6;
+ (id)ratingAndReviewsAsAttributedString:(double)arg1 style:(long long)arg2 font:(id)arg3 numberOfReviews:(unsigned long long)arg4 textColor:(id)arg5;
+ (id)reviewsString:(unsigned long long)arg1 providerName:(id)arg2;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) unsigned long long numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;
@property(readonly, nonatomic) NSTextField *reviewsLabel; // @synthesize reviewsLabel=_reviewsLabel;
@property(readonly, nonatomic) MKStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;
- (void).cxx_destruct;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateFonts;
- (void)setDisplaysSourceOfReviews:(BOOL)arg1;
- (void)_mapkit_setCalloutTextColor:(id)arg1;
- (id)initWithStyle:(long long)arg1;

@end

