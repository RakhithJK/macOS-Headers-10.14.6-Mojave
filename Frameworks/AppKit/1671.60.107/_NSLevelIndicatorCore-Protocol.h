//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSObject-Protocol.h>

@class CALayer, NSGraphicsContext;

@protocol _NSLevelIndicatorCore <NSObject>
- (struct NSEdgeInsets)alignmentRectInsetsForState:(CDStruct_40e84b6d)arg1;
- (struct CGSize)indicatorSizeForState:(CDStruct_40e84b6d)arg1;
- (int)vibrancyBlendModeForState:(CDStruct_40e84b6d)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(NSGraphicsContext *)arg2 forState:(CDStruct_40e84b6d)arg3;

@optional
- (void)drawFocusRingMaskInRect:(struct CGRect)arg1 inContext:(NSGraphicsContext *)arg2 forState:(CDStruct_40e84b6d)arg3;
- (void)layoutSublayersOfLayer:(CALayer *)arg1 forState:(CDStruct_40e84b6d)arg2;
- (void)updateLayer:(CALayer *)arg1 forState:(CDStruct_40e84b6d)arg2;
@end
