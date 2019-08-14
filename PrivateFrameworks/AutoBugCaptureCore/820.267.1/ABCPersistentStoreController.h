//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnalyticsWorkspace;
@protocol ABCPersistentStoreControllerDelegate, OS_dispatch_queue;

@interface ABCPersistentStoreController : NSObject
{
    AnalyticsWorkspace *_workspace;
    BOOL workspaceReady;
    AnalyticsWorkspace *tempWorkspace;
    NSObject<OS_dispatch_queue> *storeQueue;
    id <ABCPersistentStoreControllerDelegate> _delegate;
}

+ (id)defaultContainerDirectory;
@property(nonatomic) __weak id <ABCPersistentStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAllCaseStorages;
- (void)removeCaseStorageWithID:(id)arg1;
- (void)removeCaseStoragesWithCaseIDs:(id)arg1;
- (void)removeCaseStoragesWithUUIDs:(id)arg1;
- (void)caseAttachmentsForDiagnosticCaseIDs:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)caseAttachmentsForAllDiagnosticCasesWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)cleanupDiagnosticCaseStorage;
- (void)cleanupDiagnosticCaseUsage;
- (void)shutdown;
- (void)save:(BOOL)arg1;
- (void)save;
- (id)caseUsageAnalytics;
- (id)caseStorageAnalytics;
- (BOOL)prepareWorkspaceWithDirectoryPath:(id)arg1;
- (id)prepareDataDirectoryWithName:(id)arg1 containerPath:(id)arg2;
@property(readonly, nonatomic) AnalyticsWorkspace *workspace; // @dynamic workspace;
- (id)init;
- (id)initWithName:(id)arg1 inDirectory:(id)arg2;

@end

