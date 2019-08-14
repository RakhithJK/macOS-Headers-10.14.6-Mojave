//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, CLLocation, NSDate, NSImage, NSString, NSURL, PHAdjustmentData, PHLivePhoto;

@interface PHContentEditingInput : NSObject
{
    int _fullSizeImageOrientation;
    long long _mediaType;
    unsigned long long _mediaSubtypes;
    long long _playbackStyle;
    NSDate *_creationDate;
    CLLocation *_location;
    NSString *_uniformTypeIdentifier;
    PHAdjustmentData *_adjustmentData;
    NSImage *_displaySizeImage;
    NSURL *_fullSizeImageURL;
    AVAsset *_avAsset;
    AVAsset *_audiovisualAsset;
    PHLivePhoto *_livePhoto;
    NSURL *_outputURL;
    NSURL *_outputLivePhotoImageURL;
    NSURL *_outputLivePhotoVideoURL;
    NSImage *_placeholderImage;
}

@property(retain) NSImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain) NSURL *outputLivePhotoVideoURL; // @synthesize outputLivePhotoVideoURL=_outputLivePhotoVideoURL;
@property(retain) NSURL *outputLivePhotoImageURL; // @synthesize outputLivePhotoImageURL=_outputLivePhotoImageURL;
@property(copy) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain) PHLivePhoto *livePhoto; // @synthesize livePhoto=_livePhoto;
@property(retain, setter=setAudiovisualAsset:) AVAsset *audiovisualAsset; // @synthesize audiovisualAsset=_audiovisualAsset;
@property(readonly) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property int fullSizeImageOrientation; // @synthesize fullSizeImageOrientation=_fullSizeImageOrientation;
@property(copy) NSURL *fullSizeImageURL; // @synthesize fullSizeImageURL=_fullSizeImageURL;
@property(retain) NSImage *displaySizeImage; // @synthesize displaySizeImage=_displaySizeImage;
@property(retain) PHAdjustmentData *adjustmentData; // @synthesize adjustmentData=_adjustmentData;
@property(copy) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy) CLLocation *location; // @synthesize location=_location;
@property(copy) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property long long playbackStyle; // @synthesize playbackStyle=_playbackStyle;
@property unsigned long long mediaSubtypes; // @synthesize mediaSubtypes=_mediaSubtypes;
@property long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;

@end

