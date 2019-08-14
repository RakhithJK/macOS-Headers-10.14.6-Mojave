//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "CALayerDelegate-Protocol.h"

@class CALayer, CAShapeLayer, NSButton, NSString, NSTextField, NSTouchBar, NSTrackingArea, NSVisualEffectView, NSWindow;
@protocol MGScreenSelectorOverlayViewDelegate;

@interface MGScreenSelectorOverlayView : NSView <CALayerDelegate>
{
    NSVisualEffectView *_statusOverlayView;
    CAShapeLayer *_selectionMarchingAntsBackgroundLayer;
    CAShapeLayer *_selectionMarchingAntsLayer;
    CALayer *_selectionLayer;
    CALayer *_darkeningLayer;
    CALayer *_darkeningPunchOutLayer;
    NSTrackingArea *_selectionTrackingArea;
    NSTrackingArea *_selectionHandleTrackingAreas[8];
    NSWindow *_buttonWindow;
    struct CGRect _selectionRect;
    NSString *_selectionString;
    NSString *_confirmationString;
    struct CGSize _minimumSelectionSize;
    NSTextField *_textField;
    NSButton *_recordButton;
    BOOL _isTrackingNewSelectionRect;
    BOOL _hasSelectionRect;
    BOOL _fullViewSelected;
    BOOL _selectionLocked;
    BOOL _highlighted;
    NSTouchBar *_touchBar;
    id <MGScreenSelectorOverlayViewDelegate> _delegate;
    struct CGRect _visibleSelectionRect;
}

+ (id)keyPathsForValuesAffectingTouchBar;
@property(nonatomic) __weak id <MGScreenSelectorOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize minimumSelectionSize; // @synthesize minimumSelectionSize=_minimumSelectionSize;
@property(nonatomic) struct CGRect visibleSelectionRect; // @synthesize visibleSelectionRect=_visibleSelectionRect;
- (void).cxx_destruct;
@property(retain, nonatomic) NSTouchBar *touchBar;
@property(nonatomic) struct CGRect selectionRect;
@property(copy, nonatomic) NSString *confirmationString;
@property(copy, nonatomic) NSString *selectionString;
@property(nonatomic, getter=isSelectionLocked) BOOL selectionLocked;
- (void)cancel:(id)arg1;
- (void)confirm:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)updateCursorWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)hideForRecording;
- (id)cursorForSelectionHandle:(long long)arg1;
- (struct CGRect)rectForSelectionHandle:(long long)arg1;
- (void)viewDidMoveToWindow;
- (void)updateStatusOverlayView;
- (void)updateHighlighted;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
