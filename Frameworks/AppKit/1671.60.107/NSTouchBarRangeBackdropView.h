//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTouchBarRangeView;

@interface NSTouchBarRangeBackdropView : NSView
{
    id _parentView;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
- (void).cxx_destruct;
- (id)_coreUIDrawOptions;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (struct CGSize)intrinsicContentSize;
- (struct NSEdgeInsets)alignmentRectInsets;
@property __weak NSTouchBarRangeView *parentView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_commonViewSetup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

