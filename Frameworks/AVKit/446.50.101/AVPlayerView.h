//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AVKit/AVTrimControlsViewControllerDelegate-Protocol.h>
#import <AVKit/AVVolumeButtonDelegate-Protocol.h>
#import <AVKit/CALayerDelegate-Protocol.h>
#import <AVKit/NSSharingServiceDelegate-Protocol.h>
#import <AVKit/NSSharingServicePickerDelegate-Protocol.h>

@class AVAnimator, AVAudioOnlyIndicatorView, AVControlsContainerViewController, AVExternalPlaybackIndicatorView, AVLoadingIndicatorView, AVNowPlayingInfoController, AVPlayer, AVPlayerController, AVPlayerControlsViewController, AVPlayerLayer, AVShareController, AVStatusOverlayView, AVTrimControlsViewController, AVUnsupportedContentIndicatorView, NSArray, NSLayoutConstraint, NSLayoutGuide, NSMenu, NSObject, NSString, NSTimer, NSTrackingArea, NSWindow;
@protocol AVPlayerViewDelegate_AppStoreOnly, AVPlayerViewSlowMotionDelegate, OS_dispatch_queue;

@interface AVPlayerView : NSView <NSSharingServicePickerDelegate, NSSharingServiceDelegate, AVVolumeButtonDelegate, AVTrimControlsViewControllerDelegate, CALayerDelegate>
{
    NSObject<OS_dispatch_queue> *_dummyImageQueue;
    long long _actualControlsStyle;
    BOOL _playerShouldAutoplay;
    NSString *_videoGravity;
    AVUnsupportedContentIndicatorView *_unsupportedContentIndicatorView;
    AVAudioOnlyIndicatorView *_audioOnlyIndicatorView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    NSView *_contentOverlayView;
    AVStatusOverlayView *_statusOverlayView;
    NSArray *_statusOverlayViewLayoutConstraints;
    NSLayoutConstraint *_statusOverlayViewLeftAnchor;
    NSLayoutConstraint *_statusOverlayViewTopAnchor;
    AVLoadingIndicatorView *_loadingIndicatorView;
    NSTimer *_loadingIndicatorTimer;
    AVControlsContainerViewController *_controlsContainerViewController;
    AVPlayerControlsViewController *_initialControlsViewController;
    AVPlayerControlsViewController *_playbackControlsViewController;
    AVTrimControlsViewController *_trimControlsViewController;
    AVPlayerControlsViewController *_editControlsViewController;
    NSTrackingArea *_trackingArea;
    long long _showControlsCount;
    NSTimer *_controlsTimer;
    NSTimer *_temporaryControlsTimer;
    NSTimer *_dimTouchBarTimer;
    BOOL _viewHasBeenSetup;
    BOOL _viewHasWindow;
    BOOL _showsControlsPane;
    BOOL _canHideControls;
    BOOL _canRequestBecomingFirstResponder;
    BOOL _isShowingPlaybackControlsForMouseMovingInsideView;
    BOOL _isShowingPlaybackControlsViewForUnsupportedContent;
    BOOL _isShowingPlaybackControlsViewForAudioOnlyContent;
    BOOL _isShowingPlaybackControlsViewForPlayingOnExternalScreen;
    BOOL _didPausePlaybackForSheet;
    BOOL _hideControlsOnMouseUp;
    BOOL _doNotMakeCurrentControlsViewControllerViewFirstResponder;
    BOOL _showsFrameSteppingButtons;
    BOOL _showsSharingServiceButton;
    NSMenu *_actionPopUpButtonMenu;
    BOOL _showsFullScreenToggleButton;
    CDUnknownBlockType _trimCompletionBlock;
    AVPlayerController *_playerController;
    BOOL _isFullScreen;
    unsigned long long _savedPresentationOptions;
    NSWindow *_fullScreenWindow;
    NSWindow *_originalWindow;
    NSView *_superview;
    NSView *_placeholderView;
    struct CGRect _savedViewFrame;
    CDStruct_e83c9415 _slowMotionTimeRange;
    id <AVPlayerViewSlowMotionDelegate> _slowMotionDelegate;
    struct {
        char playerView_playerItemTimeForNormalizedTime;
        char playerView_userInterfaceTimeForPlayerItemTime;
        char playerView_playerItemTimeForUserInterfaceTime;
    } _slowMotionDelegateRespondsTo;
    long long _playerLayerLayoutMode;
    struct CGSize _fixedPlayerLayerSize;
    AVAnimator *_animator;
    NSArray *_noHideAreaViews;
    CDStruct_83cd8af5 _floatingPlaybackControlsMargin;
    BOOL _canZoomHorizontally;
    BOOL _canZoomVertically;
    BOOL _isZoomed;
    BOOL _showsAlternateMediaTrackPreview;
    BOOL _prefersReducedUserInterface;
    BOOL _showsDurationInsteadOfRemainingTime;
    AVShareController *_shareController;
    NSObject<OS_dispatch_queue> *_nowPlayingInfoCenterInitQueue;
    BOOL _updatesNowPlayingInfoCenter;
    long long _touchBarViewAppearCount;
    BOOL _needsTransportControlsHeightLayoutGuideConstraints;
    NSLayoutGuide *_transportControlsHeightLayoutGuide;
    BOOL _showsAudioOnlyIndicatorView;
    BOOL _includesTrimAndCancelButtons;
    BOOL _flashesControlsWhenChangingStyle;
    BOOL _shouldInsetControlsFromVideoRect;
    NSLayoutConstraint *_controlsContainerWidthConstraint;
    NSLayoutConstraint *_controlsContainerCenterXConstraint;
    NSLayoutConstraint *_controlsContainerLeftConstraint;
    NSLayoutConstraint *_controlsContainerRightConstraint;
    CDUnknownBlockType _playButtonHandlerForLazyPlayerLoading;
    id <AVPlayerViewDelegate_AppStoreOnly> _metricsDelegate;
    BOOL _inlineControlsShowMinimalControlsWhenPaused;
    long long _controlsStyle;
    AVPlayerLayer *_playerLayer;
    AVPlayerLayer *_trimThumbnailPlayerLayer;
    AVPlayerLayer *_touchBarThumbnailPlayerLayer;
    AVNowPlayingInfoController *_nowPlayingInfoController;
}

