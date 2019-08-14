//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FTDockTileHelperDelegate-Protocol.h"
#import "NSApplicationDelegate-Protocol.h"
#import "NSUserNotificationCenterDelegate-Protocol.h"
#import "TUAudioDeviceControllerDelegate-Protocol.h"

@class FTDockTileHelper, FTPreferencesWindowController, NSMenu, NSMenuItem, NSMutableArray, NSString;

@interface FaceTime : NSObject <TUAudioDeviceControllerDelegate, NSApplicationDelegate, NSUserNotificationCenterDelegate, FTDockTileHelperDelegate>
{
    NSMutableArray *_aeQueue;
    NSMenuItem *_toggleFaceTimeMenuItem;
    NSMenu *_videoMenu;
    NSMenuItem *_avSeparator;
    NSMenuItem *_alwaysOnTopMenuItem;
    unsigned int _connectedToDaemon:1;
    unsigned int _finishedLaunching:1;
    unsigned int _terminating:1;
    double _appStartTime;
    BOOL _isProcessingGURLDialEvent;
    BOOL _isProcessingUserActivityContinuation;
    BOOL _launchedViaURL;
    BOOL _launchedToShowInvite;
    BOOL _launchedToInitiateCall;
    BOOL _hasSetupAV;
    BOOL _shouldQuitOnLaunchIfNoCallsPresent;
    BOOL _launchedToShowOngoingCall;
    FTPreferencesWindowController *_prefsWindowController;
    FTDockTileHelper *_dockMenuHelper;
    unsigned long long _lockScreenSpaceID;
    NSMutableArray *_lockScreenWindows;
    NSString *_previousAudioInputDeviceID;
    NSMutableArray *_daemonConnectionBlocks;
}

+ (id)iForgotURL;
+ (id)learnMoreURL;
+ (void)_checkAudioRecordingWarning;
+ (void)showCouldNotConnectDialog;
+ (id)sharedInstance;
+ (BOOL)showPhoneCallUI;
@property(retain, nonatomic) NSMutableArray *daemonConnectionBlocks; // @synthesize daemonConnectionBlocks=_daemonConnectionBlocks;
@property(retain, nonatomic) NSString *previousAudioInputDeviceID; // @synthesize previousAudioInputDeviceID=_previousAudioInputDeviceID;
@property(retain, nonatomic) NSMutableArray *lockScreenWindows; // @synthesize lockScreenWindows=_lockScreenWindows;
@property(nonatomic) unsigned long long lockScreenSpaceID; // @synthesize lockScreenSpaceID=_lockScreenSpaceID;
@property(nonatomic) BOOL launchedToShowOngoingCall; // @synthesize launchedToShowOngoingCall=_launchedToShowOngoingCall;
@property(retain, nonatomic) FTDockTileHelper *dockMenuHelper; // @synthesize dockMenuHelper=_dockMenuHelper;
@property BOOL shouldQuitOnLaunchIfNoCallsPresent; // @synthesize shouldQuitOnLaunchIfNoCallsPresent=_shouldQuitOnLaunchIfNoCallsPresent;
@property BOOL hasSetupAV; // @synthesize hasSetupAV=_hasSetupAV;
@property(nonatomic) BOOL launchedToInitiateCall; // @synthesize launchedToInitiateCall=_launchedToInitiateCall;
@property(nonatomic) BOOL launchedToShowInvite; // @synthesize launchedToShowInvite=_launchedToShowInvite;
@property(nonatomic) BOOL launchedViaURL; // @synthesize launchedViaURL=_launchedViaURL;
@property(nonatomic) BOOL isProcessingUserActivityContinuation; // @synthesize isProcessingUserActivityContinuation=_isProcessingUserActivityContinuation;
@property(nonatomic) BOOL isProcessingGURLDialEvent; // @synthesize isProcessingGURLDialEvent=_isProcessingGURLDialEvent;
@property(retain, nonatomic) FTPreferencesWindowController *prefsWindowController; // @synthesize prefsWindowController=_prefsWindowController;
- (void).cxx_destruct;
- (void)audioDeviceControllerDeviceListChanged:(id)arg1;
- (BOOL)isAccountActive;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)_unreadCallsChanged:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (BOOL)isAppTerminating;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_accountRegistrationStateChanged:(id)arg1;
- (void)_accountEnabledStateChanged:(id)arg1;
- (void)_installURLHandlers;
- (void)_flushAEQueue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_bringupInitialController;
- (void)_showUIForPreExistingCall;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)_handleAppleEvent:(id)arg1 reply:(id)arg2;
- (BOOL)_handleGURLAppleEvent:(id)arg1 reply:(id)arg2;
- (BOOL)_hasNoPromptEntitlement:(id)arg1;
- (void)_deferredApplicationDidFinishLaunching;
- (void)_daemonConnected:(id)arg1;
- (BOOL)connectedToDaemon;
- (void)_connectAndAutoLogin;
- (oneway void)setupComplete;
- (BOOL)connectToDaemon;
- (void)daemonConnectionLost;
- (void)removeWindowFromUnmanagedSpace:(id)arg1 ignoreAlwaysOnTop:(BOOL)arg2;
- (void)removeWindowFromUnmanagedSpace:(id)arg1;
- (void)addWindowToUnmanagedSpace:(id)arg1;
- (BOOL)windowIsOnUnmanagedSpace:(id)arg1;
- (void)changeAudioOutput:(id)arg1;
- (void)changeAudioInput:(id)arg1;
- (void)changeCamera:(id)arg1;
- (void)_avMenuChanged:(id)arg1;
- (void)setupAV;
- (void)_registerDefaults;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;
- (BOOL)validateMenuItem:(id)arg1;
- (void)updateMenus;
- (void)alwaysOnTop:(id)arg1;
- (void)showPrefs:(id)arg1;
- (void)removeAllRecents:(id)arg1;
- (void)toggleFaceTime:(id)arg1;
- (void)signOut:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

