//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TBaseCollectionViewController.h"

#import "TIconOrGalleryCollectionViewDelegateProtocol-Protocol.h"

@class NSString;

@interface TIconOrGalleryCollectionViewController : TBaseCollectionViewController <TIconOrGalleryCollectionViewDelegateProtocol>
{
    _Bool _doubleClickOnMouseUp;
    _Bool _startEditingOnMouseUp;
    struct TNSRef<NSEvent, void> _mouseDownEventForDrag;
    struct CGPoint _initialClickAt;
    struct TNotificationCenterObserver _clipViewBoundsDidChangeObserver;
    struct TFENode _nodeClickedOnMouseDown;
    struct TNSRef<TBrowserImmediateActionGestureRecognizerDelegate, void> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _quickLookImmediateActionGestureRecognizer;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _renameImmediateActionGestureRecognizer;
    _Bool _immediateActionGestureRecognizerDidRecognize;
    _Bool _shouldSkipRename;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setUpImmediateActionGestureRecognizers;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (_Bool)handleMouseUp:(id)arg1;
- (_Bool)handleMouseDragged:(id)arg1;
- (_Bool)handleMouseDown:(id)arg1;
- (_Bool)inlinePreviewMouseDown:(id)arg1;
- (void)shrinkToFitTextViewAboutToCloseForNode:(const struct TFENode *)arg1;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1 forNode:(const struct TFENode *)arg2 renameOp:(id)arg3;
- (_Bool)shrinkToFitTextViewAboutToOpenForNode:(const struct TFENode *)arg1;
- (void)renameSelectedItem;
- (const struct TFENode *)nodeBeingEdited;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2 afterDelay:(_Bool)arg3;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (struct TFENode)nodeClickedOnMouseDown;
- (void)aboutToTearDown;
- (id)iconOrGalleryView;
- (void)viewLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

