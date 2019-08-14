//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

@class NSURL;

@interface CRKZipOperation : CATOperation
{
    NSURL *_directoryURL;
    NSURL *_destinationZipFileURL;
}

@property(readonly, nonatomic) NSURL *destinationZipFileURL; // @synthesize destinationZipFileURL=_destinationZipFileURL;
@property(readonly, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void).cxx_destruct;
- (id)errorFromArchive:(struct archive *)arg1;
- (BOOL)writeDataFromFileDescriptor:(int)arg1 toArchive:(struct archive *)arg2 usingBuffer:(id)arg3 error:(id *)arg4;
- (long long)lengthOfBufferForFileDescriptor:(int)arg1 stat:(struct stat)arg2;
- (BOOL)writeDataForFTSEntry:(id)arg1 toArchive:(struct archive *)arg2 fileDescriptor:(int)arg3 error:(id *)arg4;
- (const char *)relativePathForPathOnDisk:(id)arg1;
- (BOOL)writeHeaderForFTSEntry:(id)arg1 toArchive:(struct archive *)arg2 usingDisk:(struct archive *)arg3 fileDescriptor:(int)arg4 error:(id *)arg5;
- (BOOL)writeFTSEntry:(id)arg1 toArchive:(struct archive *)arg2 usingDisk:(struct archive *)arg3 error:(id *)arg4;
- (BOOL)populateArchive:(struct archive *)arg1 usingDisk:(struct archive *)arg2 error:(id *)arg3;
- (BOOL)populateArchive:(struct archive *)arg1 error:(id *)arg2;
- (void)finalizeArchive:(struct archive *)arg1;
- (struct archive *)makeArchiveWithError:(id *)arg1;
- (BOOL)writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)createDestinationDirectoryWithError:(id *)arg1;
- (BOOL)validateParametersWithError:(id *)arg1;
- (void)main;
- (id)initWithDirectoryURL:(id)arg1 destinationZipURL:(id)arg2;
- (id)initWithDirectoryURL:(id)arg1 destinationZipName:(id)arg2;
- (id)initWithDirectoryURL:(id)arg1;

@end

