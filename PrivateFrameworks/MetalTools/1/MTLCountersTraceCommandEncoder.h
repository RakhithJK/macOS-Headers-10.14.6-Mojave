//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLCountersTraceCommandEncoder : NSObject
{
    struct BinaryBuffer *_stream;
    NSString *_label;
    unsigned long long _flags;
    struct _NSRange _segment;
}

@property(readonly, nonatomic) struct _NSRange segment; // @synthesize segment=_segment;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void)endEncoding;
- (void)setLabel:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)dealloc;
- (id)init:(struct BinaryBuffer *)arg1 flags:(unsigned long long)arg2;

@end

