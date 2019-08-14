//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ViewBridge/NSRemoteViewMarshal-Protocol.h>
#import <ViewBridge/NSVBRedactedProtocol-Protocol.h>

@class CALayerHost, NSAccessibilityRemoteUIElement, NSAppearance, NSArray, NSCFRunLoopSemaphore, NSColor, NSData, NSDictionary, NSFakeServiceResponder, NSMutableArray, NSMutableSet, NSProxy, NSRemoteView, NSSet, NSString, NSTrackingArea, NSVBAccessoryWindow, NSViewBridge, NSViewRemoteBridge, NSXPCConnection, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSRemoteViewMarshal : NSObject <NSRemoteViewMarshal, NSVBRedactedProtocol>
{
    CALayerHost *_layerHost;
    NSCFRunLoopSemaphore *_invalidationSemaphore;
    NSRemoteView *_spawnedBy;
    NSRemoteView *_view;
    struct NSObject *_delegate;
    NSString *_resizeTransactionInProgress;
    double _accessoryViewVerticalOffset;
    double _mostRecentlyReportedScaleFactor;
    struct CGSRegionObject *_serviceWindowDragRegion;
    unsigned int _serviceConnectionID;
    unsigned int _lastKnownKeyTestWindowID;
    id _hostWindowLocalEventMonitor;
    id _processNotificationEventMonitor;
    NSAccessibilityRemoteUIElement *_accessoryViewAccessibilityParent;
    NSMutableArray *_legacyAdvanceToConfigPhaseSemaphores;
    NSColor *_serviceWindowBackgroundColor;
    NSData *_mostRecentlyReportedAccessibilityParentToken;
    NSDictionary *_remoteAccessibilityChildren;
    NSFakeServiceResponder *_fakeServiceResponder;
    struct _NSModalSession *_appModalSession;
    NSMutableArray *_deferredSheets;
    NSMutableArray *_childWindowQueue;
    NSMutableSet *_friendlyKeyFocusThieves;
    NSObject *_clientExportedObject;
    int _privateEventLoopKind;
    NSProxy<NSXPCProxyCreating> *_serviceViewControllerProxyWithAnimationSyncInterface;
    NSProxy<NSXPCProxyCreating> *_serviceViewControllerProxyWithClientInterface;
    struct CGRect _mostRecentFrameInScreenCoords;
    struct CGRect _safeFrame;
    struct CGRect _serviceWindowFrameAtBootstrap;
    int _appNapState;
    int _containingWindowOrdering;
    unsigned char _rendezvousWindowKind;
    NSSet *_rendezvousWindowBridgeKeys;
    struct CGSize _intrinsicContentSize;
    struct CGSize _serviceViewSizeAtBootstrap;
    struct CGSize _windowContentMaxSize;
    struct CGSize _windowContentMinSize;
    NSString *_identifier;
    NSAppearance *_mostRecentlySentAppearance;
    NSString *_serviceName;
    NSString *_serviceSubclassIdentifier;
    NSString *_serviceSubclassName;
    NSTrackingArea *_trackingArea;
    unsigned long long _wrappedModifySubviewsInProgress;
    NSVBAccessoryWindow *_accessoryWindow;
    unsigned char _bridgePhase;
    NSViewRemoteBridge *_bridge;
    unsigned char _windowBase;
    unsigned long long _serviceWindowStyleMask;
    long long _serviceWindowLevelAtBootstrap;
    NSXPCConnection *_auxiliaryServiceConnection;
    NSXPCConnection *_serviceMarshalConnection;
    NSXPCInterface *_clientExportedInterface;
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
    struct os_unfair_lock_s _retainReleaseLockMarshal;
    struct os_unfair_lock_s _retainReleaseLockView;
    unsigned char _shouldMaskToBounds;
    unsigned int _mouseDisassociatedFromMouseCursor;
    NSArray *_touchBarsDescription;
    unsigned long long _touchBarCount;
    unsigned int _singleTouchBar:1;
    unsigned int _associated:1;
    unsigned int _avoidReleasingClientExportedObject:1;
    unsigned int _beganSheet:1;
    unsigned int _connectionConfiguredWithServiceViewControllerClientInterface:1;
    unsigned int _constraintsDidChangeInAccessoryWindow:1;
    unsigned long long _containingWindowNotifications;
    unsigned int _disabledSuddenTermination:1;
    unsigned int _fencingCurrentTransaction:1;
    unsigned int _frameOfServiceWindowChanging:1;
    unsigned int _hasSheetsBeginning:1;
    unsigned int _hostWindowIsKnownToBeKey:1;
    unsigned int _ignoreFontSmoothingBackgroundColor:1;
    unsigned int _invalid:1;
    unsigned int _isSettingViewFrame:1;
    unsigned int _isSettingWindowStyleMask:1;
    unsigned int _isSheetBeginning:1;
    unsigned int _knownToBeContentView:1;
    unsigned int _refuseFirstResponder:1;
    unsigned int _registeredForAppNotifications:1;
    unsigned int _registeredForAppWideNotifications:1;
    unsigned int _serviceDisclosedAccessoryView:1;
    unsigned int _serviceWindowIsKey:1;
    unsigned int _serviceWindowKeynessChangeInProgress:1;
    unsigned int _synchronizesImplicitAnimations:1;
    unsigned int _trustsServiceKeyEvents:1;
    unsigned int _wantsAggressiveKeyboardFocusTheftCancellation:1;
    unsigned int _warnedAboutAbsentBridge:1;
}

