//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

@interface ICMImageGalleryImageClipView : NSClipView
{
    BOOL _disableCentering;
}

@property(nonatomic) BOOL disableCentering; // @synthesize disableCentering=_disableCentering;
- (struct CGRect)constrainBoundsRect:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsDefaultClipping;

@end
