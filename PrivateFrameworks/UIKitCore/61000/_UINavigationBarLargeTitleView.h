//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UINavigationBarTitleViewDataSource-Protocol.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSDictionary, NSString, UIFontMetrics, _UINavigationBarLargeTitleViewLayout, _UINavigationBarTransitionContext, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLargeTitleView : UIView <_UINavigationBarTitleViewDataSource, _UINavigationBarTransitionContextParticipant>
{
    _UINavigationBarLargeTitleViewLayout *_layout;
    _UINavigationBarTransitionContext *_transitionContext;
    NSArray *_titleCandidates;
    NSString *__effectiveTitle;
    BOOL _supportsTwoLines;
    BOOL _alignAccessoryViewToTitleBaseline;
    long long _titleType;
    NSString *_title;
    NSArray *_alternateTitles;
    NSDictionary *_titleAttributes;
    UIView *_accessoryView;
    unsigned long long _accessoryViewHorizontalAlignment;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
    UIFontMetrics *_fontMetrics;
}

@property(readonly, nonatomic) UIFontMetrics *fontMetrics; // @synthesize fontMetrics=_fontMetrics;
@property(retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property(nonatomic) unsigned long long accessoryViewHorizontalAlignment; // @synthesize accessoryViewHorizontalAlignment=_accessoryViewHorizontalAlignment;
@property(nonatomic) BOOL alignAccessoryViewToTitleBaseline; // @synthesize alignAccessoryViewToTitleBaseline=_alignAccessoryViewToTitleBaseline;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) BOOL supportsTwoLines; // @synthesize supportsTwoLines=_supportsTwoLines;
@property(copy, nonatomic) NSDictionary *titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(retain, nonatomic) NSArray *alternateTitles; // @synthesize alternateTitles=_alternateTitles;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
- (void).cxx_destruct;
- (void)adoptFinalStateFromTransition:(id)arg1 transitionCompleted:(BOOL)arg2;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)titleViewChangedPreferredDisplaySize:(id)arg1;
- (void)titleViewChangedStandardDisplayItems:(id)arg1;
- (void)titleViewChangedHeight:(id)arg1;
- (void)titleViewChangedUnderlayContent:(id)arg1;
- (void)titleView:(id)arg1 needsUpdatedContentOverlayRects:(id)arg2;
@property(nonatomic) double restingHeightOfRefreshControl; // @dynamic restingHeightOfRefreshControl;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContent;
- (void)_updateContentAndInvalidate:(BOOL)arg1;
- (id)_effectiveTitle;
- (id)_titleForCurrentWidth;
- (void)_updateFontMetrics;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 titleType:(long long)arg2;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) double restingHeightOfTitleView;
- (id)_layoutForMeasurement;
- (void)_setupTitle;
@property(readonly, nonatomic) UIView *accessibilityTitleView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_newLayout;
- (id)_newTitleLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

