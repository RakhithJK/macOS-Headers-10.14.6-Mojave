//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

@interface OADTextBody : NSObject
{
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (void).cxx_destruct;
- (id)description;
- (id)plainText;
- (BOOL)isSimilarToTextBody:(id)arg1;
- (BOOL)propagateActualTextStyleToTextListStyle;
- (void)removeUnnecessaryOverrides;
- (void)flattenProperties;
- (BOOL)isEmpty;
- (void)removeLastParagraphIfEmpty;
- (void)removeLeadingNewlines;
- (void)removeTrailingNewlines;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(BOOL)arg2;
- (void)setParentTextListStyle:(id)arg1;
- (void)applyTextListStyle:(id)arg1;
- (id)overrideTextListStyle;
- (id)textListStyle;
- (id)firstParagraphEffects;
- (unsigned long long)newLineCount;
- (void)removeAllParagraphs;
- (id)addParagraph;
- (id)paragraphAtIndex:(unsigned long long)arg1;
- (unsigned long long)nonEmptyParagraphCount;
- (unsigned long long)paragraphCount;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)init;
- (void)addParagraphsFromTextBody:(id)arg1;
- (id)findFirstTextRunOfClass:(Class)arg1;

@end
