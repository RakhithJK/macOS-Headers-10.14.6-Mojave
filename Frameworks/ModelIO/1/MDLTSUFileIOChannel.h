//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTSURandomWriteChannel-Protocol.h>
#import <ModelIO/MDLTSUReadChannel-Protocol.h>
#import <ModelIO/MDLTSUStreamWriteChannel-Protocol.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface MDLTSUFileIOChannel : NSObject <MDLTSUReadChannel, MDLTSUStreamWriteChannel, MDLTSURandomWriteChannel>
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_io> *_channel;
    BOOL _isClosed;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isValid;
- (void)truncateToLength:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)addBarrier:(CDUnknownBlockType)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)close;
- (void)writeData:(id)arg1 offset:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)writeData:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)readWithHandler:(CDUnknownBlockType)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 descriptor:(int)arg2 queue:(id)arg3 cleanupHandler:(CDUnknownBlockType)arg4;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomReadingWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForRandomWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForRandomWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForStreamWritingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForStreamWritingURL:(id)arg1 error:(id *)arg2;
- (id)initForReadingDescriptor:(int)arg1 queue:(id)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForReadingURL:(id)arg1 error:(id *)arg2 cleanupHandler:(CDUnknownBlockType)arg3;
- (id)initForReadingURL:(id)arg1 error:(id *)arg2;
- (id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 error:(id *)arg5 cleanupHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

