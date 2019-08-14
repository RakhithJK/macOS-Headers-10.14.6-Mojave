//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@protocol FBAClippingBackdropDelegate;

@interface FBAClippingBackdropWindow : NSWindow
{
    struct CGPoint _startDragPoint;
    struct CGRect _selectedDisplayRegion;
    id <FBAClippingBackdropDelegate> _clippingDelegate;
}

@property __weak id <FBAClippingBackdropDelegate> clippingDelegate; // @synthesize clippingDelegate=_clippingDelegate;
- (void).cxx_destruct;
- (void)setCursorPoint:(struct CGPoint)arg1;
- (void)setSelectionRect:(struct CGRect)arg1;
- (void)reset;
- (id)contentView;
- (id)initWithScreen:(id)arg1;

@end
