//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (ContactsFoundation)
+ (BOOL)_cn_isBlank:(id)arg1;
- (id)_cn_flatMap:(CDUnknownBlockType)arg1;
- (id)_cn_resultWithAllCharacters:(CDUnknownBlockType)arg1;
- (id)_cn_take:(unsigned long long)arg1;
- (void)_cn_eachCharacter:(CDUnknownBlockType)arg1;
- (struct _NSRange)_cn_rangeFromIndex:(unsigned long long)arg1;
- (id)_cn_SHA256HashStringWithSalt:(id)arg1;
- (id)_cn_nameComponentTokensUsingLocale:(id)arg1 inferredNameOrder:(long long *)arg2;
- (id)_cn_nameComponentTokens;
- (id)_cn_tokens;
- (id)_cn_trimmedString;
- (id)_cn_stringByNormalizingCase;
- (id)_cn_stringByDeletingNumberOfPathComponents:(unsigned long long)arg1;
- (id)_cn_stringByAddingPercentEscapesToEntireURL;
- (id)_cn_stringByAddingPercentEscapesIfNecessary;
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1 options:(unsigned long long)arg2;
- (struct _NSRange)_cn_rangeOfCommonPrefixWithString:(id)arg1;
- (BOOL)_cn_containsSubstring:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_cn_containsSubstring:(id)arg1;
- (id)_cn_stringByDeletingCharactersInSet:(id)arg1;
- (BOOL)_cn_containsCharacterInSet:(id)arg1;
- (BOOL)_cn_hasSuffix:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_cn_hasSuffix:(id)arg1;
- (BOOL)_cn_hasPrefix:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)_cn_hasPrefix:(id)arg1;
- (BOOL)_cn_hasCaseAndDiacriticInsensitivePrefix:(id)arg1;
- (BOOL)_cn_caseInsensitiveIsEqual:(id)arg1;
- (BOOL)_cn_isBlank;
@end

