//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IASUtilities/IASChunklist.h>

@class NSData, NSURL;

@interface IASMutableChunklist : IASChunklist
{
    BOOL _setSignatureHeaderOnly;
    unsigned int _defaultChunkSize;
    NSURL *_mappedFileURL;
    char *_memoryBuffer;
    unsigned long long _memoryBufferSize;
    unsigned long long _fileLength;
}

@property unsigned long long fileLength; // @synthesize fileLength=_fileLength;
@property unsigned long long memoryBufferSize; // @synthesize memoryBufferSize=_memoryBufferSize;
@property char *memoryBuffer; // @synthesize memoryBuffer=_memoryBuffer;
@property BOOL setSignatureHeaderOnly; // @synthesize setSignatureHeaderOnly=_setSignatureHeaderOnly;
@property unsigned int defaultChunkSize; // @synthesize defaultChunkSize=_defaultChunkSize;
@property(retain) NSURL *mappedFileURL; // @synthesize mappedFileURL=_mappedFileURL;
- (void).cxx_destruct;
- (void)_updateChunk:(unsigned long long)arg1 withData:(id)arg2;
- (void)_resizeFileToLength:(unsigned long long)arg1;
- (BOOL)_addSHA256Checksum;
- (BOOL)_signWithEFISign;
- (void)_stripSignature;
- (void)_buildChunklistHeader;
@property(readonly) NSData *chunklistData;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)appendChunksFromData:(id)arg1;
- (BOOL)signChunklist:(int)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithFileSettings:(id)arg1;

@end

