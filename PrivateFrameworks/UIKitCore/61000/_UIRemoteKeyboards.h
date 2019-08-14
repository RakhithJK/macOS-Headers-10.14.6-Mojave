//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIKeyboardArbitrationClient-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardControllerDelegate-Protocol.h>
#import <UIKitCore/_UIRemoteKeyboardDistributedViewSource-Protocol.h>

@class FBSScene, NSArray, NSHashTable, NSMutableArray, NSMutableSet, NSString, NSXPCConnection, UIScreen, UIView, UIWindow, _UIKeyboardChangedInformation;
@protocol _UIKeyboardArbitration;

@interface _UIRemoteKeyboards : NSObject <_UIRemoteKeyboardDistributedViewSource, _UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate>
{
    NSHashTable *_windowControllers;
    int _ignoreLayoutSubviews;
    FBSScene *_requiredScene;
    double _requiredLevel;
    NSMutableArray *_activePIDs;
    UIView *_keyboardSnapshot;
    BOOL _expectingInitialState;
    int _hostedCount;
    BOOL _hasFocus;
    BOOL _hadFocusBeforeOverlay;
    BOOL _expectedSuppression;
    int _externalSuppression;
    int _recursionCheck;
    NSMutableSet *_pendingKeyboardGrabs;
    BOOL _takingSnapshot;
    BOOL _windowEnabled;
    UIScreen *_lastScreen;
    BOOL _disablingKeyboard;
    BOOL _enableMultiscreenHack;
    BOOL _currentKeyboard;
    BOOL _updatingHeight;
    BOOL _handlingRemoteEvent;
    BOOL _shouldFence;
    NSXPCConnection *_connection;
    _UIKeyboardChangedInformation *_currentState;
}

+ (id)createArbiterConnection;
+ (id)serviceName;
+ (BOOL)useSystemService;
+ (id)sharedRemoteKeyboards;
+ (BOOL)enabled;
@property(nonatomic) BOOL shouldFence; // @synthesize shouldFence=_shouldFence;
@property(readonly) BOOL handlingRemoteEvent; // @synthesize handlingRemoteEvent=_handlingRemoteEvent;
@property(readonly) BOOL updatingHeight; // @synthesize updatingHeight=_updatingHeight;
@property BOOL currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property(retain) _UIKeyboardChangedInformation *currentState; // @synthesize currentState=_currentState;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) BOOL enableMultiscreenHack; // @synthesize enableMultiscreenHack=_enableMultiscreenHack;
- (void)didRemoveDeactivationReason:(id)arg1;
- (void)willAddDeactivationReason:(id)arg1;
- (BOOL)shouldAllowInputViewsRestoredForId:(id)arg1;
- (void)restorePreservedInputViewsIfNecessary;
- (void)peekApplicationEvent:(id)arg1;
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)forceKeyboardAway;
- (void)queue_setKeyboardDisabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property BOOL disableBecomeFirstResponder;
- (void)queue_keyboardTransition:(id)arg1 event:(unsigned long long)arg2 withInfo:(id)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)queue_keyboardSuppressed:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setSuppressingKeyboard:(BOOL)arg1;
- (BOOL)hasAnyHostedViews;
@property(readonly, retain) NSArray *currentHostedPIDs;
- (void)addHostedWindowView:(id)arg1 fromPID:(int)arg2;
@property(readonly) UIWindow *keyboardWindow;
@property(readonly) BOOL remoteKeyboardUndocked;
@property(readonly) BOOL keyboardActive;
@property(readonly) double iavHeight;
@property(readonly) double intersectionHeight;
@property(readonly) BOOL keyboardVisible;
- (void)finishWithHostedWindow;
- (id)prepareForHostedWindow;
- (id)_activeScreen;
- (void)performOnDistributedControllers:(CDUnknownBlockType)arg1;
- (void)_performOnDistributedControllersExceptSelf:(CDUnknownBlockType)arg1;
- (void)performOnControllers:(CDUnknownBlockType)arg1;
- (void)unregisterController:(id)arg1;
- (void)registerController:(id)arg1;
- (void)ignoreLayoutNotifications:(CDUnknownBlockType)arg1;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (void)setWindowLevel:(double)arg1 sceneLevel:(double)arg2 forResponder:(id)arg3;
- (void)completeMoveKeyboardForWindow:(id)arg1;
- (id)viewHostForWindow:(id)arg1;
- (void)prepareToMoveKeyboard:(struct CGRect)arg1 withIAV:(struct CGRect)arg2 showing:(BOOL)arg3 forScreen:(id)arg4;
- (BOOL)wantsToShowKeyboardForWindow:(id)arg1;
- (BOOL)isOnScreenRotating;
- (BOOL)allowedToShowKeyboard;
- (BOOL)needsToShowKeyboardForWindow:(id)arg1;
- (void)applicationResume:(id)arg1;
- (void)willResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)_lostWindow:(id)arg1;
- (void)setWindowEnabled:(BOOL)arg1;
@property(readonly, retain) FBSScene *requiredScene;
@property(readonly) BOOL oldPathForSnapshot;
@property(nonatomic) BOOL isSnapshotting;
- (void)checkState;
- (void)sceneUpdated;
- (void)reloadForSnapshotting;
- (Class)keyboardWindowClass;
- (void)checkConnection;
- (void)cleanSuppression;
- (void)stopConnection;
- (void)queue_getDebugInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_applicationLostFocusWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardChangedWithCompletion:(CDUnknownBlockType)arg1;
- (void)queue_keyboardChanged:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)keyboardChangedCompleted;
- (void)keyboardChanged:(id)arg1 shouldConsiderSnapshottingKeyboard:(BOOL)arg2 isLocalEvent:(BOOL)arg3;
- (void)resetSnapshotWithWindowCheck:(BOOL)arg1;
- (void)startConnection;
- (void)queue_failedConnection:(id)arg1;
@property(readonly) id <_UIKeyboardArbitration> proxy;
- (void)dealloc;
- (id)init;
- (void)setPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 generateSplitNotification:(BOOL)arg4;
- (void)completeTransition:(id)arg1 withInfo:(id)arg2;
- (void)updateTransition:(id)arg1 withInfo:(id)arg2;
- (void)startTransition:(id)arg1 withInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

