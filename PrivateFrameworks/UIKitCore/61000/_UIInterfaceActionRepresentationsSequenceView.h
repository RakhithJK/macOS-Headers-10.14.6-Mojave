//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIScrollView.h>

@class NSArray, NSLayoutConstraint, UIInterfaceActionVisualStyle, _UIInterfaceActionSeparatableSequenceView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView
{
    long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
    UIInterfaceActionVisualStyle *_visualStyle;
    NSArray *_arrangedActionRepresentationViews;
    long long _actionLayoutAxis;
    unsigned long long _visualCornerPosition;
    NSLayoutConstraint *_minimumHeightConstraint;
    _UIInterfaceActionSeparatableSequenceView *_separatedContentSequenceView;
}

@property(readonly, nonatomic) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView; // @synthesize separatedContentSequenceView=_separatedContentSequenceView;
@property(readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(nonatomic) long long actionLayoutAxis; // @synthesize actionLayoutAxis=_actionLayoutAxis;
@property(retain, nonatomic) NSArray *arrangedActionRepresentationViews; // @synthesize arrangedActionRepresentationViews=_arrangedActionRepresentationViews;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (void).cxx_destruct;
- (BOOL)_isHorizontalLayout;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (void)_applyVisualStyle;
- (void)_enableSeparatedContentSequenceViewToFit;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize)arg1;
- (double)_minimumNumberOfRowsRequiredVisible;
- (void)_updateMinimumHeightConstraint;
- (void)_loadDefaultSizingConstraints;
- (void)updateConstraints;
- (void)_notifyDidScroll;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (double)_contentFitCanScrollThreshold;
- (void)reloadDisplayedContentVisualStyle;
- (double)fittingWidthForLayoutAxis:(long long)arg1;
- (id)initWithVisualStyle:(id)arg1;

@end

