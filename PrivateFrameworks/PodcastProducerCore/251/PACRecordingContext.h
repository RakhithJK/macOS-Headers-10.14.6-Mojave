//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QTCompressionOptions;

@interface PACRecordingContext : NSObject
{
    NSString *uuid;
    int captureType;
    NSString *captureTempDir;
    NSString *outputPath;
    NSString *previewImagePath;
    NSString *videoDeviceID;
    NSString *videoCompressionLocalizedDescription;
    QTCompressionOptions *videoCompressionOptions;
    NSString *audioDeviceID;
    NSString *audioCompressionLocalizedDescription;
    QTCompressionOptions *audioCompressionOptions;
    int diskSpaceCutoffInMB;
    int maxDuration;
    long long previewIntervalInMilliseconds;
    BOOL videoEnabled;
    BOOL audioEnabled;
    BOOL screenEnabled;
    BOOL previewEnabled;
    struct PACContinuousRecordingInfo *continuous;
}

+ (id)newUUID;
@property struct PACContinuousRecordingInfo *continuous; // @synthesize continuous;
@property BOOL previewEnabled; // @synthesize previewEnabled;
@property BOOL screenEnabled; // @synthesize screenEnabled;
@property BOOL audioEnabled; // @synthesize audioEnabled;
@property BOOL videoEnabled; // @synthesize videoEnabled;
@property long long previewIntervalInMilliseconds; // @synthesize previewIntervalInMilliseconds;
@property int maxDuration; // @synthesize maxDuration;
@property int diskSpaceCutoffInMB; // @synthesize diskSpaceCutoffInMB;
@property(retain) NSString *captureTempDir; // @synthesize captureTempDir;
@property(retain) NSString *audioCompressionLocalizedDescription; // @synthesize audioCompressionLocalizedDescription;
@property(retain) QTCompressionOptions *audioCompressionOptions; // @synthesize audioCompressionOptions;
@property(retain) NSString *audioDeviceID; // @synthesize audioDeviceID;
@property(retain) NSString *videoCompressionLocalizedDescription; // @synthesize videoCompressionLocalizedDescription;
@property(retain) QTCompressionOptions *videoCompressionOptions; // @synthesize videoCompressionOptions;
@property(retain) NSString *videoDeviceID; // @synthesize videoDeviceID;
@property(retain) NSString *previewImagePath; // @synthesize previewImagePath;
@property(retain) NSString *outputPath; // @synthesize outputPath;
@property(retain) NSString *uuid; // @synthesize uuid;
@property int captureType; // @synthesize captureType;
- (id)description;
- (void)cleanup;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