+ (id)nsxpcInterface:(id)arg1;
@property(retain) NSArray *touchBarsDescription; // @synthesize touchBarsDescription=_touchBarsDescription;
@property(copy) NSDictionary *remoteAccessibilityChildren; // @synthesize remoteAccessibilityChildren=_remoteAccessibilityChildren;
@property(readonly) NSViewBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly) NSRemoteView *view; // @synthesize view=_view;
- (void)hideTouchBarPopover:(id)arg1;
- (void)showTouchBarPopover:(id)arg1 fromItem:(id)arg2 withOverlayIdentifier:(id)arg3 withCloseButton:(BOOL)arg4 withControlStrip:(BOOL)arg5 withOptions:(id)arg6;
- (void)serviceHasTouchBars:(id)arg1;
- (void)setTouchBar:(id)arg1 principalItemIdentifier:(id)arg2;
- (void)setTouchBar:(id)arg1 escapeKeyReplacementItem:(id)arg2;
- (void)setTouchBar:(id)arg1 description:(id)arg2;
- (void)setTouchBarItem:(id)arg1 itemPosition:(id)arg2;
- (void)shakeWindow;
- (void)forwardActionUpResponderChain:(id)arg1;
- (void)waitForHostKeysToRegister:(CDUnknownBlockType)arg1;
- (void)serviceHasService:(int)arg1;
- (void)associateMouseAndMouseCursorPosition:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setServiceWindowEventMask:(unsigned long long)arg1;
- (void)dragWindowRelativeToMouseDown:(struct CGPoint)arg1;
- (void)remoteViewControllerProxy:(CDUnknownBlockType)arg1;
- (void)retreatToConfigPhase;
- (void)endModalSession:(id)arg1;
- (void)beginModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3 withReply:(CDUnknownBlockType)arg4;
- (BOOL)_topmostAppModalSessionHasRendezvousWindowIdentifier:(id)arg1;
- (void)serviceWindowOrderedWithMode:(long long)arg1 relativeTo:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)forgetAccessoryView;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)setServiceContextID:(unsigned int)arg1;
- (void)setServiceWindowStyleMask:(unsigned long long)arg1;
- (void)serviceWindowDidBecomeKey;
- (void)serviceWindowDidResignKey;
- (void)serviceHasFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)setRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)exceptionSafeSetRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)serviceViewReceivedLeftMouseDown:(long long)arg1;
- (void)serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)serviceWindowWouldActivate;
- (void)updateContentMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)updateAccessibilityChildren:(id)arg1;
- (void)discloseAccessoryView:(BOOL)arg1 withVerticalOffset:(double)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (void)hasValidKeyViewInDirection:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)serviceWindowHasDragRegion:(id)arg1;
- (void)lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

