//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FI_TICloudAccountManager : NSObject
{
    struct TriStateBool fLoggedIntoICloud;
    struct TriStateBool fICloudDriveEnabled;
    struct TriStateBool fUserHasDeclinedUpgrade;
    struct TriStateBool fFirstSyncComplete;
    struct TriStateBool fSynchingDesktop;
    struct TriStateBool fSynchingDocuments;
    struct TriStateBool fIsOverQuota;
    struct TriStateBool fAppSynchingDocuments;
    struct TNSRef<BRContainer, void> fDefaultContainer;
}

+ (_Bool)isMaxTier;
+ (_Bool)appSyncingDocuments;
+ (_Bool)accountIsOverQuota;
+ (_Bool)documentsIsInTheCloud;
+ (_Bool)desktopIsInTheCloud;
+ (_Bool)shouldDisambiguateDesktopAndDocuments;
+ (_Bool)signedIniCloud;
+ (_Bool)iCloudAccountManagementAvailable;
+ (_Bool)showICloudDriveContent;
+ (_Bool)firstSyncCompleted;
+ (_Bool)userHasDeclinedUpgrade;
+ (_Bool)userIsSynchingDocuments;
+ (id)singleton;
+ (void)postOverQuotaChange;
+ (void)postStatusChange;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)appIsSyncingDocuments;
- (_Bool)documentsInTheCloud;
- (_Bool)desktopInTheCloud;
- (_Bool)isOverQuota;
- (_Bool)firstSyncHasCompleted;
- (_Bool)hasDeclinedUpgrade;
- (_Bool)isSignedIntoICloud;
- (_Bool)isSynchingDocuments;
- (_Bool)updateLoginState:(_Bool)arg1 userHasDeclinedUpgrade:(_Bool)arg2 firstSyncDownComplete:(_Bool)arg3 syncDesktop:(_Bool)arg4 syncDocuments:(_Bool)arg5 loggedIntoIcloud:(_Bool)arg6;
- (void)computeLoginState;
- (void)computeIsOverQuota;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidate;
- (void)dealloc;
- (id)_init;
- (void)iCloudAccountAvailabilityChanged;
- (id)init;

@end

