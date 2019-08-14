//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKShareMetadata, NSApplication, NSArray, NSCoder, NSData, NSDictionary, NSError, NSMenu, NSNotification, NSString, NSUserActivity;

@protocol NSApplicationDelegate <NSObject>

@optional
- (void)applicationDidChangeOcclusionState:(NSNotification *)arg1;
- (void)applicationDidChangeScreenParameters:(NSNotification *)arg1;
- (void)applicationWillTerminate:(NSNotification *)arg1;
- (void)applicationDidUpdate:(NSNotification *)arg1;
- (void)applicationWillUpdate:(NSNotification *)arg1;
- (void)applicationDidResignActive:(NSNotification *)arg1;
- (void)applicationWillResignActive:(NSNotification *)arg1;
- (void)applicationDidBecomeActive:(NSNotification *)arg1;
- (void)applicationWillBecomeActive:(NSNotification *)arg1;
- (void)applicationDidUnhide:(NSNotification *)arg1;
- (void)applicationWillUnhide:(NSNotification *)arg1;
- (void)applicationDidHide:(NSNotification *)arg1;
- (void)applicationWillHide:(NSNotification *)arg1;
- (void)applicationDidFinishLaunching:(NSNotification *)arg1;
- (void)applicationWillFinishLaunching:(NSNotification *)arg1;
- (BOOL)application:(NSApplication *)arg1 delegateHandlesKey:(NSString *)arg2;
- (void)application:(NSApplication *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
- (void)application:(NSApplication *)arg1 didUpdateUserActivity:(NSUserActivity *)arg2;
- (void)application:(NSApplication *)arg1 didFailToContinueUserActivityWithType:(NSString *)arg2 error:(NSError *)arg3;
- (BOOL)application:(NSApplication *)arg1 continueUserActivity:(NSUserActivity *)arg2 restorationHandler:(void (^)(NSArray *))arg3;
- (BOOL)application:(NSApplication *)arg1 willContinueUserActivityWithType:(NSString *)arg2;
- (void)application:(NSApplication *)arg1 didDecodeRestorableState:(NSCoder *)arg2;
- (void)application:(NSApplication *)arg1 willEncodeRestorableState:(NSCoder *)arg2;
- (void)application:(NSApplication *)arg1 didReceiveRemoteNotification:(NSDictionary *)arg2;
- (void)application:(NSApplication *)arg1 didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg2;
- (void)application:(NSApplication *)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)arg2;
- (NSError *)application:(NSApplication *)arg1 willPresentError:(NSError *)arg2;
- (NSMenu *)applicationDockMenu:(NSApplication *)arg1;
- (BOOL)applicationShouldHandleReopen:(NSApplication *)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(NSApplication *)arg1;
- (unsigned long long)application:(NSApplication *)arg1 printFiles:(NSArray *)arg2 withSettings:(NSDictionary *)arg3 showPrintPanels:(BOOL)arg4;
- (BOOL)application:(NSApplication *)arg1 printFile:(NSString *)arg2;
- (BOOL)application:(id)arg1 openFileWithoutUI:(NSString *)arg2;
- (BOOL)applicationOpenUntitledFile:(NSApplication *)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(NSApplication *)arg1;
- (BOOL)application:(NSApplication *)arg1 openTempFile:(NSString *)arg2;
- (void)application:(NSApplication *)arg1 openFiles:(NSArray *)arg2;
- (BOOL)application:(NSApplication *)arg1 openFile:(NSString *)arg2;
- (void)application:(NSApplication *)arg1 openURLs:(NSArray *)arg2;
- (unsigned long long)applicationShouldTerminate:(NSApplication *)arg1;
@end

