//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class NSString, UIKBThemedView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView>
{
    BOOL _inExtendedView;
    BOOL _beginsFirstPage;
    BOOL _endsLastPage;
    BOOL _isAtLeftEdge;
    BOOL _isAutocorrectionCandidate;
    UIKBThemedView *_themedView;
    UILabel *_label;
    UILabel *_annotationLabel;
    UIView *_centeredBackgroundView;
    UIView *_proactiveCandidateView;
    NSString *_candidateText;
    NSString *_annotationText;
}

+ (id)attributedStringForIcon:(id)arg1 text:(id)arg2 font:(id)arg3 color:(id)arg4;
+ (double)labelOffset;
+ (BOOL)highlightAffectsBackground;
+ (double)widthForCandidate:(id)arg1;
+ (BOOL)drawsSideBorders;
+ (struct UIEdgeInsets)cacheInsets;
+ (id)textColorWithHighlight:(BOOL)arg1 whiteText:(BOOL)arg2;
+ (id)annotationFont;
+ (id)font;
+ (id)reuseIdentifier;
@property(nonatomic) BOOL isAutocorrectionCandidate; // @synthesize isAutocorrectionCandidate=_isAutocorrectionCandidate;
@property(nonatomic) BOOL isAtLeftEdge; // @synthesize isAtLeftEdge=_isAtLeftEdge;
@property(nonatomic) BOOL endsLastPage; // @synthesize endsLastPage=_endsLastPage;
@property(nonatomic) BOOL beginsFirstPage; // @synthesize beginsFirstPage=_beginsFirstPage;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *candidateText; // @synthesize candidateText=_candidateText;
@property(retain, nonatomic) UIView *proactiveCandidateView; // @synthesize proactiveCandidateView=_proactiveCandidateView;
@property(retain, nonatomic) UIView *centeredBackgroundView; // @synthesize centeredBackgroundView=_centeredBackgroundView;
@property(retain, nonatomic) UILabel *annotationLabel; // @synthesize annotationLabel=_annotationLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIKBThemedView *themedView; // @synthesize themedView=_themedView;
@property(nonatomic) BOOL inExtendedView; // @synthesize inExtendedView=_inExtendedView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)dimKeys:(id)arg1;
- (void)updateIsAtLeftEdgeState;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateLabels;
- (void)_setRenderConfig:(id)arg1;
- (void)didMoveToWindow;
- (void)setCandidate:(id)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (int)style;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

