//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class NSImage;

@interface GKFixedSizeImageView : NSImageView
{
    NSImage *_actualImage;
}

@property(retain, nonatomic) NSImage *actualImage; // @synthesize actualImage=_actualImage;
- (void)invalidateIntrinsicContentSize;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;

@end

