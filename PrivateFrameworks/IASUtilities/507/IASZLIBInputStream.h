//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IASUtilities/IASInputStream.h>

@interface IASZLIBInputStream : IASInputStream
{
    BOOL _endOfFile;
    BOOL _closed;
    struct z_stream_s *_stream;
    char *_buffer;
    unsigned long long _bufferCapacity;
}

@property(nonatomic) BOOL closed; // @synthesize closed=_closed;
@property(nonatomic) BOOL endOfFile; // @synthesize endOfFile=_endOfFile;
@property(nonatomic) unsigned long long bufferCapacity; // @synthesize bufferCapacity=_bufferCapacity;
@property(nonatomic) char *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) struct z_stream_s *stream; // @synthesize stream=_stream;
- (unsigned long long)streamStatus;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (BOOL)forwardSeekingStreamRequiresReads;
- (long long)seekingCapability;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)currentGzipErrorWithReturnValue:(int)arg1;

@end