+ (id)keyPathsForValuesAffectingTouchBar;
+ (id)restorableStateKeyPaths;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingPlayer;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanBeginTrimming;
+ (BOOL)automaticallyNotifiesObserversOfPlayerController;
+ (id)keyPathsForValuesAffectingIsTrimming;
+ (BOOL)wantsPlayerLayerLayout;
+ (id)keyPathsForValuesAffectingPlayerLayerFrame;
+ (id)keyPathsForValuesAffectingPrefersUnobscuredContent;
+ (id)keyPathsForValuesAffectingCanShowSharingServiceButton;
+ (id)keyPathsForValuesAffectingControlsHidden;
@property(retain, nonatomic) AVNowPlayingInfoController *nowPlayingInfoController; // @synthesize nowPlayingInfoController=_nowPlayingInfoController;
@property(retain) AVPlayerLayer *touchBarThumbnailPlayerLayer; // @synthesize touchBarThumbnailPlayerLayer=_touchBarThumbnailPlayerLayer;
@property(retain) AVPlayerLayer *trimThumbnailPlayerLayer; // @synthesize trimThumbnailPlayerLayer=_trimThumbnailPlayerLayer;
@property(retain) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain) AVControlsContainerViewController *controlsContainerViewController; // @synthesize controlsContainerViewController=_controlsContainerViewController;
@property long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void).cxx_destruct;
- (void)windowDidEndSheet:(id)arg1;
- (void)windowWillBeginSheet:(id)arg1;
- (void)playerControllerDidChangePlaybackStateByHandlingEvent:(id)arg1;
- (void)playerControllerDidSeekChapter:(id)arg1;
- (void)updateConstraints;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)touchBar;
- (void)_fireControlsTimer:(id)arg1;
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
- (void)otherMouseDragged:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)otherMouseUp:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)volumeButton:(id)arg1 shouldShowVolumeSlider:(id)arg2;
- (void)_fireLoadingIndicatorTimer:(id)arg1;
- (void)_restorePreviousFirstResponderOrMakeCurrentControlsViewControllersInitialFirstResponderFirstResponderIfSelfIsCurrentFirstResponder:(id)arg1;
- (id)_makeSelfFirstResponderIfCurrentFirstResponderIsDescendantOfSelfAndReturnCurrentFirstResponderInThatCase;
- (void)_replaceCurrentControlsViewControllerWithViewController:(id)arg1;
- (id)_currentControlsViewController;
- (void)_setupTrackingAreas;
- (void)_showOrHideControls;
- (BOOL)_mouseInNoHideArea;
- (id)_noHideAreaViews;
- (void)_updatePlaybackControlsViewVisibilityForPlayingOnExternalScreen;
- (void)_updatePlaybackControlsViewVisibilityForAudioOnlyContent;
- (void)_updatePlaybackControlsViewVisibilityForUnsupportedContent;
- (void)_dimTouchBarIfNeededAfterDelay;
- (void)_dimTouchBarIfNeeded;
- (BOOL)_shouldDimTouchBar;
- (void)_fireTemporaryControlsTimer:(id)arg1;
- (void)_showControlsTemporarily;
- (void)_hideControlsIfPossibleAfterDelay;
- (void)_hideControlsIfPossible;
- (void)_showControlsIfNeeded;
- (void)_setupLoadingIndicatorView;
- (void)_updateExternalPlaybackIndicatorView;
- (void)_setupExternalPlaybackIndicatorView;
- (void)_updateAudioOnlyIndicatorView;
- (BOOL)_isAudioOnlyContent;
- (void)_updateUnsupportedContentIndicatorView;
- (BOOL)_isUnsupportedContent;
- (void)_setupControlsContainerView;
- (void)_setupContentOverlayView;
- (void)_layoutStatusOverlayView;
- (void)_setupStatusOverlayView;
- (void)_setupPlayerLayer;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
@property(retain) AVPlayerControlsViewController *editControlsViewController;
@property(retain) AVTrimControlsViewController *trimControlsViewController;
@property(retain) AVPlayerControlsViewController *playbackControlsViewController;
@property BOOL updatesNowPlayingInfoCenter;
@property(readonly) NSView *contentOverlayView;
@property(readonly) struct CGRect videoBounds;
@property(readonly, getter=isReadyForDisplay) BOOL readyForDisplay;
@property(copy) NSString *videoGravity;
@property(retain) AVPlayer *player;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)performWithService:(id)arg1;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(struct CGSize)arg3 contentRect:(struct CGRect *)arg4;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)previewThumbnailImage;
- (BOOL)canShareCompositionWithService:(id)arg1;
- (void)doService:(id)arg1 withItems:(id)arg2;
@property BOOL showsFullScreenToggleButton;
@property(retain) NSMenu *actionPopUpButtonMenu;
@property BOOL showsSharingServiceButton;
@property BOOL showsFrameSteppingButtons;
- (void)trimControlsViewControllerDidCancel:(id)arg1;
- (void)trimControlsViewControllerDidTrim:(id)arg1;
- (void)_callTrimCompletionHandlerWithResult:(long long)arg1;
- (void)_restorePlaybackControlsAfterTrimmingWithTrimControlsViewController:(id)arg1;
- (void)beginTrimmingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) BOOL canBeginTrimming;
- (void)flashChapterNumber:(unsigned long long)arg1 chapterTitle:(id)arg2;
@property(retain) AVPlayerController *playerController;
- (void)exitFullScreen:(id)arg1;
- (void)enterFullScreen:(id)arg1;
- (void)setIsFullScreen:(BOOL)arg1;
@property(readonly) BOOL isFullScreen;
@property BOOL canRequestBecomingFirstResponder;
@property BOOL canHideControls;
- (void)beginTrimmingWithMaximumDuration:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly) BOOL isTrimming;
@property __weak id <AVPlayerViewSlowMotionDelegate> slowMotionDelegate;
@property CDStruct_e83c9415 slowMotionTimeRange;
- (id)animator;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGRect)playerLayerFrameForBoundsSize:(struct CGSize)arg1 playerLayerLayoutMode:(long long)arg2;
@property(readonly) struct CGRect playerLayerFrame;
@property struct CGSize fixedPlayerLayerSize;
@property long long playerLayerLayoutMode;
- (void)hideEditControlsViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showEditControlsViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)toggleZoom:(id)arg1;
@property BOOL showsAlternateMediaTrackPreview;
@property(getter=isZoomed) BOOL zoomed;
@property BOOL canZoomVertically;
@property BOOL canZoomHorizontally;
@property CDStruct_83cd8af5 floatingPlaybackControlsMargin;
@property(retain) NSArray *noHideAreaViews;
@property(readonly) BOOL prefersUnobscuredContent;
@property(readonly) BOOL showsControlsPane;
@property(readonly) AVShareController *shareController;
- (void)touchBarControlsViewDidDisappear;
- (void)touchBarControlsViewWillAppear;
- (void)hideControlsForAuxiliaryControl;
- (void)showControlsForAuxiliaryControl;
@property BOOL showsDurationInsteadOfRemainingTime;
@property BOOL prefersReducedUserInterface;
- (struct CGRect)videoRect;
- (void)showSharingServicePickerRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
@property(readonly) BOOL canShowSharingServiceButton;
- (BOOL)inlineControlsShowMinimalControlsWhenPaused;
- (void)setInlineControlsShowMinimalControlsWhenPaused:(BOOL)arg1;
- (id)metricsDelegate;
- (void)setMetricsDelegate:(id)arg1;
- (CDUnknownBlockType)playButtonHandlerForLazyPlayerLoading;
- (void)setPlayButtonHandlerForLazyPlayerLoading:(CDUnknownBlockType)arg1;
- (void)cancelTrim:(id)arg1;
- (void)commitTrim:(id)arg1;
@property(nonatomic) BOOL includesTrimAndCancelButtons;
@property(nonatomic) BOOL flashesControlsWhenChangingStyle;
@property(nonatomic) BOOL showsAudioOnlyIndicatorView;
@property(readonly, nonatomic) NSLayoutGuide *transportControlsHeightLayoutGuide;
@property(readonly, nonatomic) BOOL controlsHidden;
@property(nonatomic) BOOL shouldInsetControlsFromVideoRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

