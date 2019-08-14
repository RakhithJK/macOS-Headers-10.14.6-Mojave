//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIKBRenderConfig, UIKBRenderingContext;

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderingContext *_renderingContext;
    NSMutableArray *_segmentTraits;
    BOOL _suppressSegmentTraits;
    double _rivenSizeFactor;
    BOOL _lightweightFactory;
    double _scale;
    struct CGSize _stretchFactor;
    BOOL _boldTextEnabled;
    BOOL _increasedContrastEnabled;
    BOOL _allowsPaddles;
    BOOL _preferStringKeycapOverImage;
    BOOL _drawsOneHandedAffordance;
}

+ (BOOL)couldUseGlyphSelectorForDisplayString:(id)arg1;
+ (id)_characterSetForGlyphSelectors;
+ (id)segmentedControlColor:(BOOL)arg1;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3;
+ (id)lightweightFactoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2 skipLayoutSegments:(BOOL)arg3;
+ (Class)factoryClassForVisualStyle:(CDStruct_227bb23d)arg1;
+ (long long)_graphicsQuality;
+ (BOOL)_enabled;
@property(nonatomic) BOOL drawsOneHandedAffordance; // @synthesize drawsOneHandedAffordance=_drawsOneHandedAffordance;
@property(nonatomic) BOOL preferStringKeycapOverImage; // @synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage;
@property(nonatomic) BOOL allowsPaddles; // @synthesize allowsPaddles=_allowsPaddles;
@property(nonatomic) BOOL increasedContrastEnabled; // @synthesize increasedContrastEnabled=_increasedContrastEnabled;
@property(readonly, nonatomic) BOOL boldTextEnabled; // @synthesize boldTextEnabled=_boldTextEnabled;
@property(nonatomic) struct CGSize stretchFactor; // @synthesize stretchFactor=_stretchFactor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) BOOL lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;
@property(nonatomic) double rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;
@property(readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;
@property(retain, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
- (long long)glyphSelectorForDisplayString:(id)arg1;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)thinTextFontName;
- (id)lightTextFontName;
- (id)lightPadKeycapsFontName;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (id)controlKeyShadowColorName;
- (id)defaultKeyShadowColorName;
- (id)controlKeyForegroundColorName;
- (id)lowQualityLayeredBackgroundColorName;
- (id)_controlKeyBackgroundColorName;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyBackgroundColorName;
- (long long)lightHighQualityEnabledBlendForm;
- (long long)enabledBlendForm;
- (void)suppressLayoutSegments;
- (void)addLayoutSegment:(id)arg1;
- (BOOL)useBlueThemingForKey:(id)arg1;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2;
- (id)displayContentsForKey:(id)arg1;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (double)skinnyKeyThreshold;
- (id)ZWNJKeyImageName;
- (id)spaceKeyGrabberHandlesImageName;
- (id)messagesWriteboardKeyImageName;
- (id)biuKeyImageName;
- (id)boldKeyImageName;
- (id)undoKeyImageName;
- (id)pasteKeyImageName;
- (id)copyKeyImageName;
- (id)cutKeyImageName;
- (id)rightArrowKeyImageName;
- (id)leftArrowKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteOnKeyImageName;
- (id)deleteKeyImageName;
- (id)handwritingMoreKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(BOOL)arg4 blurBlending:(BOOL)arg5;
- (BOOL)keyIsRightToLeftSensitive:(id)arg1;
- (id)hashStringElement;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (void)setupLayoutSegments;
- (void)lowQualityTraits:(id)arg1;
- (double)translucentGapWidth;
- (void)scaleTraits:(id)arg1;
- (struct CGPoint)RivenPointFactor:(struct CGPoint)arg1;
- (double)RivenFactor:(double)arg1;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2;
- (void)dealloc;
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (struct CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (double)emojiPopupDividerKeyOffset;
- (double)keyCornerRadius;
@property(readonly, getter=renderConfig) UIKBRenderConfig *renderConfig;
- (id)extraPasscodePaddleTraits;
- (id)passcodeShiftedControlKeyTraits;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeControlKeyTraits;
- (id)passcodeKeyEdgeColorName;
- (double)passcodeEdgeWeight;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;

@end

