//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OSLogEventProxy;

__attribute__((visibility("hidden")))
@interface OSLogEventDecomposedMessage : NSObject
{
    BOOL _hasPopulatedFields;
    BOOL _hdrNeedsFree;
    unsigned short _pubsize;
    unsigned short _privsize;
    unsigned short _placeholderCount;
    unsigned long long _variant;
    unsigned long long _sizeof_long;
    const struct os_log_fmt_hdr_s *_hdr;
    const void *_pubdata;
    const void *_privdata;
    const char *_fmt;
    unsigned long long _messageState;
    struct os_log_fmt_raw_placeholder *_rawPlaceholders;
    void *_hdr_buffer;
    OSLogEventProxy *_proxy;
}

@property(readonly, nonatomic) unsigned long long sizeOfLong; // @synthesize sizeOfLong=_sizeof_long;
@property(readonly, nonatomic) OSLogEventProxy *proxy; // @synthesize proxy=_proxy;
- (id)initWithEventProxy:(id)arg1;
@property(readonly, nonatomic) unsigned long long state;
- (void)_populateFields;
@property(readonly) unsigned long long placeholderCount;
- (void)dealloc;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (id)placeholderAtIndex:(unsigned long long)arg1;
- (id)literalPrefixAtIndex:(unsigned long long)arg1;
- (void)_initializePlaceholders;
- (struct os_log_fmt_raw_placeholder *)_rawPlaceholderForIndex:(unsigned long long)arg1;
- (void)_unmake;

@end

