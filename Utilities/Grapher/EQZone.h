//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface EQZone : NSObject <NSCoding, NSCopying>
{
    EQZone *mParent;
    struct CGPoint mPositionInParentFrame;
    NSMutableArray *mContent;
    NSMutableDictionary *mAttributes;
    struct CGSize mSize;
    double mCenterLine;
    struct _EQDepth mDepth;
    BOOL _isHighlighted;
    unsigned long long mEditCount;
    BOOL mUpdateContent;
}

+ (id)anyZoneFromText:(id)arg1;
+ (id)zoneFromText:(id)arg1;
+ (id)zoneFromText:(id)arg1 forFormat:(unsigned long long)arg2;
+ (unsigned long long)textFormats;
+ (id)zoneWithSelection:(id)arg1;
+ (id)zonePasteboardTypes;
+ (id)zoneWithPasteboard:(id)arg1;
+ (BOOL)canInitWithPasteboard:(id)arg1;
+ (id)defaultAttributes;
+ (void)setDefaultAttributes:(id)arg1;
- (id)treeWithOutlinedChars;
- (BOOL)containsOutlinedChar;
- (BOOL)contains:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendTextToString:(id)arg1;
- (void)appendOperationToString:(id)arg1;
- (void)appendToString:(id)arg1 info:(id)arg2;
- (id)getWordString;
- (id)stringForRange:(struct _NSRange)arg1;
- (id)string;
- (id)purged;
- (id)concatenationWithout:(unsigned long long)arg1;
- (BOOL)shallConcatenate:(unsigned long long)arg1;
- (BOOL)shallConcatenateIfBackspace:(unsigned long long)arg1;
- (BOOL)isScriptWithPosition:(unsigned long long)arg1;
- (void)convertFirstCorner:(struct CGPoint)arg1 secondCorner:(struct CGPoint)arg2 toLine:(id *)arg3 firstIndex:(unsigned long long *)arg4 secondIndex:(unsigned long long *)arg5;
- (BOOL)canTab:(id *)arg1 back:(BOOL)arg2;
- (id)lineAbove:(BOOL)arg1;
- (id)lineLeft:(BOOL)arg1;
- (BOOL)selectionCanEnter:(BOOL)arg1 line:(id *)arg2;
- (id)parentLineOf:(id)arg1 index:(unsigned long long *)arg2;
- (void)drawSelfInRect:(struct CGRect)arg1;
- (void)drawAtPosition:(struct CGPoint)arg1 range:(struct _NSRange)arg2;
- (id)color;
- (void)drawAtPosition:(struct CGPoint)arg1;
- (struct CGSize)size;
- (BOOL)validSize;
- (void)setSize:(struct CGSize)arg1;
- (void)calcSize;
- (id)font;
- (id)customFont;
- (double)fontSize;
- (double)fontSizeWithDefaultFontSize:(double)arg1;
- (double)defaultFontSize;
- (id)userDefaultForKey:(id)arg1;
- (double)minHeight;
- (double)minWidth;
- (void)addMargins:(struct CGRect *)arg1;
- (void)offsetContent:(struct CGSize)arg1;
- (void)adjustContentPosition;
- (void)setContentPosition;
- (void)insertLine:(id)arg1 atIndex:(unsigned long long *)arg2;
- (void)insertZones:(id)arg1 atIndex:(unsigned long long *)arg2;
- (void)insertZone:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setContent:(id)arg1;
- (id)detachRange:(struct _NSRange)arg1;
- (void)refresh;
- (void)contentDidChange;
- (id)content;
- (void)endEditing;
- (void)startEditing;
- (void)updateDepth;
- (void)setDepth:(struct _EQDepth)arg1;
- (struct _EQDepth)depth;
- (void)setCenterLine:(double)arg1;
- (double)centerLine;
- (BOOL)positionIsInside:(struct CGPoint)arg1 inRightPart:(char *)arg2;
- (BOOL)positionIsInside:(struct CGPoint)arg1;
- (void)localPosition:(struct CGPoint *)arg1;
- (void)globalPosition:(struct CGPoint *)arg1;
- (void)setPositionInParentFrame:(struct CGPoint)arg1;
- (struct CGPoint)positionInParentFrame;
- (void)setParent:(id)arg1;
- (id)parentEquation;
- (id)parent;
- (void)dealloc;
- (id)initWithZones:(id)arg1;
- (id)initWithParent:(id)arg1;
- (long long)contentLeft:(BOOL)arg1 content:(unsigned long long)arg2;
- (id)lineLeft:(BOOL)arg1 content:(unsigned long long)arg2;
- (long long)contentAbove:(BOOL)arg1 content:(unsigned long long)arg2;
- (id)lineAbove:(BOOL)arg1 content:(unsigned long long)arg2;
- (unsigned long long)contentToSelectAfterCreation:(BOOL)arg1;
- (id)lineToSelectAfterCreation:(BOOL)arg1;
- (BOOL)acceptsVoidContentForFormat:(unsigned long long)arg1;
- (BOOL)acceptsVoidContent;
- (BOOL)onlyFactorForFormat:(unsigned long long)arg1;
- (BOOL)onlyFactor;
- (void)finishZoneForFormat:(unsigned long long)arg1;
- (BOOL)scanner:(id)arg1 scanHeaderForFormat:(unsigned long long)arg2;
- (id)headerForFormat:(unsigned long long)arg1;
- (BOOL)removeHeaderFromText:(id)arg1 elements:(unsigned long long *)arg2 forFormat:(unsigned long long)arg3;
- (unsigned long long)elementsForFormat:(unsigned long long)arg1;
- (unsigned long long)elements;
- (id)separatorForFormat:(unsigned long long)arg1 forFormat:(unsigned long long)arg2;
- (id)separatorForFormat:(unsigned long long)arg1;
- (id)separator;
- (id)suffixForFormat:(unsigned long long)arg1;
- (id)suffix;
- (id)prefixForFormat:(unsigned long long)arg1;
- (id)prefix;
- (BOOL)isHighlighted;
- (void)setIsHighlighted:(BOOL)arg1;
- (id)bracketLaTeXSign:(id)arg1;
- (id)LaTeXExpression;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)removeAttributes;
- (void)setAttribute:(id)arg1 to:(id)arg2;
- (id)attribute:(id)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributes;

@end

