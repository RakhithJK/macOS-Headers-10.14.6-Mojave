//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (CPExtensions)
- (BOOL)removeSeparator;
- (BOOL)removeSeparatorSkipSpace:(BOOL)arg1;
- (BOOL)removeEllipsis;
- (BOOL)removeEllipsisSkipSpace:(BOOL)arg1;
- (BOOL)dropPrefix:(id)arg1;
- (id)dropFirstChars:(unsigned long long)arg1;
- (id)dropFirstChar;
- (id)nextCharSkipSpace:(BOOL)arg1;
- (id)nextChar;
- (void)appendCharacter:(unsigned short)arg1;
@end

