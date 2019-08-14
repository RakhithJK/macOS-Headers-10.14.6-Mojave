//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface ILImagePreview : NSView
{
    BOOL _animates;
    BOOL _autoresizes;
    BOOL _supportsDragAndDrop;
    struct CGSize _imageSize;
    id _delegate;
}

@property __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property BOOL autoresizes; // @synthesize autoresizes=_autoresizes;
@property BOOL animates; // @synthesize animates=_animates;
- (struct CGRect)fitImageRect;
- (void)_dragSelectionWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGImage *)createThumbnailOfSize:(unsigned long long)arg1;
- (void)setImageWithURL:(id)arg1;
@property NSColor *backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

