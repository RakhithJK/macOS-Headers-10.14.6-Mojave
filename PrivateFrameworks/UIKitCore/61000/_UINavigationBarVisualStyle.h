//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualStyle : NSObject
{
    long long _idiom;
    long long _metrics;
    BOOL _wantsLetterPress;
    BOOL _inPopover;
}

+ (id)visualStyleForIdiom:(long long)arg1;
@property(readonly, nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) BOOL inPopover; // @synthesize inPopover=_inPopover;
@property(nonatomic) BOOL wantsLetterPress; // @synthesize wantsLetterPress=_wantsLetterPress;
@property(nonatomic) long long metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) double _legacyButtonImagePadding;
- (id)_legacyButtonFontForStyle:(long long)arg1;
@property(readonly, nonatomic) double _legacyButtonFontSize;
@property(readonly, nonatomic) double _legacyRightTitleMargin;
@property(readonly, nonatomic) double _legacyLeftTitleMargin;
@property(readonly, nonatomic) double _legacyRightEdgeMargin;
@property(readonly, nonatomic) double _legacyLeftEdgeMargin;
- (id)defaultTitleColorForUserInterfaceStyle:(long long)arg1 barStyle:(long long)arg2;
- (double)imageButtonMarginInNavigationBar:(id)arg1;
- (double)textButtonMarginInNavigationBar:(id)arg1;
- (long long)navigationBar:(id)arg1 metricsForOrientation:(long long)arg2 hasPrompt:(BOOL)arg3;
- (double)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (id)buttonFontForStyle:(long long)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets buttonContentEdgeInsets;
@property(readonly, copy, nonatomic) UIFont *defaultTitleFont;
@property(readonly, nonatomic) double backIndicatorBottomMargin;
@property(readonly, nonatomic) double navigationItemBaselineOffset;
@property(readonly, nonatomic) double promptTextOffset;
@property(readonly, copy, nonatomic) UIFont *promptFont;
@property(readonly, nonatomic) double promptFontSize;
@property(readonly, nonatomic) double buttonImagePadding;
@property(readonly, nonatomic) double minTitleWidth;
@property(readonly, nonatomic) double minButtonWidth;
@property(readonly, nonatomic) double minBackImageWidth;
@property(readonly, nonatomic) double minBackTextWidth;
@property(readonly, nonatomic) double maxBackButtonProportion;
@property(readonly, nonatomic) double interBlockSpace;
@property(readonly, nonatomic) double interItemSpace;
@property(readonly, nonatomic) double promptInset;
@property(readonly, nonatomic) double bottomButtonMargin;
@property(readonly, nonatomic) double bottomImageMargin;
@property(readonly, nonatomic) double topImageMargin;
@property(readonly, nonatomic) double leftTextMargin;
@property(readonly, nonatomic) double rightImageMargin;
@property(readonly, nonatomic) double rightTitleMargin;
@property(readonly, nonatomic) double leftBackImageMargin;
- (double)leftBackTitleMarginLetterpressPadding;
@property(readonly, nonatomic) double leftBackTitleMargin;
@property(readonly, nonatomic) double leftTitleMargin;
@property(readonly, nonatomic) double buttonFontSize;
@property(readonly, nonatomic) double headingFontSize;
@property(readonly, nonatomic) double topBackMargin;
@property(readonly, nonatomic) double topTitleMargin;
@property(readonly, nonatomic) double horizontalMarginAdjustment;
@property(readonly, nonatomic) double topMargin;
- (double)barHeightForMetrics:(long long)arg1;
@property(readonly, nonatomic) double barPromptHeight;
@property(readonly, nonatomic) double barHeight;
@property(readonly, nonatomic) double buttonHeight;
- (double)backButtonAnimationClippingPadding;
@property(readonly, nonatomic) double backButtonIndicatorSpacing;
@property(readonly, nonatomic) BOOL metricsHasPrompt;
@property(readonly, nonatomic) BOOL metricsIsMini;
- (id)timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2 isInteractive:(BOOL)arg3;
- (id)initWithIdiom:(long long)arg1;

@end

