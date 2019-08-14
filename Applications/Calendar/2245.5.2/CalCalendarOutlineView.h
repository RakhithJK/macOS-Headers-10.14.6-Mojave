//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

#import "NSDraggingSource-Protocol.h"

@class NSString;

@interface CalCalendarOutlineView : NSOutlineView <NSDraggingSource>
{
    long long _mouseOverRow;
    BOOL _isMouseOverAlert;
    BOOL _isMouseDelayHovered;
    BOOL _isMouseDown;
    BOOL _cancelButtonTimer;
}

@property BOOL cancelButtonTimer; // @synthesize cancelButtonTimer=_cancelButtonTimer;
- (BOOL)_rowIsGroupRow:(long long)arg1;
- (double)_scrollerWidth;
- (BOOL)_enclosingScrollViewHasOverlayScroller;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)keyDown:(id)arg1;
- (void)getInfo:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (long long)columnAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)currentMouseLocation;
- (void)showButtonIfMouseHasMovedSlowlyEnoughFromPreviousLocation:(id)arg1;
- (void)showButtonAfterDelay;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)updateTrackingAreas;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)tile;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)calendarOutlineDataSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

