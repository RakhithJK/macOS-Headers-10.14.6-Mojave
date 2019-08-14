//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSBundle, NSString;

@protocol MCXD_Server
- (int)mcxAlertQueryCBWithOther:(in NSString *)arg1 msg:(in NSString *)arg2 btn:(in NSString *)arg3 btnAlt:(in NSString *)arg4 btnOther:(in NSString *)arg5 cbStr:(in NSString *)arg6 cbResult:(char *)arg7;
- (BOOL)mcxAlertQueryCB:(in NSString *)arg1 msg:(in NSString *)arg2 btn:(in NSString *)arg3 btnAlt:(in NSString *)arg4 cbStr:(in NSString *)arg5 cbInitialState:(BOOL)arg6 cbResult:(char *)arg7;
- (int)mcxAlertQueryWithOther:(in NSString *)arg1 msg:(in NSString *)arg2 btn:(in NSString *)arg3 btnAlt:(in NSString *)arg4 btnOther:(in NSString *)arg5;
- (BOOL)mcxAlertQuery:(in NSString *)arg1 msg:(in NSString *)arg2 btn:(in NSString *)arg3 btnAlt:(in NSString *)arg4;
- (void)mcxAlertNotify:(in NSString *)arg1 msg:(in NSString *)arg2 btn:(in NSString *)arg3;
- (int)showNoWorkgroupsManagedAlert:(BOOL)arg1 shouldRemember:(char *)arg2;
- (void)setMCXDontAskMACreatePreferenceKey:(BOOL)arg1 deleteKey:(BOOL)arg2;
- (void)mcxdLoginwindowNotify:(NSArray *)arg1;
- (void)setForceManaged:(BOOL)arg1;
- (BOOL)managed;
- (void)refreshPreferences;
- (void)setUserWorkgroup:(in NSString *)arg1;
- (NSArray *)getMCXWorkgroupList;
- (void)setRememberWorkgroup:(BOOL)arg1;
- (void)setEnableWorkgroupManagement:(BOOL)arg1;
- (NSString *)userDisplayName;
- (NSString *)getRememberedGroupName;
- (BOOL)isUserAdmin;
- (BOOL)shouldAllowMCXDisable;
- (BOOL)workgroupsAreCombined;
- (BOOL)mustShowWorkgroupList;
- (BOOL)shouldShowWorkgroupList;
- (NSString *)currentUsersLocalizedResourcePathForBundle:(NSBundle *)arg1;
- (NSString *)getUserHome:(id *)arg1 fileVaultDevicePath:(id *)arg2 fileVaultImageURL:(id *)arg3;
- (NSString *)showWorkgroupPickerAlertWithWorkgroups:(char *)arg1 allowMCXDisable:(BOOL)arg2 returnEnableMgmt:(char *)arg3;
- (int)showMobileAccountAlert:(char *)arg1;
- (int)createMobileUserAccount:(NSString *)arg1 returnPath:(id *)arg2;
- (BOOL)setupCustomMobileHomePath;
- (BOOL)shouldShowCreateMobileUserAccount:(char *)arg1;
- (BOOL)completeMCXLogin:(NSString *)arg1 andPwd:(NSString *)arg2;
- (void)postCompositeInfo:(NSString *)arg1;
- (void)cleanupSimultaneousLogin:(BOOL)arg1;
- (BOOL)checkSimultaneousLogin;
- (unsigned int)compositeInfo;
- (oneway void)finishMCXD;
- (BOOL)checkLoginFileVaultEnablement:(NSString *)arg1 withPassword:(NSString *)arg2;
- (unsigned int)canUserLogin:(NSString *)arg1 password:(in NSString *)arg2 serviceType:(in NSString *)arg3;
@end

