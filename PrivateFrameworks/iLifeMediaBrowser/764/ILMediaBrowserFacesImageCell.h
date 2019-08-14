//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iLifeMediaBrowser/ILMediaBrowserImageCell.h>

@class NSDictionary, NSImage, NSMutableDictionary;

@interface ILMediaBrowserFacesImageCell : ILMediaBrowserImageCell
{
    NSImage *faceFrameImage;
    NSImage *faceFrameImageSelected;
    NSImage *faceFrameImageSelectedInactive;
    NSDictionary *textAttributes;
    NSMutableDictionary *thumbnailCache;
    BOOL showsAlternateImage;
    float _fontSize;
}

@property BOOL showsAlternateImage; // @synthesize showsAlternateImage;
- (id)thumbnailCIImageForImage:(id)arg1 inRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3;
- (void)drawThumbnail:(id)arg1 inRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 identifier:(id)arg4;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)ninePartImageNamed:(id)arg1 fromResourceName:(id)arg2;
- (void)setupNinePartImages;
- (void)dealloc;
- (id)init;

@end

