//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSArray;

@interface SGStringPreprocessingTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methods;
}

+ (id)withMethods:(id)arg1;
- (void).cxx_destruct;
- (void)transformFullwidthToHalfwidth:(id)arg1;
- (void)removeSymbolsWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)removeSymbols:(id)arg1;
- (void)removePunctuationWithExceptions:(id)arg1 withValue:(id)arg2;
- (void)replaceAllWhitespaceWithSpaces:(id)arg1;
- (void)stripCombiningMarks:(id)arg1;
- (void)decomposeStringWithCompatibilityMapping:(id)arg1;
- (void)removeNonBasicMultilingualPlane:(id)arg1;
- (void)trimWhitespace:(id)arg1;
- (void)replaceLinksWithString:(id)arg1 withValue:(id)arg2;
- (void)mergeAnyConsecutiveCharacters:(id)arg1;
- (void)mergeTwoOrMoreConsecutiveCharacters:(id)arg1;
- (void)replaceNumbersWithString:(id)arg1 withValue:(id)arg2;
- (void)mergeNumbersSeparatedByWhitespace:(id)arg1;
- (void)removeDuplicateWhitespace:(id)arg1;
- (void)removeSpacingModifierLetters:(id)arg1;
- (void)removeNonBaseCharacters:(id)arg1;
- (void)removePunctuation:(id)arg1;
- (void)removeNonASCII:(id)arg1;
- (void)replaceCharactersWithSpaces:(id)arg1 withValue:(id)arg2;
- (void)removeCharacters:(id)arg1 withValue:(id)arg2;
- (void)separateCharacter:(id)arg1 withValue:(id)arg2;
- (void)lowerCase:(id)arg1;
- (void)replaceMatchesInString:(id)arg1 withPattern:(id)arg2 withTemplate:(id)arg3;
- (id)valueForMethod:(id)arg1;
- (id)prefixForMethod:(id)arg1;
- (void)preprocess:(id)arg1 withMethod:(id)arg2;
- (id)transform:(id)arg1;
- (id)initWithMethods:(id)arg1;

@end

