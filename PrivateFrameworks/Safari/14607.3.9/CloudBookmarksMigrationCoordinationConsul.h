//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/WBSCloudBookmarksMigrationCoordinatorLocalDataProvider-Protocol.h>
#import <Safari/WBSCloudBookmarksMigrationCoordinatorStorage-Protocol.h>

@class NSDictionary, NSString, WBSCloudBookmarksMigrationCoordinator;

__attribute__((visibility("hidden")))
@interface CloudBookmarksMigrationCoordinationConsul : NSObject <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider, WBSCloudBookmarksMigrationCoordinatorStorage>
{
    BOOL _didDeferMigrationCoordinationRequest;
    WBSCloudBookmarksMigrationCoordinator *_migrationCoordinator;
    long long _localMigrationState;
}

@property(nonatomic) long long localMigrationState; // @synthesize localMigrationState=_localMigrationState;
- (void).cxx_destruct;
- (void)_syncAgentDidFinish:(id)arg1;
@property(nonatomic) BOOL migrationReadinessDataInvalidated;
- (id)_migrationEligibilityLogsDirectoryURL;
- (id)_migrationReadinessDeciderDictionaryURL;
- (id)_migrationCoordinatorDirectoryURL;
@property(copy, nonatomic) NSDictionary *migrationReadinessDeciderDictionaryRepresentation;
@property(copy, nonatomic) NSDictionary *migrationRampEvaluatorDictionaryRepresentation;
- (void)getLocalMigrationStateForMigrationCoordinator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)forceStartMigration;
@property(readonly, nonatomic) BOOL canForceStartMigration;
- (void)_createMigrationCoordinatorIfNeeded;
- (void)startCoordinatingMigrationIfNeeded;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

