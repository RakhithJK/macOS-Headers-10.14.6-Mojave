//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <ViewBridge/AuxiliaryCallsService-Protocol.h>
#import <ViewBridge/NSVBXPCConnectionClient-Protocol.h>
#import <ViewBridge/NSViewServiceMarshal-Protocol.h>
#import <ViewBridge/NSXPCConnectionDelegate-Protocol.h>
#import <ViewBridge/NSXPCListenerDelegate-Protocol.h>

@class NSAccessibilityRemoteUIElement, NSArray, NSCFRunLoopObserver, NSColor, NSDictionary, NSLayoutConstraint, NSMutableArray, NSResponder, NSServiceViewController, NSString, NSVB_ViewServiceBehaviorProxy, NSViewBridge, NSWindow, NSXPCConnection, NSXPCInterface;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface NSViewServiceMarshal : NSView <NSXPCListenerDelegate, NSVBXPCConnectionClient, AuxiliaryCallsService, NSViewServiceMarshal, NSXPCConnectionDelegate>
{
    struct NSEdgeInsets _alignmentRectInsets;
    struct CGSize _mostRecentlyReportedContentMinSize;
    struct CGSize _mostRecentlyReportedContentMaxSize;
    unsigned long long _serviceFlags;
    NSAccessibilityRemoteUIElement *_hostAccessibilityParent;
    NSDictionary *_accessoryAccessibilityChildren;
    NSResponder *_suspendedFirstResponder;
    unsigned long long _clientRequestedStyleMask;
    unsigned long long _windowIsOrdering;
    NSColor *_fontSmoothingBackgroundColor;
    struct CGSRegionObject *_windowResizingRegion;
    struct CGSRegionObject *_visibleRegion;
    NSXPCInterface *_clientExportedInterface;
    unsigned int _hostWindow;
    unsigned int _mostRecentlyReportedWindowContextID;
    NSVB_ViewServiceBehaviorProxy *_clientExportedObject;
    NSVB_ViewServiceBehaviorProxy *_uiBehaviorProxy;
    double _remoteViewBackingScaleFactor;
    NSLayoutConstraint *_layoutConstraintWidth;
    NSLayoutConstraint *_layoutConstraintHeight;
    NSString *_remoteViewIdentifier;
    id <NSObject> _activity;
    struct CGSize _sizeHint;
    struct CGRect _remoteViewFrameInScreenCoords;
    NSViewBridge *_bridge;
    NSServiceViewController *_viewController;
    NSXPCConnection *_auxiliaryServiceConnection;
    NSXPCConnection *_remoteViewMarshalConnection;
    unsigned char _bridgePhase;
    unsigned long long _reportControllerWindow;
    CDUnknownBlockType _hostWindowKeynessReactionPending;
    CDUnknownBlockType _remoteViewFirstResponderReactionPending;
    NSMutableArray *_resizeTransactionsInProgress;
    int _windowFrameAnimationSpawnedByRemoteView;
    unsigned char _windowKeyness;
    long long _windowOrderingMode;
    struct os_unfair_lock_s _retainReleaseLock;
    unsigned int _accessoryViewContainsFirstResponder:1;
    unsigned int _didConfigForRemoteViewControllerInterface:1;
    unsigned int _didSetView:1;
    unsigned int _hadAccessibilityParent:1;
    unsigned int _hasActivatedTSM:1;
    unsigned int _hostWindowFrameAnimationInProgress:1;
    unsigned int _hostWindowIsKey:1;
    unsigned int _hostWindowKeynessChangeInProgress:1;
    unsigned int _invalid:1;
    unsigned int _notificationsRegistered:1;
    unsigned int _remoteAccessoryViewCanBecomeKeyView:1;
    unsigned int _remoteFirstResponderChangeInProgress:1;
    unsigned int _remoteViewDidMoveInProgress:1;
    unsigned int _remoteViewGeometryChangeInProgress:1;
    unsigned int _remoteViewIsContentView:1;
    unsigned int _remoteViewIsFirstResponder:1;
    unsigned int _reportedLackOfAccessibilityParent:1;
    unsigned int _resizeRequestCompletionInProgress:1;
    unsigned int _setStyleMaskInProgress:1;
    unsigned int _shouldOrderWindowOut:1;
    unsigned int _shouldReportConstraintsOfWindowMinMaxSize:1;
    unsigned int _transactionBegun:1;
    unsigned int _willReportConstraintsOfWindowMinMaxSize:1;
    unsigned int _willUpdateAccessibilityChildren:1;
    unsigned int _hostWindowIsFunctionRow:1;
    NSArray *_mostRecentlySentTouchBarsDescription;
    NSCFRunLoopObserver *_touchBarsObserver;
}

