//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (CNUI)
- (BOOL)cnui_containsEmojiCharacters;
- (BOOL)cnui_containsNonLatinCharacters;
- (id)cnui_stringByTransliteratingToPhoneticCharactersForProperty:(id)arg1;
- (BOOL)cnui_shouldTransliterateToLatin;
- (BOOL)cnui_shouldUseZhuyinTransliteration;
- (BOOL)cnui_shouldUseJapaneseTransliteration;
- (id)cnui_stringByTransliteratingToKanaAsName:(BOOL)arg1;
- (unsigned int)cnui_firstUTF32Character;
@end

