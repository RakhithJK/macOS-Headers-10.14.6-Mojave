//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUAudioDeviceControllerActions-Protocol.h>
#import <TelephonyUtilities/TUCallServicesClientCapabilitiesActions-Protocol.h>
#import <TelephonyUtilities/TUCallServicesProxyCallActions-Protocol.h>
#import <TelephonyUtilities/TUCallServicesXPCClient-Protocol.h>
#import <TelephonyUtilities/TURouteControllerActions-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSString, NSXPCConnection, TUCallCenter, TUCallNotificationManager, TUCallServicesClientCapabilities;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, TUCallContainerPrivate, TUCallServicesXPCServer, TURouteControllerClient;

@interface TUCallServicesInterface : NSObject <TUCallServicesXPCClient, TUCallServicesProxyCallActions, TUCallServicesClientCapabilitiesActions, TUAudioDeviceControllerActions, TURouteControllerActions>
{
    BOOL _hasRequestedInitialState;
    BOOL _hasDaemonDelegateLaunched;
    int _connectionRequestNotificationToken;
    id <TURouteControllerClient> _routeControllerClient;
    id <TUCallServicesXPCServer> _daemonDelegate;
    TUCallServicesClientCapabilities *_callServicesClientCapabilities;
    TUCallCenter *_callCenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
    NSArray *_currentCalls;
    NSMapTable *_uniqueProxyIdentifierToProxyCall;
    TUCallNotificationManager *_callNotificationManager;
    NSArray *_localProxyCalls;
}

@property(nonatomic) BOOL hasDaemonDelegateLaunched; // @synthesize hasDaemonDelegateLaunched=_hasDaemonDelegateLaunched;
@property(copy, nonatomic) NSArray *localProxyCalls; // @synthesize localProxyCalls=_localProxyCalls;
@property(retain, nonatomic) TUCallNotificationManager *callNotificationManager; // @synthesize callNotificationManager=_callNotificationManager;
@property(retain, nonatomic) NSMapTable *uniqueProxyIdentifierToProxyCall; // @synthesize uniqueProxyIdentifierToProxyCall=_uniqueProxyIdentifierToProxyCall;
@property(copy, nonatomic) NSArray *currentCalls; // @synthesize currentCalls=_currentCalls;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *initialStateSemaphore; // @synthesize initialStateSemaphore=_initialStateSemaphore;
@property(nonatomic) BOOL hasRequestedInitialState; // @synthesize hasRequestedInitialState=_hasRequestedInitialState;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) int connectionRequestNotificationToken; // @synthesize connectionRequestNotificationToken=_connectionRequestNotificationToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain, nonatomic) TUCallServicesClientCapabilities *callServicesClientCapabilities; // @synthesize callServicesClientCapabilities=_callServicesClientCapabilities;
@property(nonatomic) __weak id <TUCallServicesXPCServer> daemonDelegate; // @synthesize daemonDelegate=_daemonDelegate;
@property(retain, nonatomic) id <TURouteControllerClient> routeControllerClient; // @synthesize routeControllerClient=_routeControllerClient;
- (void).cxx_destruct;
- (oneway void)handleNotificationName:(id)arg1 forCallWithUniqueProxyIdentifier:(id)arg2 userInfo:(id)arg3;
- (oneway void)resetCallProvisionalStates;
- (oneway void)_handleCurrentCallsChanged:(id)arg1 callsDisconnected:(id)arg2;
- (oneway void)handleCurrentCallsChanged:(id)arg1 callDisconnected:(id)arg2;
- (oneway void)handleMeterLevelChangedTo:(float)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (oneway void)handleFrequencyChangedTo:(id)arg1 inDirection:(int)arg2 forCallsWithUniqueProxyIdentifiers:(id)arg3;
- (oneway void)handleRoutesByUniqueIdentifierUpdated:(id)arg1;
- (oneway void)setClientCapabilities:(id)arg1;
@property(readonly, nonatomic) NSDictionary *routesByUniqueIdentifier;
- (oneway void)pickRouteWithUniqueIdentifier:(id)arg1;
- (oneway void)routesByUniqueIdentifier:(CDUnknownBlockType)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
- (oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
- (oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (oneway void)enteredBackgroundForAllCalls;
- (oneway void)willEnterBackgroundForAllCalls;
- (oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)updateCallWithProxy:(id)arg1;
- (oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)pullHostedCallsFromPairedHostDevice;
- (oneway void)pushHostedCallsToDestination:(id)arg1;
- (oneway void)pullCallFromClientUsingHandoffActivityUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
- (oneway void)pullRelayingCallsFromClient;
- (oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)disconnectAllCalls;
- (oneway void)disconnectCurrentCallAndActivateHeld;
- (oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
- (oneway void)swapCalls;
- (oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
- (oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1;
- (oneway void)answerCallWithRequest:(id)arg1;
- (id)joinConversationWithRequest:(id)arg1;
- (id)dialWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id <TUCallContainerPrivate> callContainer;
- (void)handleServerDisconnect;
- (void)handleServerReconnect;
- (void)waitForInitialStateIfNecessary;
- (void)requestCurrentStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tearDownXPCConnection;
- (void)registerCall:(id)arg1;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1 andWait:(BOOL)arg2;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) void *queueContext;
- (id)_proxyCallWithUniqueProxyIdentifier:(id)arg1;
- (id)_proxyCallWithCall:(id)arg1;
- (void)_updateCurrentCalls:(id)arg1 withNotificationsUsingUpdatedCalls:(id)arg2;
- (void)_updateCurrentCallsWithoutNotifications:(id)arg1;
- (void)_updateCurrentCalls:(id)arg1;
- (void)_registerCall:(id)arg1;
- (void)_tearDownXPCConnection;
- (void)_setUpXPCConnection;
- (id)synchronousDaemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonDelegateWithErrorHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL daemonDelegateIsLocal;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithQueue:(id)arg1 callCenter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

