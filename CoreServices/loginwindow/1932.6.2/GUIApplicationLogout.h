//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSTimer;

@interface GUIApplicationLogout : NSObject
{
    NSMutableArray *_guiAppASNArray;
    NSMutableDictionary *_guiAppsToQuitLSInfo;
    NSMutableDictionary *_guiAppsToQuitLocalInfo;
    NSTimer *_terminationTimer;
    NSTimer *_activationTimer;
    BOOL _guiKillCleanApps;
    BOOL _guiSendSaveStateWithQuitEvents;
    BOOL _allGUIAppsQuit;
    BOOL _logoutCanceled;
    struct __LSASN *_currentlyQuittingASN;
}

+ (id)sharedGUIApplicationLogout;
@property BOOL logoutCanceled; // @synthesize logoutCanceled=_logoutCanceled;
@property BOOL allGUIAppsQuit; // @synthesize allGUIAppsQuit=_allGUIAppsQuit;
@property BOOL guiSendSaveStateWithQuitEvents; // @synthesize guiSendSaveStateWithQuitEvents=_guiSendSaveStateWithQuitEvents;
@property BOOL guiKillCleanApps; // @synthesize guiKillCleanApps=_guiKillCleanApps;
@property struct __LSASN *currentlyQuittingASN; // @synthesize currentlyQuittingASN=_currentlyQuittingASN;
- (void)_activateQuittingApplication:(id)arg1;
- (void)_checkTerminationStatus:(id)arg1;
- (short)requestTerminationForApp:(id)arg1 localInfoDict:(id)arg2 withDelay:(double)arg3;
- (BOOL)appShouldBeQuitAtGUIQuit:(id)arg1;
- (void)removeAppFromQuitList:(struct __LSASN *)arg1 appKey:(id)arg2;
- (id)emptyLocalInfoDict;
- (int)loadProccessesToQuitArray;
- (void)allGUIAppsAreQuit;
- (void)quitAllGUIApps;
- (void)clearGUIAppMemory;
- (int)numberOfForegroundApps;
- (void)cancelLogout;
- (void)guiAppLogoutHandleCASEvent:(int)arg1 asnRef:(struct __LSASN *)arg2 eventDictionary:(id)arg3;
- (void)quitNextApp;
- (void)beginGUIAppQuit;
- (void)dealloc;
- (id)init;

@end

