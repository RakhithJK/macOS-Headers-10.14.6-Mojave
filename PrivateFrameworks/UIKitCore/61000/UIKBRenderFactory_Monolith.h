//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Monolith : UIKBRenderFactory
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_variantTraitsForLetterKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_disabledTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_activeTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_highlightedTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_enabledTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (void)configureCornersOnGeometry:(id)arg1 forKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forActiveKeyplaneSwitchKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forEnabledKeyplaneSwitchKey:(id)arg2;
- (id)_disabledTraitsForLetterKey:(id)arg1;
- (id)_activeTraitsForLetterKey:(id)arg1;
- (id)_highlightedTraitsForLetterKey:(id)arg1;
- (id)_enabledTraitsForLetterKey:(id)arg1;
- (void)configureSymbolStyles:(id)arg1 forLetterKey:(id)arg2;
- (id)_disabledTraitsForKey:(id)arg1;
- (id)_activeTraitsForKey:(id)arg1;
- (id)_highlightedTraitsForKey:(id)arg1;
- (id)_enabledTraitsForKey:(id)arg1;
- (struct CGPoint)_secondaryTextOffsetForKey:(id)arg1;
- (struct CGPoint)_textOffsetForKey:(id)arg1;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (BOOL)forceVariantsInsideKeyplane;
- (BOOL)smallTextForSpaceAndClear;
- (BOOL)spaceKeyIsPressed;
- (BOOL)preferGlyphForClear;
- (BOOL)preferGlyphForDelete;
- (BOOL)includeDeleteInVariants;
- (double)letterKeyTwoLineFontWeight;
- (double)tldKeyFontWeight;
- (double)textKeyFontWeight;
- (double)letterKeyFontWeight;
- (double)tldKeyFontSize;
- (double)spaceKeyFontSize;
- (double)textKeyFontSize;
- (double)letterKeyTwoLineFontSize;
- (double)letterKeySecondaryFontSize;
- (double)letterKeyFontSize;
- (double)shadowYOffset;
- (double)shadowRadius;
- (double)keyRoundRectRadius;
- (id)disabledTextColor;
- (id)enabledTextColor;
- (id)highlightedTextColor;
- (id)highlightedVariantKeyColor;
- (id)variantKeyColor;
- (id)highlightedKeyColor;
- (id)displayContentsForKey:(id)arg1;
- (void)lowQualityTraits:(id)arg1;

@end

