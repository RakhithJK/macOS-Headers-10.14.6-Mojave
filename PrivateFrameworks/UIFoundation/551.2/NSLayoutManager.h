//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>

@class CUIStyleEffectConfiguration, NSArray, NSBox, NSFont, NSGlyphGenerator, NSMutableArray, NSParagraphArbitrator, NSRunStorage, NSSortedArray, NSStorage, NSTabWell, NSTextContainer, NSTextStorage, NSTextView, NSTypesetter;
@protocol NSLayoutManagerDelegate;

@interface NSLayoutManager : NSObject <NSCoding>
{
    NSTextStorage *_textStorage;
    NSGlyphGenerator *_glyphGenerator;
    NSTypesetter *_typesetter;
    NSMutableArray *_textContainers;
    NSStorage *_containerUsedRects;
    NSStorage *_glyphs;
    NSRunStorage *_containerRuns;
    NSRunStorage *_fragmentRuns;
    NSRunStorage *_glyphLocations;
    NSRunStorage *_glyphRotationRuns;
    struct CGRect _extraLineFragmentRect;
    struct CGRect _extraLineFragmentUsedRect;
    NSTextContainer *_extraLineFragmentContainer;
    NSSortedArray *_glyphHoles;
    NSSortedArray *_layoutHoles;
    struct __lmFlags {
        unsigned int containersAreFull:1;
        unsigned int glyphsMightDrawOutsideLines:1;
        unsigned int backgroundLayoutEnabled:1;
        unsigned int resizingInProgress:1;
        unsigned int allowScreenFonts:1;
        unsigned int cachedRectArrayInUse:1;
        unsigned int displayInvalidationInProgress:1;
        unsigned int insertionPointNeedsUpdate:1;
        unsigned int layoutManagerInDirtyList:1;
        unsigned int originalFontOverride:1;
        unsigned int showInvisibleCharacters:1;
        unsigned int showControlCharacters:1;
        unsigned int delegateRespondsToDidInvalidate:1;
        unsigned int delegateRespondsToDidComplete:1;
        unsigned int glyphFormat:2;
        unsigned int textStorageRespondsToIsEditing:1;
        unsigned int notifyEditedInProgress:1;
        unsigned int containersChanged:1;
        unsigned int isGeneratingGlyphs:1;
        unsigned int hasNonGeneratedGlyphData:1;
        unsigned int inBackgroundLayout:1;
        unsigned int syncAlignmentToDirection:1;
        unsigned int defaultAttachmentScaling:2;
        unsigned int usesFontLeading:1;
        unsigned int seenRightToLeft:1;
        unsigned int ignoresViewTransformations:1;
        unsigned int needToFlushGlyph:1;
        unsigned int flipsIfNeeded:1;
        unsigned int allowNonContig:1;
        unsigned int useNonContig:1;
    } _lmFlags;
    id _delegate;
    unsigned short _textViewResizeDisableStack;
    unsigned short _displayInvalidationDisableStack;
    struct _NSRange _deferredDisplayCharRange;
    NSTextView *_firstTextView;
    struct CGRect *_cachedRectArray;
    unsigned long long _cachedRectArrayCapacity;
    char *_glyphBuffer;
    unsigned long long _glyphBufferSize;
    struct _NSRange _cachedLocationNominalGlyphRange;
    unsigned long long _cachedLocationGlyphIndex;
    struct CGPoint _cachedLocation;
    struct _NSRange _cachedFontCharRange;
    NSFont *_cachedFont;
    unsigned long long _firstUnlaidGlyphIndex;
    unsigned long long _firstUnlaidCharIndex;
    NSBox *_rulerAccView;
    id _rulerAccViewAlignmentButtons;
    id _rulerAccViewSpacing;
    NSTabWell *_rulerAccViewLeftTabWell;
    NSTabWell *_rulerAccViewRightTabWell;
    NSTabWell *_rulerAccViewCenterTabWell;
    NSTabWell *_rulerAccViewDecimalTabWell;
    id _rulerAccViewStyles;
    id _rulerAccViewLists;
    struct _NSRange _newlyFilledGlyphRange;
    id _extraData;
}

