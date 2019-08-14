//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface NSView (SafariNSViewExtras)
- (void)safari_scrollPointWithoutFlashingScrollers:(struct CGPoint)arg1;
- (void)safari_accessibilityPostLayoutChangedNotificationWithElementToFocusForLayout:(id)arg1;
- (id)safari_snapshotWithBounds:(struct CGRect)arg1;
- (id)safari_snapshotWithContentInsets:(struct NSEdgeInsets)arg1;
- (void)safari_sortSubviewsUsingComparator:(CDUnknownBlockType)arg1;
- (id)safari_nearestAncestorMenuForEvent:(id)arg1;
- (BOOL)safari_isRTL;
- (BOOL)safari_isLTR;
- (id)safari_browserWindowController;
- (id)_safari_browserWindow;
- (BOOL)safari_removeAllSubviews;
- (void)safari_enumerateDescendantsOfClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)safari_enumerateDescendantsUsingBlock:(CDUnknownBlockType)arg1;
- (id)safari_nearestAncestorOfClass:(Class)arg1;
@property(readonly, nonatomic) double safari_windowCenterX;
- (struct CGSize)roundSizeInWindowCoordinates:(struct CGSize)arg1;
- (struct CGSize)currentEventOffsetFromEvent:(id)arg1;
- (void)startDragFromEvent:(id)arg1 withPasteBoard:(id)arg2 andImage:(id)arg3 atImageOffset:(struct CGSize)arg4;
- (id)draggingImage;
- (void)drawForDraggingImageInRect:(struct CGRect)arg1;
- (BOOL)_safari_dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2;
- (BOOL)_safari_dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2 xHysteresis:(float)arg3 yHysteresis:(float)arg4;
- (BOOL)safari_isFirstResponder;
- (BOOL)safari_isInFullscreenToolbarWindow;
@property(retain, nonatomic, setter=safari_setBackgroundColor:) NSColor *safari_backgroundColor;
@end

