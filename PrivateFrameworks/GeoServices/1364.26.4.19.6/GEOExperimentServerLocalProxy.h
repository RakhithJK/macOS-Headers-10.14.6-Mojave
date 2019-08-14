//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOABAssignmentRequest, GEOABAssignmentResponse, NSLock, NSString;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    GEOABAssignmentRequest *_currentRequest;
    NSLock *_currentRequestLock;
}

+ (void)cancelOldActivities;
@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)_deleteExperimentInfoFromDisk;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (void)_loadExperimentsConfiguration:(CDUnknownBlockType)arg1;
- (void)forceUpdate;
- (void)_writeExperimentInfoToDisk:(id)arg1;
- (void)_updateIfNecessary;
- (BOOL)_removeOldExperimentsInfoIfNecessary;
- (void)_invalidateTileCache:(BOOL)arg1 placesCache:(BOOL)arg2;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)_executeRefreshWithinTime:(double)arg1;
- (void)_setupRefreshActivity;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
