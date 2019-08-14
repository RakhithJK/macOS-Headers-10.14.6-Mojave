//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIAccessibilityContentSizeCategoryImageAdjusting-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIFloatingContentViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView, UIVisualEffectView, _UIButtonMaskAnimationView, _UIFloatingContentView;

@interface UIButton : UIControl <UIAccessibilityContentSizeCategoryImageAdjusting, UIGestureRecognizerDelegate, _UIFloatingContentViewDelegate, NSCoding>
{
    unsigned long long _externalFlatEdge;
    struct __CFDictionary *_contentLookup;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    UIImageView *_backgroundView;
    _UIFloatingContentView *_floatingContentView;
    UIVisualEffectView *_contentBackdropView;
    UIImageView *_imageView;
    UILabel *_titleView;
    BOOL _initialized;
    unsigned long long _lastDrawingControlState;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int reversesTitleShadowWhenHighlighted:1;
        unsigned int adjustsImageWhenHighlighted:1;
        unsigned int adjustsImageWhenDisabled:1;
        unsigned int autosizeToFit:1;
        unsigned int disabledDimsImage:1;
        unsigned int showsTouchWhenHighlighted:1;
        unsigned int buttonType:8;
        unsigned int shouldHandleScrollerMouseEvent:1;
        unsigned int titleFrozen:1;
        unsigned int resendTraitToImageViews:2;
        unsigned int animateNextHighlightChange:1;
        unsigned int blurEnabled:1;
        unsigned int visualEffectViewEnabled:1;
        unsigned int suppressAccessibilityUnderline:1;
        unsigned int requiresLayoutForPropertyChange:1;
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory:1;
        unsigned int disableAutomaticTitleAnimations:1;
    } _buttonFlags;
    UIView *_effectiveContentView;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UIView *_selectionView;
    UIFont *_lazyTitleViewFont;
    NSArray *_contentConstraints;
    long long __imageContentMode;
    UIColor *__plainButtonBackgroundColor;
    struct UIEdgeInsets _internalTitlePaddingInsets;
}

