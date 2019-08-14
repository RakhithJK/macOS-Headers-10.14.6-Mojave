//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUStreamReadChannel-Protocol.h>

@class NSString;
@protocol TSUStreamReadChannel;

@interface TSUZipInflateReadChannel : NSObject <TSUStreamReadChannel>
{
    id <TSUStreamReadChannel> _readChannel;
    unsigned long long _remainingUncompressedSize;
    unsigned int _CRC;
    BOOL _validateCRC;
    struct z_stream_s _stream;
    unsigned long long _outBufferSize;
    char *_outBuffer;
}

- (void).cxx_destruct;
- (void)close;
- (void)handleFailureWithHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (BOOL)processData:(id)arg1 inflateResult:(int *)arg2 CRC:(unsigned int *)arg3 isDone:(BOOL)arg4 handler:(CDUnknownBlockType)arg5;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)prepareBuffer;
- (void)dealloc;
- (id)initWithReadChannel:(id)arg1 uncompressedSize:(unsigned long long)arg2 CRC:(unsigned int)arg3 validateCRC:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

