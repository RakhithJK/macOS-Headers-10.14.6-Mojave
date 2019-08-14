//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSAffineTransform, NSCharacterSet, NSFontDescriptor, NSString;

@interface NSFont : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    double _size;
    long long _retainCount;
    struct __fFlags {
        unsigned int _isScreenFont:1;
        unsigned int _systemFontType:8;
        unsigned int _reserved1:4;
        unsigned int _matrixIsIdentity:1;
        unsigned int _renderingMode:3;
        unsigned int _inInstanceCache:1;
        unsigned int _appearanceSize:1;
        unsigned int _reserved2:13;
    } _fFlags;
    id _private;
}

+ (BOOL)_characterCannotBeRendered:(unsigned int)arg1;
+ (id)coveredCharacterCache;
+ (void)_setExportSpecialFonts:(BOOL)arg1;
+ (id)_toolbarLabelFontOfSize:(double)arg1;
+ (double)_toolbarSmallLabelFontSize;
+ (double)_toolbarLabelFontSize;
+ (void)setPreferredFontNames:(id)arg1;
+ (id)preferredFontNames;
+ (id)findFontLike:(id)arg1 traits:(unsigned long long)arg2 forCharacters:(const unsigned short *)arg3 length:(unsigned long long)arg4 inLanguage:(id)arg5 checkCoveredCache:(BOOL)arg6;
+ (id)findFontLike:(id)arg1 forString:(id)arg2 withRange:(struct _NSRange)arg3 inLanguage:(id)arg4;
+ (id)findFontLike:(id)arg1 forCharacter:(unsigned int)arg2 inLanguage:(id)arg3;
+ (void)setLocaleListForDefaultFontFallback:(id)arg1;
+ (void)useFont:(id)arg1;
+ (id)availableMembersOfFontFamily:(id)arg1;
+ (id)availableFontFamilies;
+ (id)availableFonts;
+ (double)toolbarLabelFontSizeForToolbarSize:(unsigned long long)arg1;
+ (id)toolbarLabelFontOfSize:(double)arg1;
+ (id)monospacedDigitSystemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)_mediumSystemFontOfSize:(double)arg1;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (BOOL)supportsSecureCoding;
+ (double)systemFontSizeForControlSize:(unsigned long long)arg1;
+ (double)labelFontSize;
+ (double)smallSystemFontSize;
+ (double)systemFontSize;
+ (id)menuFontOfSize:(double)arg1;
+ (id)controlContentFontOfSize:(double)arg1;
+ (id)toolTipsFontOfSize:(double)arg1;
+ (id)paletteFontOfSize:(double)arg1;
+ (id)menuBarFontOfSize:(double)arg1;
+ (id)titleBarFontOfSize:(double)arg1;
+ (id)labelFontOfSize:(double)arg1;
+ (id)messageFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1;
+ (void)setUserFixedPitchFont:(id)arg1;
+ (void)setUserFont:(id)arg1;
+ (id)userFixedPitchFontOfSize:(double)arg1;
+ (id)userFontOfSize:(double)arg1;
+ (id)fontWithDescriptor:(id)arg1 textTransform:(id)arg2;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 matrix:(const double *)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (void)initialize;
+ (BOOL)_allowsDefaultFontSubstitutionFor1XOnly;
+ (BOOL)_allowsDefaultFontSubstitution;
+ (BOOL)_simulatesTransparentLayerBehavior;
+ (BOOL)_allowsLatin1MappingForFontFamily:(id)arg1;
+ (void)_registerForFontSetNotification;
+ (void)_postFontSetChangedNotifications;
+ (void)_updateAntialiasingThreshold;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)coversCharacter:(unsigned short)arg1;
- (BOOL)coversAllCharactersInString:(id)arg1;
- (unsigned long long)_numberOfGlyphs;
- (unsigned int)hyphenGlyphForLanguage:(id)arg1;
- (BOOL)isScreenFont;
- (double)_widthOfPackedGlyphs:(const char *)arg1 count:(unsigned long long)arg2;
- (BOOL)_glyphDrawsOutsideLineHeight:(unsigned int)arg1;
- (BOOL)_canDrawOutsideLineHeight;
- (BOOL)_isFakeFixedPitch;
- (id)_coveredCharSet;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (struct CGPoint)positionOfGlyph:(unsigned int)arg1 forCharacter:(unsigned short)arg2 struckOverRect:(struct CGRect)arg3;
- (struct CGPoint)positionOfGlyph:(unsigned int)arg1 struckOverRect:(struct CGRect)arg2 metricsExist:(char *)arg3;
- (struct CGPoint)positionOfGlyph:(unsigned int)arg1 struckOverGlyph:(unsigned int)arg2 metricsExist:(char *)arg3;
- (long long)positionsForCompositeSequence:(unsigned int *)arg1 numberOfGlyphs:(long long)arg2 pointArray:(struct CGPoint *)arg3;
- (struct CGPoint)positionOfGlyph:(unsigned int)arg1 precededByGlyph:(unsigned int)arg2 isNominal:(char *)arg3;
- (unsigned long long)glyphPacking;
- (id)encodingScheme;
- (double)_baselineOffsetForUILayout;
- (double)_defaultLineHightForUILayout;
- (double)defaultLineHeightForFont;
- (BOOL)glyphIsEncoded:(unsigned int)arg1;
- (id)afmDictionary;
- (BOOL)isBaseFont;
- (double)widthOfString:(id)arg1;
- (void)_applyToCGContext:(struct CGContext *)arg1 graphicsContext:(id)arg2;
- (id)fontWithSize:(double)arg1;
- (id)fontForAppearance:(id)arg1;
- (id)preferredFallbackFontForLanguage:(id)arg1;
- (id)baseFontForSingleLineModeCell:(id)arg1;
- (void)getVerticalOriginTranslations:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
@property(readonly, getter=isVertical) BOOL vertical;
@property(readonly, copy) NSFont *verticalFont;
- (unsigned long long)getCaretPositions:(double *)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned long long)arg3;
- (id)bestMatchingFontForCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned long long *)arg4;
- (id)nameOfGlyph:(unsigned int)arg1;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (id)lastResortFont;
- (const void *)ctFontRef;
- (id)initWithCoder:(id)arg1;
- (Class)classForKeyedArchiver;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned long long)renderingMode;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (id)screenFont;
- (id)printerFont;
- (void)setInContext:(id)arg1;
- (void)set;
- (void)getAdvancements:(struct CGSize *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (void)getAdvancements:(struct CGSize *)arg1 forPackedGlyphs:(const void *)arg2 length:(unsigned long long)arg3;
- (void)getAdvancements:(struct CGSize *)arg1 forGlyphs:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect *)arg1 forCGGlyphs:(const unsigned short *)arg2 count:(unsigned long long)arg3;
- (void)getBoundingRects:(struct CGRect *)arg1 forGlyphs:(const unsigned int *)arg2 count:(unsigned long long)arg3;
- (struct CGSize)advancementForGlyph:(unsigned int)arg1;
- (struct CGSize)advancementForCGGlyph:(unsigned short)arg1;
- (struct CGRect)boundingRectForGlyph:(unsigned int)arg1;
- (struct CGRect)boundingRectForCGGlyph:(unsigned short)arg1;
- (unsigned long long)traits;
@property(readonly, getter=isFixedPitch) BOOL fixedPitch;
@property(readonly) double xHeight;
@property(readonly) double capHeight;
@property(readonly) double italicAngle;
@property(readonly) double underlineThickness;
@property(readonly) double underlinePosition;
- (double)lineHeight;
@property(readonly) double leading;
@property(readonly) double descender;
@property(readonly) double ascender;
@property(readonly) struct CGSize maximumAdvancement;
@property(readonly) struct CGRect boundingRectForFont;
@property(readonly) NSCharacterSet *coveredCharacterSet;
- (unsigned int)glyphWithName:(id)arg1;
@property(readonly) unsigned long long mostCompatibleStringEncoding;
@property(readonly) unsigned long long numberOfGlyphs;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, copy) NSAffineTransform *textTransform;
@property(readonly) NSFontDescriptor *fontDescriptor;
- (id)_safeFontDescriptor;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSString *familyName;
@property(readonly) const double *matrix;
@property(readonly) double pointSize;
@property(readonly, copy) NSString *fontName;
- (id)initWithBaseFont:(id)arg1;
- (id)initWithInstanceInfo:(id)arg1 renderingMode:(unsigned long long)arg2;
- (BOOL)_usesAppearanceFontSize;
- (unsigned long long)_metaType;
- (_Bool)_getLatin1Glyphs:(const unsigned short **)arg1 advanceWidths:(const double **)arg2;
- (BOOL)_hasColorGlyphs;
- (id)_similarFontWithName:(id)arg1;
- (double)_totalAdvancementForNativeGlyphs:(const unsigned short *)arg1 count:(long long)arg2;
- (struct CGAffineTransform)_textMatrixTransformForContext:(id)arg1;
- (id)_kernOverride;
- (const unsigned short *)_latin1MappingTable:(_Bool *)arg1;
- (unsigned int)_atsFontID;
- (struct CGFont *)_backingCGSFont;
- (double)_leading;
- (double)_descenderDeltaForBehavior:(long long)arg1;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (double)_baseLineHeightForFont:(BOOL)arg1;
- (double)_defaultLineHeightForUILayout;
- (id)_sharedFontInstanceInfo;
- (BOOL)_hasNonNominalDescriptor;
- (BOOL)_isIdealMetricsOnly;
- (BOOL)_isHiraginoFont;
- (BOOL)_isDefaultFace;
- (BOOL)__isSystemFont;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;

@end

