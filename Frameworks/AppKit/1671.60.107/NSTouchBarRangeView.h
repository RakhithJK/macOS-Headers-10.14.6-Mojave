//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface NSTouchBarRangeView : NSView
{
    NSColor *_tintColor;
    unsigned long long _handleMask;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (struct CGSize)monoHandleSize;
@property unsigned long long handleMask; // @synthesize handleMask=_handleMask;
@property(retain) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (id)_coreUIDrawOptions;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (double)_minWidthForSeparateHandles;
- (struct CGSize)fittedSizeForSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)_hasLeftHandle:(char *)arg1 rightHandle:(char *)arg2;
- (unsigned long long)handleAtPoint:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonViewSetup;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