+ (BOOL)_showsControlCharacters;
+ (BOOL)_showsInvisibleCharacters;
+ (BOOL)_ignoresViewTransformations;
+ (BOOL)_usesScreenFonts;
+ (void)initialize;
+ (void)_doSomeBackgroundLayout;
+ (BOOL)_inBackgroundLayout;
+ (id)_defaultLinkAttributes;
- (void)showAttachmentCell:(id)arg1 inRect:(struct CGRect)arg2 characterIndex:(unsigned long long)arg3;
- (void)underlineGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 lineFragmentRect:(struct CGRect)arg3 lineFragmentGlyphRange:(struct _NSRange)arg4 containerOrigin:(struct CGPoint)arg5;
- (void)strikethroughGlyphRange:(struct _NSRange)arg1 strikethroughType:(long long)arg2 lineFragmentRect:(struct CGRect)arg3 lineFragmentGlyphRange:(struct _NSRange)arg4 containerOrigin:(struct CGPoint)arg5;
- (void)drawStrikethroughForGlyphRange:(struct _NSRange)arg1 strikethroughType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)drawUnderlineForGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)fillBackgroundRectArray:(const struct CGRect *)arg1 count:(unsigned long long)arg2 forCharacterRange:(struct _NSRange)arg3 color:(id)arg4;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(id)arg5 attributes:(id)arg6 inContext:(id)arg7;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)enumerateEnclosingRectsForCharacterRange:(struct _NSRange)arg1 withinSelectedCharacterRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange)arg1 withinSelectedGlyphRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateLineFragmentsForGlyphRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setSynchronizesAlignmentToDirection:(BOOL)arg1;
- (BOOL)synchronizesAlignmentToDirection;
@property BOOL usesFontLeading;
- (double)defaultBaselineOffsetForFont:(id)arg1;
- (double)defaultLineHeightForFont:(id)arg1;
- (id)substituteFontForFont:(id)arg1;
- (id)_temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(struct _NSRange)arg3;
- (void)addTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)setTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned long long)arg1 alternatePositions:(BOOL)arg2 inDisplayOrder:(BOOL)arg3 positions:(double *)arg4 characterIndexes:(unsigned long long *)arg5;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(double *)arg3;
- (unsigned long long)glyphIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(double *)arg3;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2;
- (unsigned long long)glyphIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2;
- (struct _NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(struct CGRect)arg1 inTextContainer:(id)arg2;
- (struct _NSRange)glyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2;
- (struct CGRect)boundingRectForGlyphRange:(struct _NSRange)arg1 inTextContainer:(id)arg2;
- (struct CGRect *)rectArrayForGlyphRange:(struct _NSRange)arg1 withinSelectedGlyphRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long *)arg4;
- (struct CGRect *)rectArrayForCharacterRange:(struct _NSRange)arg1 withinSelectedCharacterRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long *)arg4;
- (struct _NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned long long)arg1;
- (struct _NSRange)glyphRangeForTextContainer:(id)arg1;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct CGRect)boundsRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct CGRect)layoutRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct CGRect)boundsRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange)arg2;
- (struct CGRect)layoutRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange)arg2;
- (void)setBoundsRect:(struct CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange)arg3;
- (void)setLayoutRect:(struct CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange)arg3;
- (struct _NSRange)truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned long long)arg1;
- (struct CGSize)attachmentSizeForGlyphAtIndex:(unsigned long long)arg1;
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)arg1;
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned long long)arg1;
- (struct CGPoint)locationForGlyphAtIndex:(unsigned long long)arg1;
@property(readonly) NSTextContainer *extraLineFragmentTextContainer;
@property(readonly) struct CGRect extraLineFragmentUsedRect;
@property(readonly) struct CGRect extraLineFragmentRect;
- (struct CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 allowLayout:(BOOL)arg3;
- (struct CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (struct CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (struct CGRect)usedRectForTextContainer:(id)arg1;
- (id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (void)getFirstUnlaidCharacterIndex:(unsigned long long *)arg1 glyphIndex:(unsigned long long *)arg2;
- (unsigned long long)firstUnlaidGlyphIndex;
- (unsigned long long)firstUnlaidCharacterIndex;
- (void)setEllipsisGlyphAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setLocations:(struct CGPoint *)arg1 startingGlyphIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3 forGlyphRange:(struct _NSRange)arg4;
- (void)setLocation:(struct CGPoint)arg1 forStartOfGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 forStartOfGlyphRange:(struct _NSRange)arg2 coalesceRuns:(BOOL)arg3;
- (void)setExtraLineFragmentRect:(struct CGRect)arg1 usedRect:(struct CGRect)arg2 textContainer:(id)arg3;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3;
- (void)setTextContainer:(id)arg1 forGlyphRange:(struct _NSRange)arg2;
- (unsigned long long)getGlyphs:(unsigned int *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(char *)arg5 bidiLevels:(char *)arg6;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(char *)arg5;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (long long)propertyForGlyphAtIndex:(unsigned long long)arg1;
- (long long)intAttribute:(long long)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (unsigned long long)glyphIndexForCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)characterIndexForGlyphAtIndex:(unsigned long long)arg1;
- (BOOL)isValidGlyphIndex:(unsigned long long)arg1;
- (unsigned int)glyphAtIndex:(unsigned long long)arg1;
- (unsigned int)glyphAtIndex:(unsigned long long)arg1 isValidIndex:(char *)arg2;
- (unsigned short)CGGlyphAtIndex:(unsigned long long)arg1;
- (unsigned short)CGGlyphAtIndex:(unsigned long long)arg1 isValidIndex:(char *)arg2;
@property(readonly) unsigned long long numberOfGlyphs;
- (void)setGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5;
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(struct _NSRange)arg1;
- (void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3;
- (void)setCharacterIndex:(unsigned long long)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (void)_primitiveDeleteGlyphsInRange:(struct _NSRange)arg1;
- (void)replaceGlyphAtIndex:(unsigned long long)arg1 withGlyph:(unsigned int)arg2;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)insertGlyphs:(const unsigned int *)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4;
- (void)ensureLayoutForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2;
- (void)ensureLayoutForTextContainer:(id)arg1;
- (void)ensureLayoutForGlyphRange:(struct _NSRange)arg1;
- (void)ensureLayoutForCharacterRange:(struct _NSRange)arg1;
- (void)ensureGlyphsForGlyphRange:(struct _NSRange)arg1;
- (void)ensureGlyphsForCharacterRange:(struct _NSRange)arg1;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
- (void)invalidateDisplayForGlyphRange:(struct _NSRange)arg1;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;
- (void)_primitiveInvalidateDisplayForGlyphRange:(struct _NSRange)arg1;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange)arg1 isSoft:(BOOL)arg2 actualCharacterRange:(struct _NSRange *)arg3;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (void)invalidateGlyphsForCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2 actualCharacterRange:(struct _NSRange *)arg3;
- (void)_invalidateGlyphsForCharacterRange:(struct _NSRange)arg1 editedCharacterRange:(struct _NSRange)arg2 changeInLength:(long long)arg3 actualCharacterRange:(struct _NSRange *)arg4;
@property BOOL limitsLayoutForSuspiciousContents;
- (BOOL)backgroundColorProvidesOpaqueSurface;
- (unsigned long long)layoutOptions;
@property long long typesetterBehavior;
@property unsigned long long defaultAttachmentScaling;
@property float hyphenationFactor;
@property BOOL showsControlCharacters;
@property BOOL showsInvisibleCharacters;
- (void)setUsesScreenFonts:(BOOL)arg1;
- (BOOL)usesScreenFonts;
@property BOOL backgroundLayoutEnabled;
@property(readonly) BOOL hasNonContiguousLayout;
- (void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 integerOffsetPerLineEstimate:(unsigned long long)arg2;
- (void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 offsetPerLineEstimate:(double)arg2;
@property BOOL allowsNonContiguousLayout;
- (void)textContainerChangedTextView:(id)arg1 fromTextView:(id)arg2;
- (void)textContainerChangedTextView:(id)arg1;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)removeTextContainerAtIndex:(unsigned long long)arg1;
- (void)insertTextContainer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTextContainer:(id)arg1;
- (struct _NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)arg1;
@property(readonly) NSArray *textContainers;
@property __weak id <NSLayoutManagerDelegate> delegate;
@property(retain) NSTypesetter *typesetter;
- (void)_setGlyphGenerator:(id)arg1;
- (void)setGlyphGenerator:(id)arg1;
- (id)_glyphGenerator;
- (id)glyphGenerator;
- (void)replaceTextStorage:(id)arg1;
@property NSTextStorage *textStorage;
- (id)attributedString;
- (id)description;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_commonInit;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (id)renderingColorForDocumentColor:(id)arg1;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (long long)applicationFrameworkContext;
- (void)setUnderlineColorForSpelling:(id)arg1;
- (id)underlineColorForSpelling;
- (void)setUnderlineColorForTextAlternatives:(id)arg1;
- (id)underlineColorForTextAlternatives;
- (struct CGRect)prepareLayoutForBoundingRect:(struct CGRect)arg1 textContainer:(id)arg2;
@property(readonly, getter=isScrolling) BOOL scrolling;
- (void)endScrollingForView:(id)arg1 textContainer:(id)arg2;
- (void)beginScrollingForView:(id)arg1 textContainer:(id)arg2;
- (void)setViewProvider:(id)arg1 forTextAttachment:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)viewProviderForTextAttachment:(id)arg1 characterIndex:(unsigned long long)arg2;
@property(copy) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property(retain) NSParagraphArbitrator *paragraphArbitrator;
- (void)_setTextContainer:(id)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)_setExtraLineFragmentRect:(struct CGRect)arg1 usedRect:(struct CGRect)arg2 textContainer:(id)arg3;
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;
- (void)showAttachment:(id)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterIndex:(unsigned long long)arg4;
- (void)_setForcesTrackingFloor:(BOOL)arg1;
- (BOOL)_forcesTrackingFloor;
- (void)_setMirrorsTextAlignment:(BOOL)arg1;
- (BOOL)_mirrorsTextAlignment;
- (BOOL)_drawsDebugBaselines;
- (void)_setDrawsDebugBaselines:(BOOL)arg1;
- (BOOL)_drawsUnderlinesLikeWebKit;
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)arg1;
- (id)_selectionRangesForInsertionPointRange:(struct _NSRange)arg1;
- (long long)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned long long)arg1 inDisplayOrder:(BOOL)arg2 positions:(double **)arg3 characterIndexes:(unsigned long long **)arg4 count:(unsigned long long *)arg5 alternatePositions:(double **)arg6 characterIndexes:(unsigned long long **)arg7 count:(unsigned long long *)arg8;
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned long long)arg1;
- (void)_setAlwaysDrawsActive:(BOOL)arg1;
- (BOOL)_alwaysDrawsActive;
- (void)setIgnoresAntialiasThreshold:(BOOL)arg1;
- (BOOL)ignoresAntialiasThreshold;
- (void)setIgnoresViewTransformations:(BOOL)arg1;
- (BOOL)ignoresViewTransformations;
- (void)setBaselineOffset:(double)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (double)baselineOffsetForGlyphAtIndex:(unsigned long long)arg1;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (void)setFlipsIfNeeded:(BOOL)arg1;
- (BOOL)flipsIfNeeded;
- (BOOL)_hasSeenRightToLeft;
- (void)_setHasSeenRightToLeft:(BOOL)arg1;
@property BOOL allowsOriginalFontMetricsOverride;
- (void)_clearTemporaryAttributesForCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)_clearTemporaryAttributes;
- (void)_clearCurrentAttachmentSettings;
- (void)_setCurrentAttachmentRect:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (unsigned long long)_currentAttachmentIndex;
- (struct CGRect)_currentAttachmentRect;
- (id)_attachmentSizesRun;
- (void)_promoteGlyphStoreToFormat:(unsigned long long)arg1;
- (void)_insertGlyphs:(unsigned int *)arg1 elasticAttributes:(char *)arg2 count:(unsigned long long)arg3 atGlyphIndex:(unsigned long long)arg4 characterIndex:(unsigned long long)arg5;
- (void)_simpleDeleteGlyphsInRange:(struct _NSRange)arg1;
- (void)_simpleInsertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 elastic:(BOOL)arg4;
- (void)_setNeedToFlushGlyph:(BOOL)arg1;
- (BOOL)_needToFlushGlyph;
- (unsigned int)_glyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long *)arg2 glyphInscription:(unsigned long long *)arg3 isValidIndex:(char *)arg4;
- (double)_rotationForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)_setRotation:(double)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)_drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2 parameters:(struct _NSDrawingParameters *)arg3;
- (void)_drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (char *)_packedGlyphs:(unsigned long long)arg1 range:(struct _NSRange)arg2 length:(unsigned long long *)arg3;
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)_drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)_firstTextViewChanged;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange)arg1 isSoft:(BOOL)arg2;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange)arg1 isSoft:(BOOL)arg2 invalidateUsage:(BOOL)arg3;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2 includeBlocks:(BOOL)arg3;
- (unsigned long long)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(BOOL)arg2;
- (struct _NSRange)_glyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 okToFillHoles:(BOOL)arg4;
- (struct _NSRange)_firstPassGlyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2 okToFillHoles:(BOOL)arg3;
- (struct _NSRange)_firstPassGlyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2 hintGlyphRange:(struct _NSRange)arg3 okToFillHoles:(BOOL)arg4;
- (struct CGRect)_boundingRectForGlyphRange:(struct _NSRange)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 fullLineRectsOnly:(BOOL)arg4;
- (struct CGRect *)_rectArrayForRange:(struct _NSRange)arg1 withinSelectionRange:(struct _NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long *)arg7 rangeWithinContainer:(struct _NSRange *)arg8 glyphsDrawOutsideLines:(char *)arg9;
- (struct CGRect *)_rectArrayForRange:(struct _NSRange)arg1 withinSelectionRange:(struct _NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long *)arg7 rangeWithinContainer:(struct _NSRange *)arg8 glyphsDrawOutsideLines:(char *)arg9 rectArray:(struct CGRect *)arg10 rectArrayCapacity:(unsigned long long)arg11;
- (void)_growCachedRectArrayToSize:(unsigned long long)arg1;
- (void)_fixSelectionAfterChangeInCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (id)_selectedRanges;
- (void)_resizeTextViewForTextContainer:(id)arg1;
- (void)_invalidateDisplayIfNeeded;
- (void)_invalidateInsertionPoint;
- (struct _NSStoredContainerUsage *)_validatedStoredUsageForTextContainerAtIndex:(unsigned long long)arg1;
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned long long)arg1;
- (void)_invalidateUsageForTextContainersInRange:(struct _NSRange)arg1;
- (void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(struct CGRect)arg2;
- (id)_blockDescription;
- (id)_layoutTreeDescription;
- (id)_glyphTreeDescription;
- (id)_layoutHoleDescription;
- (id)_glyphHoleDescription;
- (id)_glyphDescription;
- (id)_glyphDescriptionForGlyphRange:(struct _NSRange)arg1;
- (id)_glyphLocationDescription;
- (id)_lineFragmentDescription;
- (id)_lineFragmentDescription:(BOOL)arg1;
- (id)_lineFragmentDescriptionForGlyphRange:(struct _NSRange)arg1 includeGlyphLocations:(BOOL)arg2;
- (id)_containerDescription;
- (void)_markSelfAsDirtyForBackgroundLayout:(id)arg1;
- (struct _NSRange)_primitiveGlyphRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)_primitiveCharacterRangeForGlyphRange:(struct _NSRange)arg1;
- (struct _NSRange)_glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2 okToFillHoles:(BOOL)arg3;
- (unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (void)_fillLayoutHoleAtIndex:(unsigned long long)arg1 desiredNumberOfLines:(unsigned long long)arg2;
- (void)_fillLayoutHoleForCharacterRange:(struct _NSRange)arg1 desiredNumberOfLines:(unsigned long long)arg2 isSoft:(BOOL)arg3;
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned long long)arg1;
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned long long)arg1 nextGlyphIndex:(unsigned long long *)arg2;
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned long long)arg1 forCharacterRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 lineLimit:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long *)arg5;
- (void)_fillGlyphHoleForCharacterRange:(struct _NSRange)arg1 startGlyphIndex:(unsigned long long)arg2 desiredNumberOfCharacters:(unsigned long long)arg3;
- (void)_fillGlyphHoleAtIndex:(unsigned long long)arg1 desiredNumberOfCharacters:(unsigned long long)arg2;
- (BOOL)_canDoLayout;
- (void)_adjustCharacterIndicesForRawGlyphRange:(struct _NSRange)arg1 byDelta:(long long)arg2;
- (struct _NSRange)_extendedCharRangeForInvalidation:(struct _NSRange)arg1 editedCharRange:(struct _NSRange)arg2;
- (void)_setRowArrayCache:(id)arg1;
- (id)_rowArrayCache;
- (struct _NSRange)_blockRowRangeForGlyphRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRowRangeForGlyphRange:(struct _NSRange)arg1 completeRows:(char *)arg2;
- (struct _NSRange)_blockRowRangeForCharRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRowRangeForCharRange:(struct _NSRange)arg1 completeRows:(char *)arg2;
- (struct _NSRange)_blockRangeForGlyphRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRangeForCharRange:(struct _NSRange)arg1;
- (void)_mergeLayoutHoles;
- (void)_mergeGlyphHoles;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (id)layoutFragmentsForReplacingCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2 rect:(struct CGRect)arg3 textContainer:(id)arg4;
- (id)destinationTextContainerForRange:(struct _NSRange)arg1 inTextContainer:(id)arg2;
- (id)firstTextView;
- (id)textViewForBeginningOfSelection;
- (void)_lineGlyphRange:(struct _NSRange)arg1 type:(long long)arg2 lineFragmentRect:(struct CGRect)arg3 lineFragmentGlyphRange:(struct _NSRange)arg4 containerOrigin:(struct CGPoint)arg5 isStrikethrough:(BOOL)arg6;
- (void)_drawLineForGlyphRange:(struct _NSRange)arg1 type:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6 isStrikethrough:(BOOL)arg7;
- (void)_drawLineForGlyphRange:(struct _NSRange)arg1 inContext:(struct CGContext *)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(struct CGPoint)arg7 breakForDescenders:(BOOL)arg8;
- (void)_drawLineForGlyphRange:(struct _NSRange)arg1 inContext:(struct CGContext *)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(struct CGPoint)arg7 breakForDescenders:(BOOL)arg8 flipped:(BOOL)arg9;
- (void)drawSpellingUnderlineForGlyphRange:(struct _NSRange)arg1 spellingState:(long long)arg2 inGlyphRange:(struct _NSRange)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)_showAttachmentCell:(id)arg1 inRect:(struct CGRect)arg2 characterIndex:(unsigned long long)arg3;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (id)_rulerAccView;
- (id)_rulerHelper;

@end

