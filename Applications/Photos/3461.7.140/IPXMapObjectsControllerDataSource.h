//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PlacesKit/PXPlacesStore.h>

#import "IPXObjectsControllerChangeReceiver-Protocol.h"

@class IPXObjectsController, NSMutableSet, NSString, PFDispatchQueue;
@protocol IPXCollection;

@interface IPXMapObjectsControllerDataSource : PXPlacesStore <IPXObjectsControllerChangeReceiver>
{
    id <IPXCollection> _currentCollection;
    NSMutableSet *_updatedVersions;
    PFDispatchQueue *_dataSourceQueue;
    IPXObjectsController *_objectsController;
}

@property(readonly) IPXObjectsController *objectsController; // @synthesize objectsController=_objectsController;
- (void).cxx_destruct;
- (void)objectsControllerDidDisconnect:(id)arg1;
- (void)objectsControllerWillDisconnect:(id)arg1;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (void)handleCollectionChangeWithUpdatedObjects:(id)arg1;
- (void)objectsControllerArrangedObjectsAvailable:(id)arg1;
- (void)stopObservingObjectsController;
- (void)startObservingObjectsControllerAndWaitForData:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithObjectsController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

