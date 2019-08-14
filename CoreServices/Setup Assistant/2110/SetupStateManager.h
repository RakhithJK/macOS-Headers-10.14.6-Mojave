//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SKManagerListener-Protocol.h"

@class CloudConfigurationManager, CountryManager, DateAndTimeManager, IncompatibleSoftwareManager, KeyboardManager, LocalUserAccountManager, MBUTConnection, MigrationManager, NSString, NetworkingManager, PointingDeviceManager, PreloginTasksManager, RegistrationServerManager, ServicesManager, SoftwareUpdateManager, WiFiManager, iCloudManager;
@protocol MBUAProtocol;

@interface SetupStateManager : NSObject <SKManagerListener>
{
    BOOL _didDoTALRestore;
    unsigned int _miniBuddyTargetUID;
    CloudConfigurationManager *cloudConfigurationManager;
    CountryManager *countryManager;
    KeyboardManager *keyboardManager;
    WiFiManager *wifiManager;
    NetworkingManager *networkingManager;
    MigrationManager *migrationManager;
    iCloudManager *iCloudManager;
    LocalUserAccountManager *localUserAccountManager;
    PointingDeviceManager *pointingDeviceManager;
    ServicesManager *servicesManager;
    IncompatibleSoftwareManager *incompatibleSoftwareManager;
    DateAndTimeManager *dateAndTimeManager;
    PreloginTasksManager *preloginTasksManager;
    RegistrationServerManager *registrationServerManager;
    SoftwareUpdateManager *softwareUpdateManager;
    unsigned long long _primaryBuddyType;
    unsigned long long _secondaryBuddyType;
    NSString *_postFLOIdentifier;
    MBUTConnection *_mbusertrampoline;
}

@property unsigned int miniBuddyTargetUID; // @synthesize miniBuddyTargetUID=_miniBuddyTargetUID;
@property(retain) MBUTConnection *mbusertrampoline; // @synthesize mbusertrampoline=_mbusertrampoline;
@property(copy) NSString *postFLOIdentifier; // @synthesize postFLOIdentifier=_postFLOIdentifier;
@property BOOL didDoTALRestore; // @synthesize didDoTALRestore=_didDoTALRestore;
@property unsigned long long secondaryBuddyType; // @synthesize secondaryBuddyType=_secondaryBuddyType;
@property unsigned long long primaryBuddyType; // @synthesize primaryBuddyType=_primaryBuddyType;
@property(retain) SoftwareUpdateManager *softwareUpdateManager; // @synthesize softwareUpdateManager;
@property(retain) RegistrationServerManager *registrationServerManager; // @synthesize registrationServerManager;
@property(retain) PreloginTasksManager *preloginTasksManager; // @synthesize preloginTasksManager;
@property(retain) DateAndTimeManager *dateAndTimeManager; // @synthesize dateAndTimeManager;
@property(retain) IncompatibleSoftwareManager *incompatibleSoftwareManager; // @synthesize incompatibleSoftwareManager;
@property(retain) ServicesManager *servicesManager; // @synthesize servicesManager;
@property(retain) PointingDeviceManager *pointingDeviceManager; // @synthesize pointingDeviceManager;
@property(retain) LocalUserAccountManager *localUserAccountManager; // @synthesize localUserAccountManager;
@property(retain) iCloudManager *iCloudManager; // @synthesize iCloudManager;
@property(retain) MigrationManager *migrationManager; // @synthesize migrationManager;
@property(retain) NetworkingManager *networkingManager; // @synthesize networkingManager;
@property(retain) WiFiManager *wifiManager; // @synthesize wifiManager;
@property(retain) KeyboardManager *keyboardManager; // @synthesize keyboardManager;
@property(retain) CountryManager *countryManager; // @synthesize countryManager;
@property(retain) CloudConfigurationManager *cloudConfigurationManager; // @synthesize cloudConfigurationManager;
- (void).cxx_destruct;
- (void)initialPopulateComplete;
@property(readonly) id <MBUAProtocol> mbuseragent;
@property(readonly) unsigned int targetUID;
- (void)createNewRegistrationServerManager;
- (id)initWithBuddyType:(unsigned long long)arg1 secondaryBuddyType:(unsigned long long)arg2 miniBuddyTargetUID:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

