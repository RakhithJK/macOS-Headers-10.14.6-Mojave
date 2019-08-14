//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXEditToolbarAnimation-Protocol.h"
#import "IPXTouchBarProvider-Protocol.h"

@class IPXViewerItemController, IPXViewerOverlayLayoutView, NSArray, NSCursor, NSPointerArray, NSString, NSView, RDVersion;
@protocol IPXViewerOverlayDataSource;

@interface IPXViewerOverlayController : IPXViewController <IPXEditToolbarAnimation, IPXTouchBarProvider>
{
    IPXViewerOverlayLayoutView *_layoutView;
    NSView *_visibleCanvasRectGuideView;
    NSArray *_visibleCanvasRectGuideViewStaticConstraints;
    NSArray *_visibleCanvasRectGuideViewEdgeInsetsConstraints;
    id <IPXViewerOverlayDataSource> _dataSource;
    IPXViewerItemController *_itemController;
    NSPointerArray *_delegates;
    struct NSEdgeInsets _edgeInsets;
}

+ (id)constraintsForPosition:(unsigned long long)arg1 contentInset:(struct NSEdgeInsets)arg2 view:(id)arg3 container:(id)arg4;
+ (unsigned long long)overlayLayer;
+ (id)undoRedoDelegate;
+ (Class)viewClass;
@property(nonatomic) struct NSEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) __weak IPXViewerItemController *itemController; // @synthesize itemController=_itemController;
@property(nonatomic) __weak id <IPXViewerOverlayDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBarIdentifiers;
- (struct CGPoint)pointFromMasterPoint:(struct CGPoint)arg1;
- (struct CGPoint)masterPointFromPoint:(struct CGPoint)arg1;
- (id)_imageItemController;
@property(readonly, nonatomic) RDVersion *version;
- (CDUnknownBlockType)animationOutCompletion;
- (CDUnknownBlockType)animationOut;
- (CDUnknownBlockType)preAnimationOut;
- (CDUnknownBlockType)animationInCompletion;
- (CDUnknownBlockType)animationIn;
- (CDUnknownBlockType)preAnimationIn;
- (struct NSEdgeInsets)contentInset;
- (unsigned long long)position;
- (BOOL)forwardsEventsToSiblingOverlays;
- (void)removeFromItemViewController;
@property(readonly) BOOL visibleDuringViewerRotation;
- (void)didFinishOrientationChangeAnimation;
- (void)willBeginOrientationChangeAnimation;
- (void)overlayWillDeactivate;
- (void)overlayDidActivate;
@property(readonly) NSCursor *cursor;
- (void)cursorUpdate:(id)arg1;
- (id)initialUndoManager;
- (BOOL)acceptsFirstResponder;
- (id)preferredFirstResponder;
- (void)viewDidLoad;
- (void)loadView;
- (id)canvasItemView;
- (id)layoutView;
- (void)updateViewConstraints;
- (id)visibleCanvasRectGuideView;
- (BOOL)allowsPanningWhileZoomed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
