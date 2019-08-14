//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LogoutUtilities, NSDictionary, NSString;

@interface SessionLogoutManager : NSObject
{
    struct __LSASN *_logoutInterruptASNRef;
    BOOL _installerLogout;
    BOOL _killCleanApps;
    BOOL _sendSaveStateWithQuitEvents;
    BOOL _monitoringSessionLogoutdConnection;
    BOOL _windowServerExited;
    BOOL _finderQuitOnce;
    BOOL _showConfirmationUI;
    BOOL _restartShutdownAuthInProgress;
    int _logoutPhase;
    int _numberOfPrivateAppsRemaining;
    int _mainLogoutType;
    int _subLogoutType;
    int _directLogoutReason;
    int _currentTALOption;
    int _savedTALOption;
    int _countDownTimer;
    int _logoutInterruptResponse;
    int _logoutStatusClientPID;
    int _currentLogoutInterruptReason;
    unsigned int _softwareUpdateFlags;
    LogoutUtilities *_logoutUtils;
    struct __LSASN *_sessionManagerASNRef;
    struct __LSASN *_finderASNRef;
    struct __LSASN *_dockASNRef;
    struct __LSASN *_systemUIServerASNRef;
    struct __LSASN *_logCancelRequestorASNRef;
    NSDictionary *_logoutOptions;
    NSString *_suInterruptLogoutUseIconBundleID;
}

