//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MBPerUserState : NSObject
{
    BOOL _didSeeCloudSetup;
    BOOL _didSeeTouchIDSetup;
    BOOL _didSeeApplePaySetup;
    BOOL _didSeeAvatarSetup;
    BOOL _didSeeSiriSetup;
    BOOL _didSeePrivacy;
    BOOL _didSeeTrueTone;
    BOOL _didSeeAppearance;
    BOOL _didSeeSyncSetup;
    BOOL _didSeeSyncSetup2;
    BOOL _didSeeiCloudLoginForStorageServices;
    BOOL _skipFirstLoginOptimization;
    BOOL _skipiCloudSetup;
    BOOL _skipSiriSetup;
    BOOL _skipPrivacySetup;
    BOOL _skipiCloudStorageSetup;
    BOOL _skipTrueTone;
    BOOL _skipAppearance;
    BOOL _miniBuddyLaunchedPostMigration;
    BOOL _miniBuddyShouldLaunchToResumeSetup;
    NSString *_previousSystemVersion;
    NSString *_previousBuildVersion;
    NSString *_lastSeenBuddyBuildVersion;
    NSString *_lastPrivacyBundleVersion;
    NSString *_lastSeenCloudProductVersion;
    NSString *_lastSeenSyncProductVersion;
    NSString *_lastSeenStorageServicesProductVersion;
    NSString *_lastPreLoginTasksPerformedBuild;
    NSString *_lastPreLoginTasksPerformedVersion;
    NSArray *_FDEUpsellCSLVUUIDs;
    unsigned long long _miniBuddyLaunchReason;
    NSDictionary *_miniBuddySetupValues;
}

+ (id)keyPathsForValuesAffectingIsNewUserAccount;
+ (id)currentPerUserState;
@property(retain) NSDictionary *miniBuddySetupValues; // @synthesize miniBuddySetupValues=_miniBuddySetupValues;
@property BOOL miniBuddyShouldLaunchToResumeSetup; // @synthesize miniBuddyShouldLaunchToResumeSetup=_miniBuddyShouldLaunchToResumeSetup;
@property BOOL miniBuddyLaunchedPostMigration; // @synthesize miniBuddyLaunchedPostMigration=_miniBuddyLaunchedPostMigration;
@property unsigned long long miniBuddyLaunchReason; // @synthesize miniBuddyLaunchReason=_miniBuddyLaunchReason;
@property BOOL skipAppearance; // @synthesize skipAppearance=_skipAppearance;
@property BOOL skipTrueTone; // @synthesize skipTrueTone=_skipTrueTone;
@property BOOL skipiCloudStorageSetup; // @synthesize skipiCloudStorageSetup=_skipiCloudStorageSetup;
@property BOOL skipPrivacySetup; // @synthesize skipPrivacySetup=_skipPrivacySetup;
@property BOOL skipSiriSetup; // @synthesize skipSiriSetup=_skipSiriSetup;
@property BOOL skipiCloudSetup; // @synthesize skipiCloudSetup=_skipiCloudSetup;
@property(retain) NSArray *FDEUpsellCSLVUUIDs; // @synthesize FDEUpsellCSLVUUIDs=_FDEUpsellCSLVUUIDs;
@property BOOL skipFirstLoginOptimization; // @synthesize skipFirstLoginOptimization=_skipFirstLoginOptimization;
@property(copy) NSString *lastPreLoginTasksPerformedVersion; // @synthesize lastPreLoginTasksPerformedVersion=_lastPreLoginTasksPerformedVersion;
@property(copy) NSString *lastPreLoginTasksPerformedBuild; // @synthesize lastPreLoginTasksPerformedBuild=_lastPreLoginTasksPerformedBuild;
@property(copy) NSString *lastSeenStorageServicesProductVersion; // @synthesize lastSeenStorageServicesProductVersion=_lastSeenStorageServicesProductVersion;
@property(copy) NSString *lastSeenSyncProductVersion; // @synthesize lastSeenSyncProductVersion=_lastSeenSyncProductVersion;
@property BOOL didSeeiCloudLoginForStorageServices; // @synthesize didSeeiCloudLoginForStorageServices=_didSeeiCloudLoginForStorageServices;
@property BOOL didSeeSyncSetup2; // @synthesize didSeeSyncSetup2=_didSeeSyncSetup2;
@property BOOL didSeeSyncSetup; // @synthesize didSeeSyncSetup=_didSeeSyncSetup;
@property(copy) NSString *lastSeenCloudProductVersion; // @synthesize lastSeenCloudProductVersion=_lastSeenCloudProductVersion;
@property(copy) NSString *lastPrivacyBundleVersion; // @synthesize lastPrivacyBundleVersion=_lastPrivacyBundleVersion;
@property BOOL didSeeAppearance; // @synthesize didSeeAppearance=_didSeeAppearance;
@property BOOL didSeeTrueTone; // @synthesize didSeeTrueTone=_didSeeTrueTone;
@property BOOL didSeePrivacy; // @synthesize didSeePrivacy=_didSeePrivacy;
@property BOOL didSeeSiriSetup; // @synthesize didSeeSiriSetup=_didSeeSiriSetup;
@property BOOL didSeeAvatarSetup; // @synthesize didSeeAvatarSetup=_didSeeAvatarSetup;
@property BOOL didSeeApplePaySetup; // @synthesize didSeeApplePaySetup=_didSeeApplePaySetup;
@property BOOL didSeeTouchIDSetup; // @synthesize didSeeTouchIDSetup=_didSeeTouchIDSetup;
@property BOOL didSeeCloudSetup; // @synthesize didSeeCloudSetup=_didSeeCloudSetup;
@property(copy) NSString *lastSeenBuddyBuildVersion; // @synthesize lastSeenBuddyBuildVersion=_lastSeenBuddyBuildVersion;
@property(retain) NSString *previousBuildVersion; // @synthesize previousBuildVersion=_previousBuildVersion;
@property(retain) NSString *previousSystemVersion; // @synthesize previousSystemVersion=_previousSystemVersion;
- (void).cxx_destruct;
- (void)_setNumber:(id)arg1 forKey:(id)arg2;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (void)_setArray:(id)arg1 forKey:(id)arg2;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)_numberForKey:(id)arg1;
- (BOOL)_boolForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)_arrayForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (void)_clearPreferences;
- (void)loadFromDictionary:(id)arg1;
- (void)loadManagedUserDefaults;
- (void)loadFromUserDefaults;
- (BOOL)writeToDefaults;
@property(readonly) BOOL isNewUserAccount;
- (void)setPreviousSystemVersion:(id)arg1 buildVersion:(id)arg2;
- (long long)_compareSystemVersion:(id)arg1 with:(id)arg2;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;

@end

