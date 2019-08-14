//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PFTraceBuffer : NSObject
{
    unsigned long long _length;
    unsigned long long _width;
    int _next;
    void **_data;
    BOOL _pause;
    BOOL _collectTimestamp;
    BOOL _collectThreadId;
    BOOL _collectQoS;
    BOOL _collectBacktrace;
    NSString *_bufferName;
}

+ (unsigned long long)analyzeFormat:(id)arg1 count:(unsigned long long *)arg2;
+ (unsigned long long)_indexOfNextSegment:(id)arg1 start:(unsigned long long)arg2 type:(char *)arg3;
+ (void)initialize;
@property(nonatomic) BOOL collectBacktrace; // @synthesize collectBacktrace=_collectBacktrace;
@property(nonatomic) BOOL collectQoS; // @synthesize collectQoS=_collectQoS;
@property(nonatomic) BOOL collectThreadId; // @synthesize collectThreadId=_collectThreadId;
@property(nonatomic) BOOL collectTimestamp; // @synthesize collectTimestamp=_collectTimestamp;
@property(retain) NSString *bufferName; // @synthesize bufferName=_bufferName;
- (void).cxx_destruct;
- (id)description;
- (id)contextNames;
- (id)records;
- (void)_appendMessageAtIndex:(unsigned long long)arg1 to:(id)arg2;
- (void)reset;
- (void)_recordTypes:(unsigned long long)arg1 count:(unsigned long long)arg2 file:(const char *)arg3 line:(unsigned long long)arg4 self:(id)arg5 context:(id)arg6 format:(id)arg7 args:(struct __va_list_tag [1])arg8;
- (void)_recordTypes:(unsigned long long)arg1 count:(unsigned long long)arg2 file:(const char *)arg3 line:(unsigned long long)arg4 self:(id)arg5 context:(id)arg6 format:(id)arg7;
- (void)recordSelf:(id)arg1;
- (void)recordFormat:(id)arg1 arg:(id)arg2;
- (void)recordMessage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithLength:(unsigned long long)arg1 maximumArguments:(unsigned long long)arg2;

@end

