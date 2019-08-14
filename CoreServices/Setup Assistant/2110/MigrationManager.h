//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MacBuddyManager-Protocol.h"
#import "SMSystemScannerClient-Protocol.h"

@class MBMigrateMethod, NSMutableArray, NSString, SMMigrationCustomizeViewController, SMProgress_Client, SMSelectSourceViewController, SMSystem_Client, SetupStateManager;
@protocol OS_dispatch_queue;

@interface MigrationManager : NSObject <MacBuddyManager, SMSystemScannerClient>
{
    BOOL migrationPerformed;
    BOOL warnForFDE;
    BOOL landOnServerTerminalPane;
    BOOL _migrationCrashed;
    BOOL _backgroundMigrationStarted;
    NSMutableArray *migrationMessages;
    SMSystem_Client *_selectedSystem;
    SMMigrationCustomizeViewController *_customizeViewController;
    SMSelectSourceViewController *_selectSourceViewController;
    MBMigrateMethod *_migrationMethod;
    SMProgress_Client *_progressClient;
    unsigned long long _requestedClientScannerState;
    SetupStateManager *_setupStateManager;
    NSObject<OS_dispatch_queue> *_migrationErrorQueue;
}

+ (void)consumeMigrationBuddyCookie;
+ (void)setShouldResumeMigration:(id)arg1 isMigrationBuddy:(BOOL)arg2;
@property(retain) NSObject<OS_dispatch_queue> *migrationErrorQueue; // @synthesize migrationErrorQueue=_migrationErrorQueue;
@property(retain) SetupStateManager *setupStateManager; // @synthesize setupStateManager=_setupStateManager;
@property unsigned long long requestedClientScannerState; // @synthesize requestedClientScannerState=_requestedClientScannerState;
@property BOOL backgroundMigrationStarted; // @synthesize backgroundMigrationStarted=_backgroundMigrationStarted;
@property BOOL migrationCrashed; // @synthesize migrationCrashed=_migrationCrashed;
@property(retain) SMProgress_Client *progressClient; // @synthesize progressClient=_progressClient;
@property(retain) MBMigrateMethod *migrationMethod; // @synthesize migrationMethod=_migrationMethod;
@property(retain) SMSelectSourceViewController *selectSourceViewController; // @synthesize selectSourceViewController=_selectSourceViewController;
@property(retain) SMMigrationCustomizeViewController *customizeViewController; // @synthesize customizeViewController=_customizeViewController;
@property(retain) SMSystem_Client *selectedSystem; // @synthesize selectedSystem=_selectedSystem;
@property(retain) NSMutableArray *migrationMessages; // @synthesize migrationMessages;
@property BOOL warnForFDE; // @synthesize warnForFDE;
@property BOOL migrationPerformed; // @synthesize migrationPerformed;
@property BOOL landOnServerTerminalPane; // @synthesize landOnServerTerminalPane;
- (void).cxx_destruct;
- (BOOL)reportMigrationCrashAtPane:(id)arg1;
- (void)addMigrationMessage:(id)arg1;
- (void)addMigrationError:(id)arg1;
- (void)cancelMigration;
@property(readonly) BOOL userWantsToMigrate;
- (void)acknowledgeCompletion;
@property(readonly) BOOL rebootRequired;
@property(readonly) BOOL migrationIsInProgress;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

