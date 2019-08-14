//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CPSConfigurationChangeObserver-Protocol.h"
#import "ICPAgentApplication-Protocol.h"
#import "ICPAgentServiceManager-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "PFURLHandlingSubsystem-Protocol.h"

@class CPSConfigurationClient, DisableTerminationActivityManager, ICPAgentMaintenanceTaskManager, ICPAgentMediaConversionManager, ICPAgentPushServiceManager, ICPAgentUserNotificationManager, ICPEnvironment, ICPServiceExceptionalConditionManager, NSMutableDictionary, NSString, NSXPCListener, PFURLEventHandler;

@interface ICPAgentServiceManager : NSObject <CPSConfigurationChangeObserver, PFURLHandlingSubsystem, ICPAgentApplication, ICPAgentServiceManager, NSXPCListenerDelegate>
{
    long long state;
    ICPEnvironment *environment;
    CPSConfigurationClient *_configurationClient;
    NSMutableDictionary *_serviceMap;
    NSXPCListener *_listener;
    ICPServiceExceptionalConditionManager *_exceptionalConditionManager;
    NSMutableDictionary *_pendingServiceRequests;
    ICPAgentMediaConversionManager *_mediaConversionManager;
    ICPAgentPushServiceManager *_pushServiceManager;
    ICPAgentUserNotificationManager *_userNotificationManager;
    ICPAgentMaintenanceTaskManager *_maintenanceTaskManager;
    DisableTerminationActivityManager *_disableTerminationActivityManager;
    PFURLEventHandler *_urlEventHandler;
}

@property(retain) PFURLEventHandler *urlEventHandler; // @synthesize urlEventHandler=_urlEventHandler;
@property(retain) DisableTerminationActivityManager *disableTerminationActivityManager; // @synthesize disableTerminationActivityManager=_disableTerminationActivityManager;
@property(retain) ICPAgentMaintenanceTaskManager *maintenanceTaskManager; // @synthesize maintenanceTaskManager=_maintenanceTaskManager;
@property(retain) ICPAgentUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain) ICPAgentPushServiceManager *pushServiceManager; // @synthesize pushServiceManager=_pushServiceManager;
@property(retain) ICPAgentMediaConversionManager *mediaConversionManager; // @synthesize mediaConversionManager=_mediaConversionManager;
@property(retain) NSMutableDictionary *pendingServiceRequests; // @synthesize pendingServiceRequests=_pendingServiceRequests;
@property(retain) ICPServiceExceptionalConditionManager *exceptionalConditionManager; // @synthesize exceptionalConditionManager=_exceptionalConditionManager;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSMutableDictionary *serviceMap; // @synthesize serviceMap=_serviceMap;
@property(retain) CPSConfigurationClient *configurationClient; // @synthesize configurationClient=_configurationClient;
@property(retain) ICPEnvironment *environment; // @synthesize environment;
@property long long state; // @synthesize state;
- (void).cxx_destruct;
- (void)configurationClientDidChangeLoggedInAccountStatus:(id)arg1;
- (id)serviceHandlingURL:(id)arg1;
- (void)handleURL:(id)arg1;
- (BOOL)urlRequiresSystemLibrary:(id)arg1;
- (BOOL)willHandleURL:(id)arg1;
- (void)pingForLibraryKey:(id)arg1 forWellKnownClientIdentifier:(unsigned char)arg2;
- (void)getLocationForLibraryKey:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)listenerEndpointForServiceIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)agentApplicationInformationWithReply:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)exceptionalConditionsAffectingService:(id)arg1;
- (void)endExceptionalConditionOfType:(id)arg1;
- (void)startExceptionalCondition:(id)arg1;
- (id)disableTerminationActivityForReason:(id)arg1;
- (id)appSupportServicesDirectoryURL;
- (id)persistentWorkDirectoryURLForServiceIdentifier:(id)arg1;
- (id)libraryURLForKey:(id)arg1 forClientIdentifier:(unsigned char)arg2 error:(id *)arg3;
- (id)serviceForServiceIdentifier:(id)arg1;
- (id)coreMediaStreamServiceForServiceIdentifier:(id)arg1;
- (Class)coreMediaStreamPluginClassForServiceIdentifier:(id)arg1;
- (long long)agentApplicationState;
- (void)initializeServices;
- (void)initializeUtilityServices;
- (void)systemDidDarkWake;
- (void)systemDidWake;
- (void)systemDidSleep;
- (void)shutdownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)consumeXpcStreamEvents;
- (void)initializeXpcListener;
- (id)pushToken;
- (BOOL)pushTokenIsAvailable;
- (void)initializePushService;
- (id)computePushEnvironment;
- (id)pushEnvironmentFromEntitlement;
- (void)initializeConfiguration;
- (void)registerWithLaunchServices;
- (void)start;
- (void)addService:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

