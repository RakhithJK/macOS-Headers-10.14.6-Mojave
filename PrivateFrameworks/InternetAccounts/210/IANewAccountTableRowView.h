//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSTrackingArea;

@interface IANewAccountTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    BOOL _mouseDown;
    NSTrackingArea *_trackingArea;
}

@property BOOL mouseDown; // @synthesize mouseDown=_mouseDown;
- (void).cxx_destruct;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)undoMouseDown;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)windowResignedKey:(id)arg1;
- (void)_ensureTrackingArea;
@property BOOL mouseInside; // @dynamic mouseInside;
- (void)dealloc;

@end

