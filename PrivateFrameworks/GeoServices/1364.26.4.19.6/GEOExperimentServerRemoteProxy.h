//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOExperimentServerProxy-Protocol.h>

@class GEOABAssignmentResponse, NSLock, NSString;
@protocol GEOExperimentServerProxyDelegate;

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy>
{
    id <GEOExperimentServerProxyDelegate> _delegate;
    GEOABAssignmentResponse *_experimentsInfo;
    NSLock *_experimentsInfoLock;
    int _experimentsChangedToken;
}

@property(nonatomic) __weak id <GEOExperimentServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_fetchAllAvailableExperiments:(CDUnknownBlockType)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)forceUpdate;
- (void)abAssignUUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
@property(readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

