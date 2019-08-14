//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class ICAttachmentPreviewImageLoader, NSCache, NSManagedObjectID, NSMutableArray, NSString, NSURL;

@interface ICAttachmentThumbnailOperation : NSBlockOperation
{
    BOOL _attachmentPropertiesCaptured;
    BOOL _showAsFileIcon;
    BOOL _isMovie;
    NSString *_cacheKey;
    double _scale;
    NSCache *_cache;
    CDUnknownBlockType _fallbackBlock;
    CDUnknownBlockType _processingBlock;
    NSMutableArray *_completionBlocks;
    NSManagedObjectID *_attachmentID;
    ICAttachmentPreviewImageLoader *_attachmentPreviewImageLoader;
    NSURL *_mediaURL;
    unsigned long long _imageScaling;
    struct CGSize _minSize;
}

@property(nonatomic) BOOL isMovie; // @synthesize isMovie=_isMovie;
@property(nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(retain, nonatomic) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader; // @synthesize attachmentPreviewImageLoader=_attachmentPreviewImageLoader;
@property(nonatomic) BOOL attachmentPropertiesCaptured; // @synthesize attachmentPropertiesCaptured=_attachmentPropertiesCaptured;
@property(retain, nonatomic) NSManagedObjectID *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(copy, nonatomic) CDUnknownBlockType processingBlock; // @synthesize processingBlock=_processingBlock;
@property(copy, nonatomic) CDUnknownBlockType fallbackBlock; // @synthesize fallbackBlock=_fallbackBlock;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (void)main;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)capturePropertiesFromAttachment:(id)arg1;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7 fallbackBlock:(CDUnknownBlockType)arg8;

@end

