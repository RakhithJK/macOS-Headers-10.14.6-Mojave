//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSTimer;

@interface ICMigrationController : NSObject
{
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_numberOfRetriesBySelector;
    NSTimer *_repeatingImportTimer;
}

+ (struct NSManagedObjectContext *)legacyAccountContext;
+ (id)legacyLocalAccount;
+ (id)legacyAccountNameForPrimaryICloudAccount;
+ (struct NFAccount *)legacyAccountForPrimaryICloudAccount;
+ (struct NFAccount *)accountForAccountIdentifier:(id)arg1;
+ (struct NFAccount *)ensureLegacyAccountIsValid:(struct NFAccount *)arg1;
+ (id)legacyAccountsBeingCopied;
+ (void)pushMigrationStateToCloud;
+ (void)upgradeEmptyLocalLegacyAccountIfNecessary;
+ (void)migrateLocalAccountIfNecessary;
+ (BOOL)shouldHideICloudIMAPAccount;
+ (id)stringFromMigrationState:(short)arg1;
+ (void)setCurrentMigrationState:(short)arg1;
+ (short)currentMigrationState;
+ (void)setDidChooseToMigrateLocalAccount:(BOOL)arg1;
+ (BOOL)didChooseToMigrateLocalAccount;
+ (void)setDidMigrateLocalAccount:(BOOL)arg1;
+ (BOOL)didMigrateLocalAccount;
+ (id)migrationDeviceIdentifier;
+ (BOOL)sharedControllerExists;
+ (id)sharedController;
+ (void)continueMigrationIfNecessary;
+ (void)initialize;
@property(retain, nonatomic) NSTimer *repeatingImportTimer; // @synthesize repeatingImportTimer=_repeatingImportTimer;
@property(retain, nonatomic) NSMutableDictionary *numberOfRetriesBySelector; // @synthesize numberOfRetriesBySelector=_numberOfRetriesBySelector;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (id)newAccountProxyForAccount:(id)arg1;
- (id)accountProxyForAccount:(id)arg1;
- (void)disableLegacyAccount:(id)arg1;
- (void)reallyPerformFinalRefreshForICloudAccount;
- (void)performFinalRefreshForICloudAccount;
- (void)disableNotesForACAccount:(id)arg1 inStore:(id)arg2;
- (void)clearRetryCountForSelector:(SEL)arg1;
- (void)retrySelector:(SEL)arg1;
- (BOOL)isInternetReachable;
- (void)reachabilityChanged:(id)arg1;
- (void)copyNotesFromLegacyAccount:(struct NFAccount *)arg1 toAccount:(id)arg2;
- (id)legacyAccountObjectIDsBeingCopied;
- (void)performFinalPushToCloudKit;
- (void)startICloudImportOperationIfNecessary;
- (void)stopRepeatingImportTimer;
- (void)startRepeatingImportTimer;
- (void)cancelAllOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importNotesFromLegacyAccount:(id)arg1 toAccount:(id)arg2 renameFolders:(BOOL)arg3 isPrimaryAccount:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)importLegacyNotesForICloudAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performFinalImportForICloudAccount;
- (void)continueMigrationForICloudAccount;
- (void)startMigrationForICloudAccount;
- (void)accountsDidChange:(id)arg1;
- (void)migrationStateDidChange:(id)arg1;
- (void)resetNotificationObservers;
- (id)database;
- (void)dealloc;
- (id)init;

@end
