//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDTelemetryController : NSObject
{
}

+ (id)sharedInstance;
- (void)stateMachineStartedFromClient:(unsigned long long)arg1;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2;
- (void)signInWithUserElectingResetProtectedData;
- (void)signInWithUserSkippingFlow;
- (void)stateMachineFailureDueToSyncFailure;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)piggybackSuccess;
- (void)piggybackAttempt;
- (void)didUnlockAccount;
- (void)didLockAccount;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)didRemoveLocalSecret;
- (void)didChangeLocalSecret;

@end

