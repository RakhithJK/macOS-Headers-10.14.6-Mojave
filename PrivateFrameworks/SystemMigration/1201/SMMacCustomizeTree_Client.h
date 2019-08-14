//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMCustomizeTree_Client.h>

@class NSNumber, NSString, SMCustomizeTreeNode_Client;

@interface SMMacCustomizeTree_Client : SMCustomizeTree_Client
{
    BOOL _simpleModeTree;
    BOOL _overallConflict;
    NSString *migratableStateDescription;
    NSNumber *filesProcessed;
    SMCustomizeTreeNode_Client *_settings;
    SMCustomizeTreeNode_Client *_network;
    SMCustomizeTreeNode_Client *_machine;
    SMCustomizeTreeNode_Client *_applications;
    SMCustomizeTreeNode_Client *_printers;
    SMCustomizeTreeNode_Client *_library;
    SMCustomizeTreeNode_Client *_fsRoot;
    SMCustomizeTreeNode_Client *_documentsAndData;
    SMCustomizeTreeNode_Client *_volumes;
    SMCustomizeTreeNode_Client *_serverData;
    unsigned long long _applicationFilesProcessed;
    unsigned long long _otherFilesProcessed;
    unsigned long long _systemSettingsFilesProcessed;
    unsigned long long _printerFilesProcessed;
    unsigned long long _serverFilesProcessed;
    unsigned long long _noGroupFilesProcessed;
}

+ (id)keyPathsForValuesAffectingRebootRequired;
+ (id)keyPathsForValuesAffectingMigratableState;
@property unsigned long long noGroupFilesProcessed; // @synthesize noGroupFilesProcessed=_noGroupFilesProcessed;
@property unsigned long long serverFilesProcessed; // @synthesize serverFilesProcessed=_serverFilesProcessed;
@property unsigned long long printerFilesProcessed; // @synthesize printerFilesProcessed=_printerFilesProcessed;
@property unsigned long long systemSettingsFilesProcessed; // @synthesize systemSettingsFilesProcessed=_systemSettingsFilesProcessed;
@property unsigned long long otherFilesProcessed; // @synthesize otherFilesProcessed=_otherFilesProcessed;
@property unsigned long long applicationFilesProcessed; // @synthesize applicationFilesProcessed=_applicationFilesProcessed;
@property(retain) SMCustomizeTreeNode_Client *serverData; // @synthesize serverData=_serverData;
@property(retain) SMCustomizeTreeNode_Client *volumes; // @synthesize volumes=_volumes;
@property BOOL overallConflict; // @synthesize overallConflict=_overallConflict;
@property BOOL simpleModeTree; // @synthesize simpleModeTree=_simpleModeTree;
@property(retain) SMCustomizeTreeNode_Client *documentsAndData; // @synthesize documentsAndData=_documentsAndData;
@property(retain) SMCustomizeTreeNode_Client *fsRoot; // @synthesize fsRoot=_fsRoot;
@property(retain) SMCustomizeTreeNode_Client *library; // @synthesize library=_library;
@property(retain) SMCustomizeTreeNode_Client *printers; // @synthesize printers=_printers;
@property(retain) SMCustomizeTreeNode_Client *applications; // @synthesize applications=_applications;
@property(retain) SMCustomizeTreeNode_Client *machine; // @synthesize machine=_machine;
@property(retain) SMCustomizeTreeNode_Client *network; // @synthesize network=_network;
@property(retain) SMCustomizeTreeNode_Client *settings; // @synthesize settings=_settings;
@property(copy) NSNumber *filesProcessed; // @synthesize filesProcessed;
@property(retain) NSString *migratableStateDescription; // @synthesize migratableStateDescription;
- (void).cxx_destruct;
- (BOOL)rebootRequired;
- (BOOL)migratableState;
- (id)migrationRequest;
- (Class)requestClass;
- (void)beginAsynchronousSizing;
- (void)generateTree;
- (void)sizingCompletedForCustomPathType:(unsigned long long)arg1 user:(id)arg2 withSize:(unsigned long long)arg3;
- (void)preliminarySizeForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3;
- (void)sizingCompletedForComponent:(id)arg1 withSize:(unsigned long long)arg2;
- (void)preliminarySize:(unsigned long long)arg1 forComponent:(id)arg2;
- (void)sizingCompletedForPathGroup:(unsigned long long)arg1 withSize:(unsigned long long)arg2;
- (void)preliminarySize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3;
- (void)setSize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3 sizeIsFinal:(BOOL)arg4;
- (void)sizingCompletedForUserWithUUID:(id)arg1 excludablePaths:(id)arg2;
- (void)preliminarySize:(unsigned long long)arg1 forUserWithUUID:(id)arg2;
- (void)addUsers:(id)arg1;
- (void)updateAllUserConflicts;
- (BOOL)updateUser:(id)arg1 withID:(id)arg2 andExcludablePaths:(id)arg3;
- (id)addUser:(id)arg1;
- (id)appropriateUserNode;
- (void)spawnOffspring:(id)arg1 forNode:(id)arg2 andUser:(id)arg3;
- (id)treeNodeWithUser:(id)arg1;
- (void)tearDown;
- (id)description;
- (void)dealloc;
- (id)init;

@end

