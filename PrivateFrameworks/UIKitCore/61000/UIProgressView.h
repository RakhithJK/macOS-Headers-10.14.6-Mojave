//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSObservation, NSProgress, UIColor, UIImage, UIImageView, UIVisualEffectView;

@interface UIProgressView : UIView <NSCoding>
{
    long long _progressViewStyle;
    float _progress;
    long long _barStyle;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIView *_contentView;
    UIImageView *_trackView;
    UIImageView *_progressView;
    BOOL _isAnimating;
    NSArray *_trackColors;
    NSArray *_progressColors;
    UIVisualEffectView *_effectView;
    NSProgress *_observedProgress;
    NSObservation *_progressObservation;
    UIView *_shadowView;
    double _currentCornerRadius;
    UIImage *_trackImage;
    UIImage *_progressImage;
}

+ (id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2;
+ (id)_tintedImageForHeight:(double)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned long long)arg3;
+ (id)_standardInnerImageForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (id)_standardOuterImageForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (void)_fillImagesForIndex:(unsigned long long)arg1 style:(long long)arg2 barStyle:(long long)arg3;
+ (unsigned long long)_indexForStyle:(long long)arg1 barStyle:(long long)arg2;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) long long progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;
- (void).cxx_destruct;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (id)_effectiveContentView;
- (void)_setProgressColor:(id)arg1;
- (id)_progressColor;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)_setProgress:(float)arg1;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (double)_shadowOpacityForUserInterfaceStyle:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_layoutShadow;
- (void)_setupShadow;
- (void)_updateCornerRadiusWithSize:(struct CGSize)arg1;
- (void)_setupProgressViewCommon;
- (void)_updateImages;
- (unsigned long long)_roundedCornersForProgressForCurrentStyle;
- (unsigned long long)_roundedCornersForTrackForCurrentStyle;
- (id)_defaultTrackColorForCurrentStyle;
- (id)_appropriateProgressImage;
- (id)_appropriateTrackImage;
- (BOOL)_shouldTintTrack;
- (BOOL)_shouldTintProgress;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProgressViewStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (void)setBarStyle:(long long)arg1;
- (long long)barStyle;

@end

