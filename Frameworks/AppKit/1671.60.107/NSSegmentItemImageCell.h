//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImageCell.h>

__attribute__((visibility("hidden")))
@interface NSSegmentItemImageCell : NSImageCell
{
    unsigned long long _imageState;
    int _backgroundStyle;
}

@property(nonatomic) int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) unsigned long long imageState; // @synthesize imageState=_imageState;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (int)_effectiveBackgroundStyleInView:(id)arg1 isTemplate:(BOOL)arg2;
- (unsigned long long)_currentImageStateForView:(id)arg1;

@end