+ (BOOL)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(CDUnknownBlockType)arg4;
+ (void)patchNSWindow;
+ (void)patchNSView;
+ (void)windowWillOrderOnScreen:(id)arg1;
+ (void)windowDidOrderOnScreenAndFinishAnimating:(id)arg1;
+ (BOOL)considerWindowForRendezvous:(id)arg1;
+ (BOOL)beginFreeWindowRendezvous:(id)arg1;
+ (BOOL)isSettingStyleMaskOfWindow:(id)arg1;
+ (int)hostProcessIdentifier;
+ (id)auxiliaryProxyFor:(const char *)arg1;
+ (void)choseNotToRendezvous:(id)arg1 because:(const char *)arg2;
+ (void)logIfFirstRepsonderOf:(id)arg1 isNot:(id)arg2;
+ (id)viewBridgeAuxiliaryProxyForConnection:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
+ (BOOL)responder:(id)arg1 isFieldEditorFor:(id)arg2;
+ (BOOL)serviceWindowWouldActivate:(id)arg1;
+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
+ (id)serviceMarshalForServiceWindow:(id)arg1;
+ (id)serviceMarshalForRemoteViewIdentifier:(id)arg1;
+ (id)serviceMarshalForHostWindow:(unsigned int)arg1;
+ (id)serviceMarshalForTouchBarChanges;
+ (id)serviceMarshalForAppModalSession:(int)arg1;
+ (void)informHostsOfConnectionToService:(int)arg1;
+ (id)semaphoreForViewBridgePrivateMode;
@property(retain) NSArray *mostRecentlySentTouchBarsDescription; // @synthesize mostRecentlySentTouchBarsDescription=_mostRecentlySentTouchBarsDescription;
@property(readonly) NSServiceViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) NSVB_ViewServiceBehaviorProxy *uiBehaviorProxy; // @synthesize uiBehaviorProxy=_uiBehaviorProxy;
@property(readonly) unsigned long long serviceFlags; // @synthesize serviceFlags=_serviceFlags;
@property(readonly) NSString *remoteViewIdentifier; // @synthesize remoteViewIdentifier=_remoteViewIdentifier;
@property struct CGRect remoteViewFrameInScreenCoords; // @synthesize remoteViewFrameInScreenCoords=_remoteViewFrameInScreenCoords;
@property(readonly) unsigned int hostWindow; // @synthesize hostWindow=_hostWindow;
@property(retain) NSAccessibilityRemoteUIElement *hostAccessibilityParent; // @synthesize hostAccessibilityParent=_hostAccessibilityParent;
@property unsigned char bridgePhase; // @synthesize bridgePhase=_bridgePhase;
@property(readonly) struct NSEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(retain) NSDictionary *accessoryAccessibilityChildren; // @synthesize accessoryAccessibilityChildren=_accessoryAccessibilityChildren;
- (void)hasTouchBars:(id)arg1;
- (void)setHostTouchBar:(id)arg1 escapeKeyReplacementItem:(id)arg2;
- (void)setHostTouchBar:(id)arg1 principalItemIdentifier:(id)arg2;
- (void)setHostTouchBar:(id)arg1 description:(id)arg2;
- (void)setHostTouchBarItem:(id)arg1 itemPosition:(id)arg2;
- (void)showTouchBarPopover:(id)arg1 fromItem:(id)arg2 withOverlayIdentifier:(id)arg3 withCloseButton:(BOOL)arg4 withControlStrip:(BOOL)arg5 withOptions:(id)arg6;
- (void)hideTouchBarPopover:(id)arg1;
- (void)remoteViewCaresAboutTouchBars:(BOOL)arg1;
- (void)remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(id)arg2 forItem:(id)arg3;
- (void)remoteViewBackingScaleFactorDidChange:(double)arg1;
- (void)withHostWindowFrameAnimationInProgress:(BOOL)arg1 perform:(CDUnknownBlockType)arg2;
@property(readonly) BOOL remoteViewDidMoveInProgress;
@property(readonly) BOOL hostWindowFrameAnimationInProgress;
- (void)refreshAccessoryViewBitmap:(id)arg1;
- (struct CGRect)serviceWindowFrameForRemoteViewFrame;
@property(readonly) CDStruct_6ad76789 hostAppAuditToken;
@property(readonly) struct CGSize remoteViewSize;
- (void)frameOfServiceWindowDidChange:(struct CGRect)arg1 fauxSynchronously:(BOOL)arg2;
- (void)endPrivateEventLoop;
- (void)forwardPotentialCommandEquivalentToAuxService:(id)arg1 eventDeliveredByAppKit:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)runCommandEquivalentEventLoop;
- (void)_runCommandEquivalentEventLoop;
- (BOOL)stopCommandEquivalentEventLoop;
- (void)whileFilteringResponderChain:(CDUnknownBlockType)arg1;
- (void)forwardActionUpHostResponderChain:(SEL)arg1;
- (void)remoteViewIsContentView:(BOOL)arg1;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)allowAppNap:(BOOL)arg1;
- (void)setRemoteViewEffectiveAppearance:(id)arg1;
- (void)setViewVibrantBlendingStyle:(unsigned long long)arg1;
- (void)remoteViewContainingWindowOcclusionStateDidChange:(unsigned long long)arg1;
- (void)remoteViewDidMove:(struct CGPoint)arg1;
- (void)hostWindowLevelDidChange:(long long)arg1;
- (void)requestResize:(struct CGSize)arg1 transaction:(id)arg2 animate:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_invokeBlockOnCurrentFenceIfAny:(CDUnknownBlockType)arg1;
- (void)invokeBlockOnCurrentFenceIfAny:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)remoteViewControllerProxy:(CDUnknownBlockType)arg1;
- (void)serviceViewControllerProxy:(CDUnknownBlockType)arg1;
- (BOOL)ensureClientExportedObject;
- (BOOL)ensureClientExportedInterface;
- (void)accessibilityTokenForFocusedUIElement:(CDUnknownBlockType)arg1;
- (id)accessibilityTokenForFocusedUIElement;
- (BOOL)eventResizingRegionContainsPoint:(struct CGPoint)arg1;
- (void)retreatToConfigPhase;
- (void)setFontSmoothingBackgroundColor:(id)arg1;
- (void)setFontSmoothingBackgroundColorIfNeeded:(id)arg1;
- (void)setFontSmoothingBackgroundColorIfNeeded;
- (void)sendMinMaxWindowSizesToHostIfNeeded:(id)arg1 now:(BOOL)arg2;
- (void)sendMinMaxWindowSizesToHostIfNeeded:(id)arg1;
- (BOOL)hostWindowIsKey:(id)arg1;
- (void)becomeKeyWindow:(id)arg1;
- (void)resignKeyWindow:(id)arg1;
- (void)windowReceivedLeftMouseDown:(id)arg1;
- (void)remoteViewReceivedLeftMouseDown:(long long)arg1;
- (void)windowReceivedScrollWheel:(id)arg1;
- (void)discloseAccessoryView:(BOOL)arg1 withVerticalOffset:(double)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (void)hostWindowReceivedMouseEventType:(unsigned long long)arg1;
- (void)hostWindowReceivedEventType:(unsigned long long)arg1;
- (void)hierarchyDidChangeInView:(id)arg1;
- (void)endHostModalSession:(id)arg1;
- (void)beginHostModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)serviceAccessoryViewBecameFirstResponder:(BOOL)arg1;
- (void)setAccessoryViewSize:(struct CGSize)arg1 alignmentRectInsets:(struct NSEdgeInsets)arg2;
- (BOOL)accessoryViewCanBecomeKeyView;
- (void)setRemoteAccessoryViewCanBecomeKeyView:(BOOL)arg1;
- (void)forgetAccessoryView;
- (void)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2;
- (id)updateAccessoryViewAccessibility:(id)arg1;
- (void)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2;
- (void)setEnhancedUserInterfaceAttribute:(id)arg1;
- (void)setAccessibilityParent:(id)arg1;
- (void)validateAction:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)performAction:(id)arg1 forTarget:(id)arg2;
- (CDStruct_0c56ca5e)findTargetAndAction:(id)arg1;
- (BOOL)validateTargetAndAction:(CDStruct_0c56ca5e *)arg1 validateMenuItem:(CDStruct_e99345e9 *)arg2 validateUserInterfaceItem:(CDStruct_e99345e9 *)arg3;
- (id)fakeMenuItemForTarget:(id)arg1 withAction:(SEL)arg2;
- (void)setServiceObject:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)advanceToRunPhase:(CDUnknownBlockType)arg1;
- (BOOL)advanceToRunPhase;
- (void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3;
@property(readonly) NSViewBridge *bridge; // @synthesize bridge=_bridge;
- (CDStruct_6ad76789)auditToken;
- (int)processIdentifier;
- (void)setRemoteObject:(id)arg1 forKey:(id)arg2;
- (BOOL)beginHostSheet:(id)arg1 isCritical:(BOOL)arg2;
- (BOOL)windowIsOrderingIn;
- (void)orderWindow:(id)arg1 mode:(long long)arg2 relativeTo:(long long)arg3;
- (void)_orderWindow:(id)arg1 mode:(long long)arg2 relativeTo:(long long)arg3;
- (void)window:(id)arg1 hasRegionForOpaqueViews:(struct CGSRegionObject *)arg2 blockingDraggableFrame:(struct CGRect)arg3;
- (void)handlePotentialCommandEquivalent:(id)arg1 eventOwner:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)windowForContextID:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (BOOL)sendEvent:(id)arg1 to:(id)arg2;
- (void)subvertedWindowMovedEvent:(id)arg1 forWindow:(id)arg2;
- (void)wrap:(id)arg1 sendEvent:(id)arg2;
- (void)cancelActionHitRemoteView:(CDUnknownBlockType)arg1;
- (BOOL)cancelActionHitRemoteView;
- (void)bootstrap:(CDStruct_e2fa5527)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)concretizedWindowBackgroundColor;
- (id)_bootstrap:(CDStruct_e2fa5527)arg1 replyData:(CDStruct_4e11500c *)arg2;
- (void)connectToAuxiliaryService:(id)arg1 window:(unsigned int)arg2;
@property(readonly) struct CGSize sizeHint;
- (void)didSetView;
- (BOOL)shouldDrawSubviewsIntoLayer;
- (void)prepareWindow:(id)arg1;
- (void)viewDidChangeAppearance:(id)arg1;
- (BOOL)setAppearanceOfWindow:(id)arg1;
- (void)remoteViewResignedFirstResponderInActiveApp:(BOOL)arg1 inFavorOf:(unsigned char)arg2;
- (void)remoteViewChangedFirstResponder:(CDUnknownBlockType)arg1;
- (void)remoteViewResignedFirstResponderInFavorOfAccessoryView:(BOOL)arg1;
- (unsigned char)remoteViewBecameFirstResponder:(unsigned long long)arg1 ignoreDirection:(BOOL)arg2 forWindowWithKey:(BOOL)arg3 inVisibleWindow:(BOOL)arg4;
- (void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3 inVisibleWindow:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
- (void)obtainFirstResponderState:(CDUnknownBlockType)arg1;
- (unsigned char)setFirstResponderForRemoteView:(unsigned long long)arg1;
- (BOOL)responder:(id)arg1 isAccessoryViewOf:(id)arg2;
- (void)hostWindowResignedKeyFocus:(BOOL)arg1 inActiveApp:(BOOL)arg2 isContentView:(BOOL)arg3;
- (void)hostWindowBecameKeyInActiveApp:(BOOL)arg1 firstResponderState:(unsigned char)arg2 isContentView:(BOOL)arg3;
- (void)hostWindowChangedKeyness:(CDUnknownBlockType)arg1;
- (void)hostWindowResignedKey:(BOOL)arg1;
- (void)afterResignKey;
- (void)remoteViewDidEndLiveResize;
- (void)remoteViewWillStartLiveResizeWithReply:(CDUnknownBlockType)arg1;
- (void)remoteViewGeometryDidChange:(struct CGRect)arg1 transaction:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (struct CGRect)_remoteViewGeometryDidChange:(id)arg1 serviceWindowSize:(struct CGSize *)arg2;
- (struct CGRect)remoteViewGeometryDidChangeInProgress:(id)arg1 serviceWindowSize:(struct CGSize *)arg2;
- (void)updateWindow:(id)arg1 frameAnimationStatusAfterActions:(CDUnknownBlockType)arg2;
- (BOOL)shouldAllowAnimationForDefaultResizeBehavior;
- (struct CGRect)accessoryViewFrameRelativeToWindow:(id)arg1;
- (id)accessoryViewForWindow:(id)arg1;
- (void)defaultResizeBehavior;
- (BOOL)ensureWindowHasCorrectOrigin:(id)arg1;
- (void)associateMouseAndMouseCursorPosition:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willBecomeAssociatedWithHostWindow:(unsigned int)arg1 atLevel:(long long)arg2 isFunctionRow:(BOOL)arg3;
- (void)_willBecomeAssociatedWithHostWindow:(unsigned int)arg1 atLevel:(long long)arg2 isFunctionRow:(BOOL)arg3;
- (void)didBecomeAssociatedWithHostWindow:(unsigned int)arg1 withKeyness:(BOOL)arg2 isFirstResponder:(BOOL)arg3 inActiveApp:(BOOL)arg4;
- (void)orderingWindow:(CDUnknownBlockType)arg1;
- (void)becomeKeyBecause:(const char *)arg1;
- (void)acquireKeyAppearanceBecauseHostWindow:(const char *)arg1;
- (void)releaseKeyFocus:(const char *)arg1;
- (void)acquireKeyFocus:(const char *)arg1;
- (id)viewBridgeAuxiliaryProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)prepareToHandleKeyEvent:(id)arg1;
- (BOOL)deactivateTSM:(const char *)arg1;
- (BOOL)activateTSM:(const char *)arg1;
- (void)_serviceWindowDidResignKey:(id)arg1;
- (void)serviceWindowDidResignKey;
- (void)_serviceWindowDidBecomeKey:(id)arg1;
- (void)serviceWindowDidBecomeKey;
- (void)_serviceWindowDidResize:(id)arg1;
- (void)maintainNotificationsForWindow:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForWindow:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForContentMaxSize:(id)arg1;
- (void)observeValueForContentMinSize:(id)arg1;
- (void)observeValueForAccessoryView:(id)arg1;
- (void)observeValueForContentView:(id)arg1;
- (void)observeValueForFirstResponder:(id)arg1;
- (void)adjustWindowContext;
- (void)informHostOfChangeToFirstResponder:(id)arg1 forWindow:(id)arg2 inDirection:(unsigned long long)arg3;
- (void)hostAppIsActive:(BOOL)arg1;
- (void)reportingControllerWindow:(CDUnknownBlockType)arg1;
- (id)window;
@property(readonly) NSWindow *viewControllerWindow;
- (void)serviceWindowWouldActivate;
- (void)setWindow:(id)arg1 styleMask:(unsigned long long)arg2;
- (id)orderedDrawerAndWindowKeyLoopGroupingViews:(id)arg1;
- (void)setEventMaskBasedOnWindow:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1 ofWindow:(id)arg2;
- (double)backingScaleFactor:(id)arg1;
- (void)shakeWindow:(id)arg1;
- (BOOL)dragWindow:(id)arg1 relativeToMouseDown:(struct CGPoint)arg2;
- (void)removeChildWindow:(id)arg1;
- (void)addChildWindow:(id)arg1 ordered:(long long)arg2 toParent:(id)arg3;
- (BOOL)setWindow:(id)arg1 frame:(struct CGRect)arg2 display:(BOOL)arg3 stashSize:(BOOL)arg4;
- (void)wrap:(id)arg1 swizzledSetFrameCommon:(struct CGRect)arg2 display:(BOOL)arg3 stashSize:(BOOL)arg4;
- (void)completeWithError:(id)arg1 andRequestedSize:(struct CGSize)arg2 withRemoteViewSize:(struct CGSize)arg3 andWindow:(id)arg4;
- (void)willNotRequestResize:(struct CGSize)arg1 ofWindow:(id)arg2 because:(const char *)arg3;
- (void)actualOrigin:(struct CGPoint)arg1 differsFromSpecifiedOrigin:(struct CGPoint)arg2 oldOrigin:(struct CGPoint)arg3 ofWindow:(id)arg4;
- (void)actualSize:(struct CGSize)arg1 differsFromSpecifiedSize:(struct CGSize)arg2 oldSize:(struct CGSize)arg3 ofWindow:(id)arg4;
- (void)actualFrame:(struct CGRect)arg1 differsFromSpecifiedFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3 ofWindow:(id)arg4;
- (void)implicitResize:(struct CGSize)arg1 ofWindow:(id)arg2;
- (void)failedImplicitResize:(struct CGSize)arg1 ofWindow:(id)arg2 withError:(id)arg3;
- (void)thwartingSetOrigin:(struct CGPoint)arg1 ofWindow:(id)arg2;
- (void)constrainContentViewSize:(struct CGSize)arg1 ofWindow:(id)arg2;
- (void)forgetConstraints;
- (BOOL)canBecomeKeyView;
- (id)remoteViewMarshal:(const char *)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)remoteViewMarshal:(const char *)arg1;
- (void)informHostOfConnectionToService:(int)arg1;
@property(readonly) BOOL isAssociatedWithRemoteWindow;
- (id)initWithConnection:(id)arg1;
- (void)invalidateAndReleaseConnectionOnMainThread;
- (void)invalidate;
- (void)orderWindowOutIfNeeded:(id)arg1;
- (void)forgetViewController:(id)arg1;
- (void)disengageFromAllWindows;
- (BOOL)_ignoreBadFirstResponders;
- (void)invalidateAccessoryView;
- (void)resignFirstResponderIfNecessary;
@property BOOL reportedLackOfAccessibilityParent;
@property BOOL hadAccessibilityParent;
@property(readonly) BOOL remoteViewIsContentView;
@property(readonly) BOOL hostWindowIsFunctionRow;
@property(readonly) BOOL invalid;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;
@property(readonly) BOOL isValid;
@property(readonly) NSString *_debuggingHint;
- (void)_remoteViewDidChangeState:(unsigned char)arg1 ofPopoverBar:(id)arg2 forItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

