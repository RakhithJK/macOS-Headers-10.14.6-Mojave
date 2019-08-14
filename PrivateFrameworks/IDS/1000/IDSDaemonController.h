//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonProtocol-Protocol.h>

@class IDSDaemonListener, IMLocalObject, IMRemoteObject, NSMutableDictionary, NSMutableSet, NSProtocolChecker, NSSet, NSString;
@protocol IDSDaemonProtocol, OS_dispatch_group, OS_dispatch_queue;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol>
{
    id _delegate;
    IMRemoteObject<IDSDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IDSDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_group> *_daemonConnectedGroup;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    unsigned long long _connectionID;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _hasBeenSuspended;
    BOOL _fatalErrorOccured;
    int _curXPCMessagePriority;
    NSMutableSet *_notificationServices;
}

+ (void)_setApplicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (BOOL)_applicationWillTerminate;
+ (id)sharedInstance;
@property(setter=_setAutoReconnect:) BOOL _autoReconnect; // @synthesize _autoReconnect;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property(readonly, nonatomic) IDSDaemonListener *listener; // @synthesize listener=_daemonListener;
- (void).cxx_destruct;
- (void)systemApplicationDidResume;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidSuspend;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)sendXPCObject:(id)arg1 objectContext:(id)arg2;
- (void)remoteObjectDiedNotification:(id)arg1;
- (void)localObjectDiedNotification:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (id)localObject;
- (BOOL)localObjectExists;
- (BOOL)remoteObjectExists;
- (void)_noteSetupComplete;
- (void)_noteDisconnected;
- (void)blockUntilConnected;
- (BOOL)isConnected;
@property(readonly, nonatomic) BOOL isConnecting;
@property(readonly, nonatomic) NSString *listenerID; // @synthesize listenerID=_listenerID;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2 shouldLog:(BOOL)arg3;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commandsForListenerID:(id)arg1;
- (BOOL)setCommands:(id)arg1 forListenerID:(id)arg2;
- (BOOL)setServices:(id)arg1 forListenerID:(id)arg2;
- (id)servicesForListenerID:(id)arg1;
- (void)removeListenerID:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)addedDelegateForService:(id)arg1;
- (void)_listenerSetUpdated;
@property(nonatomic) int curXPCMessagePriority; // @synthesize curXPCMessagePriority=_curXPCMessagePriority;
- (BOOL)_setCapabilities:(unsigned int)arg1;
- (unsigned int)capabilities;
- (BOOL)_setCommands:(id)arg1;
- (id)commands;
- (BOOL)_setServices:(id)arg1;
- (id)services;
- (void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)disconnectFromDaemon;
- (void)_disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_handleDaemonException:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 wait:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