+ (id)_defaultImageColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultTitleColorForState:(unsigned long long)arg1 button:(id)arg2;
+ (id)_defaultBackgroundImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_defaultImageForType:(long long)arg1 andState:(unsigned long long)arg2;
+ (id)_xImage;
+ (id)_minusImage;
+ (id)_checkmarkImage;
+ (id)_questionMarkImage;
+ (id)_exclamationMarkImage;
+ (id)_plusImage;
+ (id)_infoDarkImage;
+ (id)_infoLightImage;
+ (id)_detailDisclosureImage;
+ (id)_selectedIndicatorImage;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 baseAlpha:(double)arg4;
+ (void)_setVisuallyHighlighted:(BOOL)arg1 forViews:(id)arg2 initialPress:(BOOL)arg3 highlightBlock:(CDUnknownBlockType)arg4;
+ (id)_defaultNormalTitleShadowColor;
+ (id)_defaultNormalTitleColor;
+ (id)buttonWithType:(long long)arg1;
+ (BOOL)_buttonTypeIsModernUI:(long long)arg1;
+ (double)_defaultNeighborSpacingForAxis:(long long)arg1;
@property(retain, nonatomic, getter=_plainButtonBackgroundColor, setter=_setPlainButtonBackgroundColor:) UIColor *_plainButtonBackgroundColor; // @synthesize _plainButtonBackgroundColor=__plainButtonBackgroundColor;
@property(nonatomic, setter=_setImageContentMode:) long long _imageContentMode; // @synthesize _imageContentMode=__imageContentMode;
@property(nonatomic, setter=_setInternalTitlePaddingInsets:) struct UIEdgeInsets _internalTitlePaddingInsets; // @synthesize _internalTitlePaddingInsets;
@property(copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // @synthesize _contentConstraints;
- (void).cxx_destruct;
- (BOOL)_isInCarPlay;
- (BOOL)_isCarPlaySystemTypeButton;
- (void)_applyCarPlaySystemButtonCustomizations;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)_hasImageForProperty:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)_letterpressStyleForState:(unsigned long long)arg1;
- (id)_attributedTitleForState:(unsigned long long)arg1;
- (id)_shadowColorForState:(unsigned long long)arg1;
- (id)_imageColorForState:(unsigned long long)arg1;
- (id)_titleColorForState:(unsigned long long)arg1;
- (id)_titleForState:(unsigned long long)arg1;
- (id)_backgroundForState:(unsigned long long)arg1 usesBackgroundForNormalState:(char *)arg2;
- (id)_imageForState:(unsigned long long)arg1 usesImageForNormalState:(char *)arg2;
- (void)_takeContentFromArchivableContent:(id)arg1;
- (id)_archivableContent:(id *)arg1;
- (id)_contentForState:(unsigned long long)arg1;
- (void)_setAttributedTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setBackground:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)_setContent:(id)arg1 forState:(unsigned long long)arg2;
@property(nonatomic, getter=_isContentBackgroundHidden, setter=_setContentBackgroundHidden:) BOOL contentBackgroundHidden;
- (void)_updateEffectsForImageView:(id)arg1 background:(BOOL)arg2;
- (BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg1;
- (double)_drawingStrokeForState:(unsigned long long)arg1;
- (void)_setDrawingStroke:(double)arg1 forState:(unsigned long long)arg2;
- (long long)_drawingStyleForState:(unsigned long long)arg1;
- (void)_setDrawingStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (long long)_drawingStyleForStroke:(double)arg1;
- (double)_drawingStrokeForStyle:(long long)arg1;
- (struct CGRect)_highlightBounds;
- (id)image;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)_titleView;
- (id)_imageView;
- (id)_backgroundView;
- (void)_setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)_titleShadowOffset;
- (void)_setLineBreakMode:(long long)arg1;
- (long long)_lineBreakMode;
- (void)_setFont:(id)arg1;
- (id)_font;
- (void)_setLetterpressStyle:(id)arg1 forState:(unsigned long long)arg2;
- (void)crossfadeToImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forStates:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forStates:(unsigned long long)arg2;
- (struct CGPoint)pressFeedbackPosition;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (BOOL)autosizesToFit;
- (void)setAutosizesToFit:(BOOL)arg1;
- (void)_setShouldHandleScrollerMouseEvent:(BOOL)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_reducedTransparencyDidChange:(id)arg1;
- (void)_titleAttributesChanged;
- (void)_titleAttributesThatDoNotAffectSizeOrLayoutChanged;
- (long long)_buttonType;
- (void)_setButtonType:(long long)arg1;
@property(nonatomic, setter=_setWantsAccessibilityUnderline:) BOOL _wantsAccessibilityUnderline;
- (void)_setupTitleView;
- (void)_setupTitleViewRequestingLayout:(BOOL)arg1;
- (id)_newLabelWithFrame:(struct CGRect)arg1;
- (void)_setupImageView;
- (id)_effectiveContentView;
- (id)_floatingContentView;
- (BOOL)_wantsContentBackdropView;
- (BOOL)_shouldHaveFloatingAppearance;
- (id)_createPreparedImageViewWithFrame:(struct CGRect)arg1;
- (id)_setupBackgroundView;
- (id)_newImageViewWithFrame:(struct CGRect)arg1;
- (void)setTitleShadowOffset:(struct CGSize)arg1;
- (struct CGSize)titleShadowOffset;
- (void)setLineBreakMode:(long long)arg1;
- (long long)lineBreakMode;
- (void)setFont:(id)arg1;
- (id)font;
- (void)layoutSubviews;
- (BOOL)_shouldSkipNormalLayoutForSakeOfTemplateLayout;
- (BOOL)_requiresLayoutForPropertyChange;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)_layoutTitleView;
- (void)_updateTitleView;
- (void)_layoutImageView;
- (void)_updateImageView;
- (void)_layoutContentBackdropView;
- (void)_updateContentBackdropView;
- (void)_setBlurEnabled:(BOOL)arg1;
- (BOOL)_blurEnabled;
- (void)_setVisualEffectViewEnabled:(BOOL)arg1 backgroundColor:(id)arg2;
- (BOOL)_visualEffectViewEnabled;
- (id)_contentBackdropView;
- (void)_layoutBackgroundImageView;
- (void)_updateBackgroundImageView;
- (BOOL)_shouldUpdatePressedness;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeForTitle:(id)arg1 attributedTitle:(id)arg2 image:(id)arg3 backgroundImage:(id)arg4 titlePaddingInsets:(struct UIEdgeInsets *)arg5;
- (struct CGSize)_roundSize:(struct CGSize)arg1;
- (id)viewForLastBaselineLayout;
- (void)updateConstraints;
- (id)_titleOrImageViewForBaselineLayout;
- (void)_setContentHuggingPriorities:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_titleRectForContentRect:(struct CGRect)arg1 calculatePositionForEmptyTitle:(BOOL)arg2;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) NSAttributedString *currentAttributedTitle;
@property(readonly, nonatomic) UIImage *currentBackgroundImage;
@property(readonly, nonatomic) UIImage *currentImage;
@property(readonly, nonatomic) UIColor *currentTitleShadowColor;
@property(readonly, retain, nonatomic) UIColor *_currentImageColor;
@property(readonly, nonatomic) UIColor *currentTitleColor;
@property(readonly, nonatomic) NSString *currentTitle;
- (id)attributedTitleForState:(unsigned long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (id)titleShadowColorForState:(unsigned long long)arg1;
- (id)titleColorForState:(unsigned long long)arg1;
- (id)titleForState:(unsigned long long)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setImageColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setNeedsLayout;
- (void)setSpringLoaded:(BOOL)arg1;
- (BOOL)isSpringLoaded;
- (void)_gestureRecognizerFailed:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGRect)_clippedHighlightBounds;
- (struct CGRect)_highlightRectForImageRect:(struct CGRect)arg1;
- (struct CGRect)_highlightRectForTextRect:(struct CGRect)arg1;
- (void)_setTitleFrozen:(BOOL)arg1;
- (BOOL)_isTitleFrozen;
- (void)_beginTitleAnimation;
- (void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
- (BOOL)_hasDrawingStyle;
- (double)_borderWidthForState:(unsigned long long)arg1 bounds:(struct CGRect)arg2;
- (id)_borderColorForState:(unsigned long long)arg1;
- (id)_fadeOutAnimationWithKeyPath:(id)arg1;
- (id)_transitionAnimationWithKeyPath:(id)arg1;
@property(setter=_setExternalFlatEdge:) unsigned long long _externalFlatEdge;
- (id)_externalImageColorForState:(unsigned long long)arg1;
- (id)_externalBorderColorForState:(unsigned long long)arg1;
- (id)_externalUnfocusedBorderColor;
- (id)_externalTitleColorForState:(unsigned long long)arg1;
- (id)_externalFocusedTitleColor;
- (long long)_externalDrawingStyleForState:(unsigned long long)arg1;
- (void)_willMoveToWindow:(id)arg1;
- (void)_setupDrawingStyleForState:(unsigned long long)arg1;
- (struct CGRect)_highlightBoundsForDrawingStyle;
- (void)_prepareMaskAnimationViewIfNecessary;
- (struct CGRect)_selectedIndicatorBounds;
- (id)_selectedIndicatorViewWithImage:(id)arg1;
- (double)_selectedIndicatorAlpha;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (BOOL)_imageNeedsCompositingModeWhenSelected;
- (BOOL)_textNeedsCompositingModeWhenSelected;
- (void)_setupPressednessForState:(unsigned long long)arg1;
- (void)_updateMaskState;
- (BOOL)_hasHighlightColor;
- (double)_highlightCornerRadius;
- (struct UIEdgeInsets)_pathImageEdgeInsets;
- (struct UIEdgeInsets)_pathTitleEdgeInsets;
- (void)tintColorDidChange;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_selectGestureChanged:(id)arg1;
- (void)_uninstallSelectGestureRecognizer;
- (void)_installSelectGestureRecognizer;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (BOOL)canBecomeFocused;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_isEffectivelyDisabledExternalButton;
- (BOOL)_isExternalRoundedRectButtonWithPressednessState;
- (BOOL)_isModernButton;
@property(nonatomic, getter=_disableAutomaticTitleAnimations, setter=_setDisableAutomaticTitleAnimations:) BOOL _disableAutomaticTitleAnimations;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setContentHorizontalAlignment:(long long)arg1;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *titleLabel;
- (BOOL)_likelyToHaveTitle;
- (BOOL)_canHaveTitle;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @dynamic imageEdgeInsets;
@property(nonatomic) BOOL showsTouchWhenHighlighted;
@property(nonatomic) BOOL adjustsImageWhenDisabled; // @dynamic adjustsImageWhenDisabled;
@property(nonatomic) BOOL adjustsImageWhenHighlighted; // @dynamic adjustsImageWhenHighlighted;
@property(nonatomic) BOOL reversesTitleShadowWhenHighlighted; // @dynamic reversesTitleShadowWhenHighlighted;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @dynamic titleEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @dynamic contentEdgeInsets;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)_applyAppropriateChargeForButton;
- (void)_setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setFrame:(struct CGRect)arg1 deferLayout:(BOOL)arg2;
@property(readonly, nonatomic) long long buttonType;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_encodableSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_invalidateContentConstraints;
- (struct UIEdgeInsets)_combinedContentPaddingInsets;
- (id)_layoutDebuggingTitle;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (BOOL)isAccessibilityElementByDefault;
- (BOOL)_accessibilityShouldActivateOnHUDLift;
@property(nonatomic) BOOL adjustsImageSizeForAccessibilityContentSizeCategory;
- (double)_scaleFactorForImage;
- (struct CGSize)_effectiveSizeForImage:(id)arg1;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(id)arg2 nextToNeighbor:(id)arg3 edge:(int)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4;
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

