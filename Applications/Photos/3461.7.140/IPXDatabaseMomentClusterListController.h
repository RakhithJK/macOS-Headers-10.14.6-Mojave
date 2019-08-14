//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXDatabaseContainerListController.h"

#import "IPXDatabaseContainerQueryLoadingChangeReceiver-Protocol.h"
#import "IPXDatabaseMomentsControllerClusteringChangeReceiver-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "RDLibraryMessagesReceiver-Protocol.h"

@class IPXDatabaseMomentsController, NSMutableDictionary, NSString;

@interface IPXDatabaseMomentClusterListController : IPXDatabaseContainerListController <RDLibraryMessagesReceiver, IPXObjectsControllerChangeReceiver, IPXDatabaseContainerQueryLoadingChangeReceiver, IPXDatabaseMomentsControllerClusteringChangeReceiver>
{
    NSMutableDictionary *_locked_momentClusterControllersByMomentClusterUUID;
    BOOL _isFiltered;
    IPXDatabaseMomentsController *_databaseMomentsController;
}

@property(readonly, nonatomic) IPXDatabaseMomentsController *databaseMomentsController; // @synthesize databaseMomentsController=_databaseMomentsController;
- (void).cxx_destruct;
- (void)objectsController:(id)arg1 representativeImageProperties:(unsigned long long)arg2 changedForObjects:(id)arg3 inChild:(id)arg4;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3 inChild:(id)arg4;
- (void)objectsController:(id)arg1 objectsCollectionChangedInChild:(id)arg2;
- (void)objectsController:(id)arg1 arrangedObjectsAvailableInChild:(id)arg2;
- (void)objectsController:(id)arg1 propertiesChanged:(id)arg2;
- (id)_momentClusterControllerForChildObjectsController:(id)arg1;
- (void)locked_removeMomentClusterControllerForMomentClusterUUID:(id)arg1;
- (id)locked_momentClusterControllerForMomentClusterUUID:(id)arg1;
- (void)locked_setMomentClusterController:(id)arg1 forMomentClusterUUID:(id)arg2;
- (void)locked_removeAllMomentClusterControllers;
- (id)momentClusterUUIDForDatabaseMoment:(id)arg1;
- (void)handleNotReadyChildControllers:(id)arg1;
- (void)locked_arrangedObjectsWillLoseObjects:(id)arg1;
- (void)locked_arrangedObjectsDidGainObjects:(id)arg1;
- (void)uninstallObjectsSourceMonitor;
- (void)installObjectsSourceMonitor;
- (id)initWithDatabaseMomentsController:(id)arg1 uuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
