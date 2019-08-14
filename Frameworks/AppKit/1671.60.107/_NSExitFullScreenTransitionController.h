//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSFullScreenTransitionController.h>

@class NSMutableArray, NSScreen, _NSFullScreenTransitionOverlayWindow;

__attribute__((visibility("hidden")))
@interface _NSExitFullScreenTransitionController : _NSFullScreenTransitionController
{
    BOOL _doInProcessAnimation;
    double _duration;
    BOOL _dockInitiated;
    BOOL _exitForTabMove;
    BOOL _lastTabShouldCleanUpSpace;
    BOOL _exitForClose;
    BOOL _skipCleaningUpSpaceOnClose;
    BOOL _isPrincipalInSpace;
    BOOL _reducedMotion;
    struct CGRect _transitionedWindowBeforeSnapshotFrame;
    NSMutableArray *_backgroundWindowIDs;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    unsigned long long _destinationSpaceID;
    BOOL _beforeSnapshotIncludesWindowIDs;
    id _beforeContents;
    struct CGRect _beforeSnapshotFrame;
    NSScreen *_screen;
    BOOL _interrupted;
    BOOL _notifiedWillExitFS;
    BOOL _configuredForAfterFS;
    BOOL _didPrepareToPerformExit;
    BOOL _dockRepliedToExit;
    BOOL _didDoAfterExitFullScreen;
}

+ (id)exitTransitionForWindow:(id)arg1;
+ (id)exitTransitionForSpace:(id)arg1;
@property(nonatomic) BOOL lastTabShouldCleanUpSpace; // @synthesize lastTabShouldCleanUpSpace=_lastTabShouldCleanUpSpace;
@property(nonatomic) BOOL exitForTabMove; // @synthesize exitForTabMove=_exitForTabMove;
@property(nonatomic) BOOL skipCleaningUpSpaceOnClose; // @synthesize skipCleaningUpSpaceOnClose=_skipCleaningUpSpaceOnClose;
@property(nonatomic) BOOL exitForClose; // @synthesize exitForClose=_exitForClose;
@property(nonatomic) BOOL dockInitiated; // @synthesize dockInitiated=_dockInitiated;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) BOOL doInProcessAnimation; // @synthesize doInProcessAnimation=_doInProcessAnimation;
- (void)interrupt;
- (void)start;
- (void)configureBeforeStarting;
- (id)_gatherAfterTransitionWindowNumbers;
- (void)_swapOriginalWindowWithOverlayWindow;
- (void)_captureAfterSnapshot;
- (void)_captureBeforeSnapshot;
- (struct CGRect)_updateShadowDeltaRect:(struct CGRect *)arg1 forFrame:(struct CGRect)arg2 basedOnImage:(struct CGImage *)arg3;
- (struct CGImage *)captureAfterSnapshot;
- (struct CGImage *)captureBeforeSnapshot;
- (unsigned long long)_desktopPictureSpaceID;
- (unsigned long long)destinationSpaceID;
- (struct CGSize)transitionedWindowShadowOffset;
- (id)_windowIDsForBeforeSnapshot;
- (id)windowIDsForSnapshot;
- (void)_performExitFullScreen;
- (void)_doFailedToExitFullScreen;
- (void)_doSucceededToExitFullScreen;
- (void)_rebindAndReleaseDockAppointedAllSpaceWindows;
- (void)_startFullScreenTransition;
- (id)participatingWindowNumbers;
- (void)orderTransitionedWindowFront;
- (id)fullScreenStorage;
- (void)failedToExitFullScreen;
- (BOOL)startCustomTransition;
- (struct CGRect)transitionedWindowFrame;
- (void)doAfterExitFullScreen;
- (void)_doAfterExitFullScreen;
- (void)_clearFullScreenBits;
- (void)doBeforeExitFullScreen;
- (id)maybeFilterParticipatingWindowNumbers:(id)arg1 byScreen:(id)arg2;
- (id)gatherParticipatingWindowNumbers;
- (void)setupWindowForAfterFullScreenExit;
- (void)prepareToExitFullScreenMode;
- (BOOL)usingAppKitTransition;
- (BOOL)shouldContentWindowBeVisible;
- (BOOL)interrupted;
- (void)dealloc;

@end

