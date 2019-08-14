//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableString;

@interface PBTextWriter : NSObject
{
    BOOL _newlinesPrinted;
    long long _indent;
    NSMutableString *_dest;
    NSMutableDictionary *_cachedObjectTypes;
}

- (BOOL)_write:(id)arg1;
- (BOOL)write:(id)arg1;
- (void)_writeResult:(id)arg1 forProperty:(id)arg2 bracePrefix:(id)arg3;
- (void)_writePropertyAndValue:(id)arg1 forObject:(id)arg2;
- (void)_printNewlines;
- (void)_printLine:(BOOL)arg1 format:(id)arg2;
- (void)_closeBrace;
- (void)_openBrace;
- (void)_outdent;
- (void)_indent;
- (void)reset;
- (id)string;
- (void)dealloc;
- (id)init;

@end

