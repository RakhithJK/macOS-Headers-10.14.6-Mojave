//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Prefs : NSObject
{
}

+ (void)setSaveConversationsOnClose:(BOOL)arg1;
+ (BOOL)saveConversationsOnClose;
+ (void)setShowAllBuddyPictures:(BOOL)arg1;
+ (BOOL)showAllBuddyPictures;
+ (id)existingDownloadPath;
+ (id)downloadPath;
+ (void)setDownloadURL:(id)arg1;
+ (id)downloadURL;
+ (id)setDownloadsFolderToDefault;
+ (void)setAddressMeInGroupchat:(BOOL)arg1;
+ (BOOL)addressMeInGroupchat;
+ (void)setFileTransferManagerShouldBeVisible:(BOOL)arg1;
+ (BOOL)fileTransferManagerShouldBeVisible;
+ (void)setUsingABPicture:(BOOL)arg1;
+ (void)setAccountsToLogInAtLaunch:(id)arg1;
+ (id)accountsToLogInAtLaunch;
+ (void)setUbiquitoustring:(id)arg1 forKey:(id)arg2;
+ (void)setUbiquitousArray:(id)arg1 forKey:(id)arg2;
+ (void)setUbiquitousFloat:(double)arg1 forKey:(id)arg2;
+ (void)setUbiquitousInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setUbiquitousBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setUbiquitousObject:(id)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (void)setBool:(BOOL)arg1 forKey:(id)arg2;
+ (void)setFloat:(double)arg1 forKey:(id)arg2;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setArray:(id)arg1 forKey:(id)arg2;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)stringForKey:(id)arg1 defaultValue:(id)arg2;
+ (id)objectForKey:(id)arg1;
+ (id)arrayForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)floatForKey:(id)arg1 defaultValue:(double)arg2;
+ (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
+ (BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (void)clearPreferenceForKey:(id)arg1;
+ (void)copyPreference:(id)arg1 toKey:(id)arg2;
+ (id)sharedInstance;
- (void)stopListeningForICloudChanges;
- (void)startListeningForICloudChanges;
- (void)iCloudPrefsUpdated:(id)arg1;

@end

