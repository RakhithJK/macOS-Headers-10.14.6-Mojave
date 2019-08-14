//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSTearOffTabWindowDelegate-Protocol.h>

@class MorphingDragImageView, NSAnimation, NSImage, NSString, NSTearOffTabWindow, NSTimer, NSView, NSWindow;
@protocol MorphingDragImageControllerDragSource, TabBarViewItem, TabDraggingDestination;

__attribute__((visibility("hidden")))
@interface MorphingDragImageController : NSObject <NSTearOffTabWindowDelegate>
{
    NSTearOffTabWindow *_dragWindow;
    NSImage *_tabDragImage;
    NSImage *_windowDragImage;
    struct CGSize _maxImageSize;
    struct CGSize _originalViewOffset;
    id <TabBarViewItem> _dragItem;
    id <MorphingDragImageControllerDragSource> _dragSource;
    NSView *_sourceView;
    MorphingDragImageView *_dragImageView;
    NSAnimation *_slideBackAnimation;
    struct CGPoint _slideBackStartTranslation;
    struct CGPoint _slideBackEndTranslation;
    BOOL _dragDone;
    NSWindow *_windowUnderMouse;
    id <TabDraggingDestination> _targetUnderMouse;
    NSTimer *_springTargetWindowToFrontTimer;
    NSTimer *_periodicEventTimer;
    BOOL _targetAcceptsDrag;
    BOOL _mouseOverSystemWindow;
    NSImage *_pinnedTabDragImage;
}

+ (void)dragTabWithDraggingItem:(id)arg1 tabButtonImage:(id)arg2 pinnedTabButtonImage:(id)arg3 windowImage:(id)arg4 fromView:(id)arg5 at:(struct CGPoint)arg6 source:(id)arg7;
@property(readonly, nonatomic) NSWindow *dragWindow; // @synthesize dragWindow=_dragWindow;
- (void).cxx_destruct;
- (id)detachWindowForTearOffTabWindow:(id)arg1;
- (void)_morphToDragImage:(id)arg1;
- (void)_updateDragImageForCurrentDragState;
- (BOOL)_dropOpensNewWindow;
- (void)_sendMovedToPointOnScreenToDragSource;
- (void)_setTargetUnderMouse:(id)arg1;
- (void)_draggingDidExitTargetWindow;
- (void)_draggingDidEnterTargetWindow;
- (void)_performSprintToFront:(id)arg1;
- (void)_setWindowUnderMouse:(id)arg1;
- (void)_findWindowUnderMouse:(id *)arg1 level:(int *)arg2 viewUnderMouse:(id *)arg3;
- (id)_dragInfoForNoTargetUnderMouse;
- (id)_dragInfoForTargetUnderMouseInWindow:(id)arg1;
- (id)_dragInfoForTargetUnderMouse;
- (void)_animateSlideBack;
- (void)_dragComplete;
- (void)_applicationDidResignActive;
- (void)_firePeriodicEvent:(id)arg1;
- (void)_stopPeriodicEventTimer;
- (void)_startPeriodicEventTimerIfNeeded;
- (void)_beginSlideBackAnimation;
- (void)_handleMouseUp;
- (BOOL)_dropTabOnScreenIfPossible;
- (BOOL)_didAcceptDrop;
- (BOOL)_canPerformTabDrag;
- (void)_handleFlagsChanged;
- (void)_handleMouseDragged;
- (void)_handleEvent:(id)arg1;
- (void)_runDrag;
- (void)_prepareForDragWithImage:(id)arg1;
- (void)_dragTabWithDraggingItem:(id)arg1 tabButtonImage:(id)arg2 pinnedTabButtonImage:(id)arg3 windowImage:(id)arg4 fromView:(id)arg5 at:(struct CGPoint)arg6 source:(id)arg7;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
