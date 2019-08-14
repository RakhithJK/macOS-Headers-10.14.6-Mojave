//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSTrackingArea;

@interface HVResultRowView : NSTableRowView
{
    BOOL _mouseInside;
    BOOL _selectable;
    BOOL _needsBottomSeparator;
    NSTrackingArea *_trackingArea;
}

@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL needsBottomSeparator; // @synthesize needsBottomSeparator=_needsBottomSeparator;
@property BOOL selectable; // @synthesize selectable=_selectable;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
@property(readonly) BOOL mouseInside;
- (void)setMouseInside:(BOOL)arg1;
- (void)drawBackgroundInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (void)_drawHighlightInRect:(struct CGRect)arg1;

@end
