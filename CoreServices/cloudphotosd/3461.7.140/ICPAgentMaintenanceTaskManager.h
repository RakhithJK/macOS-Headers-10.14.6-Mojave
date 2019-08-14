//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CPSConfigurationChangeObserver-Protocol.h"

@class NSString;
@protocol ICPAgentServiceManager, OS_dispatch_queue;

@interface ICPAgentMaintenanceTaskManager : NSObject <CPSConfigurationChangeObserver>
{
    NSObject<ICPAgentServiceManager> *_serviceManager;
    id _systemLibraryChangeObserver;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) id systemLibraryChangeObserver; // @synthesize systemLibraryChangeObserver=_systemLibraryChangeObserver;
@property __weak NSObject<ICPAgentServiceManager> *serviceManager; // @synthesize serviceManager=_serviceManager;
- (void).cxx_destruct;
- (BOOL)serviceManagerIsRunning;
- (void)performServiceStateDependentUpdatesInSystemPhotoLibrary;
- (void)configurationClient:(id)arg1 didChangeStateForServiceIdentifiers:(id)arg2;
- (void)startListeningForServiceStateChanges;
- (void)startListeningForSystemLibraryChanges;
- (void)fetchMPSStateWithCloudServiceStatusInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMPSStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)runPeriodicMaintenanceTasksForXPCActivity:(id)arg1;
- (void)checkInWithPeriodicMaintenanceXPCActivity;
- (void)startListeningForEventsTriggeringMaintenance;
- (id)initWithServiceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