+ (id)sharedSessionLogoutManager;
@property NSString *suInterruptLogoutUseIconBundleID; // @synthesize suInterruptLogoutUseIconBundleID=_suInterruptLogoutUseIconBundleID;
@property unsigned int softwareUpdateFlags; // @synthesize softwareUpdateFlags=_softwareUpdateFlags;
@property int currentLogoutInterruptReason; // @synthesize currentLogoutInterruptReason=_currentLogoutInterruptReason;
@property int logoutStatusClientPID; // @synthesize logoutStatusClientPID=_logoutStatusClientPID;
@property int logoutInterruptResponse; // @synthesize logoutInterruptResponse=_logoutInterruptResponse;
@property(retain) NSDictionary *logoutOptions; // @synthesize logoutOptions=_logoutOptions;
@property int countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property int savedTALOption; // @synthesize savedTALOption=_savedTALOption;
@property int currentTALOption; // @synthesize currentTALOption=_currentTALOption;
@property BOOL restartShutdownAuthInProgress; // @synthesize restartShutdownAuthInProgress=_restartShutdownAuthInProgress;
@property BOOL showConfirmationUI; // @synthesize showConfirmationUI=_showConfirmationUI;
@property int directLogoutReason; // @synthesize directLogoutReason=_directLogoutReason;
@property int subLogoutType; // @synthesize subLogoutType=_subLogoutType;
@property int mainLogoutType; // @synthesize mainLogoutType=_mainLogoutType;
@property BOOL finderQuitOnce; // @synthesize finderQuitOnce=_finderQuitOnce;
@property BOOL windowServerExited; // @synthesize windowServerExited=_windowServerExited;
@property BOOL monitoringSessionLogoutdConnection; // @synthesize monitoringSessionLogoutdConnection=_monitoringSessionLogoutdConnection;
@property struct __LSASN *logCancelRequestorASNRef; // @synthesize logCancelRequestorASNRef=_logCancelRequestorASNRef;
@property struct __LSASN *systemUIServerASNRef; // @synthesize systemUIServerASNRef=_systemUIServerASNRef;
@property struct __LSASN *dockASNRef; // @synthesize dockASNRef=_dockASNRef;
@property struct __LSASN *finderASNRef; // @synthesize finderASNRef=_finderASNRef;
@property struct __LSASN *sessionManagerASNRef; // @synthesize sessionManagerASNRef=_sessionManagerASNRef;
@property int numberOfPrivateAppsRemaining; // @synthesize numberOfPrivateAppsRemaining=_numberOfPrivateAppsRemaining;
@property BOOL sendSaveStateWithQuitEvents; // @synthesize sendSaveStateWithQuitEvents=_sendSaveStateWithQuitEvents;
@property BOOL killCleanApps; // @synthesize killCleanApps=_killCleanApps;
@property BOOL installerLogout; // @synthesize installerLogout=_installerLogout;
@property int logoutPhase; // @synthesize logoutPhase=_logoutPhase;
@property LogoutUtilities *logoutUtils; // @synthesize logoutUtils=_logoutUtils;
- (BOOL)pastThePointOfNoReturn;
- (BOOL)logoutInProgress;
- (BOOL)guiAppsQuitting;
- (short)handleAppleEvent:(const struct AEDesc *)arg1 reply:(struct AEDesc *)arg2 refCon:(void *)arg3;
- (BOOL)handleLogoutEvent:(id)arg1;
- (BOOL)handleLogoutCASEvent:(int)arg1 withData:(void *)arg2;
- (BOOL)handleLogoutSystemEvent:(id)arg1;
- (BOOL)handleLogoutPowerButtonEvent:(BOOL)arg1;
- (int)startSessionLogoutd;
- (id)buildSessionDictionary;
- (id)statusClientFinalLogoutStatusDictionary;
- (void)doCommonFinalItems;
- (void)resetNotificationCenter;
- (short)_requestTerminationForApp:(struct __LSASN *)arg1 appLSDictionary:(id)arg2 withDelay:(double)arg3;
- (void)startWaitForDockQueueItem:(struct __LSASN *)arg1 dockDictionary:(id)arg2;
- (id)allPrivateProcesses;
- (id)allUIElementApps;
- (void)quitAllPrivateProcesses;
- (void)startPrivateProcessesQuit;
- (void)quitUIElementApps;
- (void)quitDock;
- (void)quitFinder;
- (void)setupLogoutOptionsFromOptionsDictionary:(id)arg1;
- (void)setupLogoutKillAndSaveOptions;
- (void)saveSoftwareUpdateOptionIfNeeded;
- (void)setupImportantASNs;
- (struct __LSASN *)copyLSASNRefForBundleID:(id)arg1;
- (BOOL)showConfirmationUIIfNeeded;
- (void)doLogoutCancelItems;
- (void)doLogoutStartItems;
- (void)doFinalItemsBeforeSessionLogoutd;
- (void)doDirectLogoutFinalItemsBeforeSessionLogoutd;
- (void)continueLogoutAfterAllQuitsComplete;
- (void)continueLogoutAfterDockQuit;
- (void)continueLogoutAfterAllUIElementAppsQuit;
- (void)continueLogoutAfterLogoutStatusClientFinalOK;
- (void)continueLogoutAfterFinderQuit;
- (void)continueLogoutAfterAllGUIAppsQuit;
- (void)setLogoutInterruptASNRef:(struct __LSASN *)arg1;
- (void)processInterruptReactionResults;
- (void)determineLogoutInterruptReaction:(int)arg1 reason:(int)arg2 interruptionLSASN:(struct __LSASN *)arg3 override:(BOOL)arg4;
- (void)logoutStatusClientFinishLogout:(id)arg1;
- (void)logoutStatusClientError;
- (void)cancelLogoutForRequestor:(id)arg1;
- (void)comfirmationCancelLogout;
- (void)continueLogoutAfterConfirmation;
- (void)resetMainLogoutTypeIfNeeded:(int)arg1;
- (void)startDirectLogout:(int)arg1 reason:(int)arg2;
- (void)startLogout:(int)arg1 logoutSubType:(int)arg2 showConfirmationUI:(BOOL)arg3 countDownTime:(int)arg4 useTALOption:(int)arg5 logoutOptions:(id)arg6;
- (void)startLogoutOfType:(int)arg1 logoutSubType:(int)arg2 showConfirmationUI:(BOOL)arg3 useTALOption:(int)arg4;
- (void)startScheduledSleepWithTimeOut:(int)arg1;
- (void)dealloc;
- (id)init;

@end
