//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (TIExtras)
+ (id)stringWithUnichar:(unsigned int)arg1;
+ (BOOL)_string:(id)arg1 matchesString:(id)arg2;
+ (struct USet *)_fullwidthLettersAndSymbolsSet;
+ (struct USet *)_nonFullwidthLettersAndNumbersSet;
+ (struct USet *)_fullwidthLettersAndNumbersSet;
+ (struct USet *)_bopomofoToneSet;
+ (struct USet *)_bopomofoSet;
+ (struct USet *)_ideographSet;
+ (struct USet *)_nonJapaneseLetterSet;
+ (struct USet *)_japaneseLetterSet;
+ (struct USet *)_hiraganaSet;
+ (struct USet *)_nonHiraganaKatakanaOrBopomofoSet;
+ (struct USet *)_nonKatakanaOrKanjiSet;
+ (struct USet *)_nonHiraganaOrKatakanaSet;
+ (struct USet *)_nonIdeographicCharacterSet;
+ (struct USet *)_characterSetWithPattern:(id)arg1;
+ (id)_stringWithUnichar:(unsigned int)arg1;
- (unsigned long long)_indexFromStartingIndex:(unsigned long long)arg1 byIncrementingComposedCharacterSequenceCount:(unsigned long long)arg2;
- (unsigned long long)editDistanceFrom:(id)arg1;
- (BOOL)containsSubstring:(id)arg1;
- (BOOL)isNaturallyRTL;
- (BOOL)looksLikeURL;
- (BOOL)looksLikeNumberInput;
- (BOOL)looksLikeEmailAddress;
- (BOOL)isTripledPunctuation;
- (BOOL)isDelete;
- (BOOL)isNewlineOrReturn;
- (BOOL)isSpaceOrReturn;
- (BOOL)isSpace;
- (BOOL)isPlainSpace;
- (BOOL)isLeftAssociative;
- (BOOL)endsSentence;
- (id)stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)stringByTrimmingLastCharacter;
- (id)stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (id)_stringByComposingDiacriticsLogicalOrder:(BOOL)arg1 allowedCharacters:(CDUnknownBlockType)arg2;
- (unsigned long long)_editDistanceFrom:(id)arg1;
- (BOOL)_containsSubstring:(id)arg1;
- (id)_stringByTransliteratingToZhuyinAsFamilyName;
- (id)_stringByTransliteratingToZhuyin;
- (id)_stringByTransliteratingToZhuyin:(BOOL)arg1;
- (id)_stringByTransliteratingToPinyinAsFamilyName;
- (id)_stringByTransliteratingToPinyin;
- (id)_stringByTransliteratingToPinyin:(BOOL)arg1;
- (id)_stringByApplyingTransform:(id)arg1;
- (id)_stringByTranscribingUsingTokenizer:(struct __CFStringTokenizer *)arg1;
- (id)_stringByTranscribingFromLanguage:(id)arg1;
- (id)_stringByConvertingFromFullWidthToHalfWidth;
- (id)_stringByConvertingFromHalfWidthToFullWidth;
- (BOOL)_shouldBePaddedWithSpaces;
- (BOOL)_containsFullwidthLettersAndSymbolsOnly;
- (BOOL)_containsFullwidthLettersAndNumbers;
- (BOOL)_containsFullwidthLettersAndNumbersOnly;
- (BOOL)_containsSymbolsAndPunctuationOnly;
- (BOOL)_containsCJKSymbolsAndPunctuation;
- (BOOL)_containsCJKScriptsOnly;
- (BOOL)_containsCJScriptsOnly;
- (BOOL)_containsIdeographsOrBopomofoOnly;
- (BOOL)_containsBopomofoToneOnly;
- (BOOL)_containsBopomofoOnly;
- (BOOL)_containsEmojiOnly;
- (BOOL)_containsEmoji;
- (BOOL)_containsHiraganaKatakanaOrBopomofo;
- (BOOL)_containsKatakanaOrKanji;
- (BOOL)_containsHiraganaOrKatakana;
- (BOOL)_containsHiraganaOnly;
- (BOOL)_containsJapaneseOnly;
- (BOOL)_containsJapanese;
- (BOOL)_containsIdeographicCharacters;
- (unsigned long long)_graphemeCount;
- (id)_lastGrapheme;
- (id)_firstGrapheme;
- (BOOL)_isOnlyIdeographs;
- (BOOL)_isIdeographicGlyphs;
- (BOOL)_containsCJScripts;
- (BOOL)_isNaturallyRTL;
- (BOOL)_looksLikeURL;
- (BOOL)_looksLikeNumberInput;
- (BOOL)_looksLikeEmailAddress;
- (BOOL)_isNewlineOrReturn;
- (BOOL)_isDelete;
- (BOOL)_isSpace;
- (BOOL)_isPlainSpace;
- (BOOL)_isSpaceOrReturn;
- (BOOL)_isTripledPunctuation;
- (BOOL)_isLeftAssociative;
- (BOOL)_isModifierSymbol;
- (BOOL)_endsSentence;
- (unsigned long long)_UTF8SizeOfRange:(struct _NSRange)arg1;
- (struct _NSRange)_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2;
- (struct _NSRange)_rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 withClusterOffset:(long long)arg2;
- (struct _NSRange)_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1;
- (id)_stringByReplacingCharacter:(unsigned int)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByReplacingCharactersInSet:(struct __CFCharacterSet *)arg1 withCharacter:(unsigned int)arg2;
- (id)_stringByTrimmingLastCharacter;
- (id)_stringByTrimmingCharactersInCFCharacterSet:(struct __CFCharacterSet *)arg1;
- (BOOL)_contentsExclusivelyInCharacterSet:(struct USet *)arg1;
- (void)_reverseEnumerateLongCharactersInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateLongCharactersInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct _NSRange)_rangeOfLongCharacterAtIndex:(unsigned long long)arg1;
- (unsigned int)_lastLongCharacter;
- (unsigned int)_firstLongCharacter;
- (unsigned short)_firstChar;
@end

