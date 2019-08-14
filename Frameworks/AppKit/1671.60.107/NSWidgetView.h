//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface NSWidgetView : NSView
{
    NSDictionary *_widgetDefinition;
}

+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;
+ (id)keyPathsForValuesInvalidatingDisplay;
@property(copy) NSDictionary *widgetDefinition; // @synthesize widgetDefinition=_widgetDefinition;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (id)_queryWidgetMetrics:(id)arg1;
@property(readonly) unsigned long long scalableAxes;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (int)_vibrancyBlendMode;
- (BOOL)allowsVibrancy;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)updateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)wantsUpdateLayer;
- (long long)layerContentsRedrawPolicy;
@property(readonly) double baselineOffsetFromBottom;
@property(readonly) struct NSEdgeInsets contentInsets;
@property(readonly) NSDictionary *baseWidgetKeys;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

