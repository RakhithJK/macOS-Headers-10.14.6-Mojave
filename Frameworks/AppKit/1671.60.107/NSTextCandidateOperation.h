//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSTextCandidateOperation : NSOperation
{
    NSString *_string;
    struct _NSRange _selectedRange;
    unsigned long long _offset;
    unsigned long long _checkingTypes;
    NSDictionary *_options;
    long long _tag;
    long long _sequenceNumber;
    unsigned long long _retryCount;
    id _completionHandler;
    NSArray *_results;
}

- (void)main;
- (void)performCompletionHandler;
- (id)clone;
@property(readonly) NSArray *results;
@property(readonly) unsigned long long retryCount;
@property(readonly) long long sequenceNumber;
- (void)dealloc;
- (id)initWithString:(id)arg1 selectedRange:(struct _NSRange)arg2 offset:(unsigned long long)arg3 types:(unsigned long long)arg4 options:(id)arg5 tag:(long long)arg6 sequenceNumber:(long long)arg7 retryCount:(unsigned long long)arg8 completionHandler:(CDUnknownBlockType)arg9;

@end
