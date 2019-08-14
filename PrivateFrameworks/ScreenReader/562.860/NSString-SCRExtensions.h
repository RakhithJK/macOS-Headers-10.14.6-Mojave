//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SCRExtensions)
- (BOOL)containsWhiteSpaceOrNewlineCharacter;
- (BOOL)containsAlphaNumericCharacter;
- (BOOL)hasAlphaNumericPrefix;
- (BOOL)isAllPunctuations;
- (BOOL)isAllSymbols;
- (BOOL)isNewline;
- (BOOL)isAllWhitespaceOrNewline;
- (BOOL)isAllAlphaNumeric;
- (BOOL)containsPrintableCharacters;
- (id)stringByDeletingFormatCharacters;
- (BOOL)isLineBreaker;
- (BOOL)isWordBreaker;
- (BOOL)isDecimalDigitValueDescription;
- (id)componentsSeparatedByStringIncludingSeparators:(id)arg1;
@end

