//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AVKit/AVTrimControlsViewControllerDelegate-Protocol.h>

@class AVNowPlayingInfoController, AVPlayerController, AVPlayerControlsViewController, NSMenu, NSString;

@interface AVAudioView : NSView <AVTrimControlsViewControllerDelegate>
{
    AVPlayerController *_playerController;
    BOOL _viewHasBeenSetup;
    BOOL _viewHasWindow;
    AVPlayerControlsViewController *_playbackControlsViewController;
    BOOL _doNotMakePlaybackControlsViewControllerViewFirstResponder;
    BOOL _showsDurationInsteadOfRemainingTime;
    BOOL _showsSharingServiceButton;
    NSMenu *_actionPopUpButtonMenu;
    CDUnknownBlockType _trimCompletionBlock;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    long long _touchBarViewAppearCount;
}

+ (id)restorableStateKeyPaths;
+ (BOOL)automaticallyNotifiesObserversOfPlayerController;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanBeginTrimming;
+ (id)keyPathsForValuesAffectingIsTrimming;
- (void).cxx_destruct;
- (id)metricsDelegate;
- (void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1;
- (id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
- (void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1;
- (void)touchesCancelledWithEvent:(id)arg1;
- (void)touchesEndedWithEvent:(id)arg1;
- (void)touchesMovedWithEvent:(id)arg1;
- (void)touchesBeganWithEvent:(id)arg1;
- (void)endGestureWithEvent:(id)arg1;
- (void)beginGestureWithEvent:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)tabletProximity:(id)arg1;
- (void)tabletPoint:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (struct CGSize)intrinsicContentSize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)touchBarThumbnailPlayerLayer;
- (id)trimThumbnailPlayerLayer;
- (id)trimControlsViewController;
- (BOOL)showsAlternateMediaTrackPreview;
- (BOOL)showsFrameSteppingButtons;
@property(retain) AVPlayerController *playerController;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setShowsDurationInsteadOfRemainingTime:(BOOL)arg1;
- (BOOL)showsDurationInsteadOfRemainingTime;
@property(retain) NSMenu *actionPopUpButtonMenu;
@property BOOL showsSharingServiceButton;
- (void)trimControlsViewControllerDidCancel:(id)arg1;
- (void)trimControlsViewControllerDidTrim:(id)arg1;
- (void)_callTrimCompletionHandlerWithResult:(long long)arg1;
- (void)_restorePlaybackControlsAfterTrimmingWithTrimControlsViewController:(id)arg1;
- (void)beginTrimmingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL canBeginTrimming;
- (void)beginTrimmingWithMaximumDuration:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isTrimming;
- (CDStruct_e83c9415)slowMotionTimeRange;
- (void)touchBarControlsViewDidDisappear;
- (void)touchBarControlsViewWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

