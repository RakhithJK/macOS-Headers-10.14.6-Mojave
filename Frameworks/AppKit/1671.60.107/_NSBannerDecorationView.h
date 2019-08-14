//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _NSBannerDecorationView : NSView
{
    CALayer *_decorationLayer;
    BOOL _drawsTopSeparator;
    BOOL _drawsBottomSeparator;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property BOOL drawsBottomSeparator; // @synthesize drawsBottomSeparator=_drawsBottomSeparator;
@property BOOL drawsTopSeparator; // @synthesize drawsTopSeparator=_drawsTopSeparator;
- (void)updateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;

@end

