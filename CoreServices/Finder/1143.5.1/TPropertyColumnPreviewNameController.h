//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPropertyTitleBubbleViewController.h"

#import "NSGestureRecognizerDelegate-Protocol.h"
#import "TShrinkToFitDelegateProtocol-Protocol.h"

@class NSObject, NSString;
@protocol TNodeRenameDelegate;

@interface TPropertyColumnPreviewNameController : TPropertyTitleBubbleViewController <TShrinkToFitDelegateProtocol, NSGestureRecognizerDelegate>
{
    struct TNSRef<TShrinkToFitController, void> _stfController;
    struct TFENodeVector _nodes;
    NSObject<TNodeRenameDelegate> *_renameDelegate;
    struct TNSRef<TBrowserImmediateActionGestureRecognizerDelegate, void> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer, void> _renameImmediateActionGestureRecognizer;
    struct TNotificationCenterObserver _clipViewBoundsChangedObserver;
    struct TNotificationCenterObserver _columnViewClipViewBoundsChangedObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)setRenameDelegate:(id)arg1;
- (void)_setUpImmediateActionGestureRecognizers;
- (struct TFENode)nodeToAction;
- (BOOL)hitTestNameField:(struct CGPoint)arg1;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithRenameOp:(id)arg1;
- (_Bool)startEditing;
- (void)viewLoaded;
- (void)aboutToTearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

