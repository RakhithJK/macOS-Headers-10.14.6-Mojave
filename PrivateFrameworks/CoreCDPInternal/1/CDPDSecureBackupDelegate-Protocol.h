//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CDPDSecureBackupContext, CDPDSecureBackupController, NSString;

@protocol CDPDSecureBackupDelegate
- (void)promptForLocalSecretWithCompletion:(void (^)(NSString *, unsigned long long, NSError *))arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (BOOL)synchronizeCircleViewsForSecureBackupContext:(CDPDSecureBackupContext *)arg1;
- (NSString *)circlePeerIDForSecureBackupController:(CDPDSecureBackupController *)arg1;
@end

