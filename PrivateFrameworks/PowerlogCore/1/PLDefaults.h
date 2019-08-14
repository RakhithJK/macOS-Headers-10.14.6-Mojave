//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLDefaults : NSObject
{
    BOOL _debugEnabled;
    NSMutableDictionary *_managedPrefsCache;
    NSMutableDictionary *_instancePrefsCache;
    NSMutableDictionary *_userPrefsCache;
}

+ (void)setClassName:(id)arg1 debugEnabled:(BOOL)arg2 forKey:(id)arg3;
+ (void)setClassName:(id)arg1 debugEnabled:(BOOL)arg2;
+ (void)setClass:(Class)arg1 debugEnabled:(BOOL)arg2 forKey:(id)arg3;
+ (void)setClass:(Class)arg1 debugEnabled:(BOOL)arg2;
+ (BOOL)isClassNameDebugEnabled:(id)arg1 forKey:(id)arg2;
+ (BOOL)isClassNameDebugEnabled:(id)arg1;
+ (BOOL)isClassDebugEnabled:(Class)arg1 forKey:(id)arg2;
+ (BOOL)isClassDebugEnabled:(Class)arg1;
+ (BOOL)fullPLLog;
+ (BOOL)debugEnabled;
+ (long long)longForKey:(id)arg1 ifNotSet:(long long)arg2;
+ (long long)longForKey:(id)arg1;
+ (double)doubleForKey:(id)arg1 ifNotSet:(double)arg2;
+ (double)doubleForKey:(id)arg1;
+ (BOOL)boolForKey:(id)arg1 ifNotSet:(BOOL)arg2;
+ (BOOL)boolForKey:(id)arg1;
+ (BOOL)isModelTrigger;
+ (BOOL)isModelingDebugEnabled;
+ (BOOL)isDevBoard;
+ (long long)mode;
+ (BOOL)oldFullMode;
+ (BOOL)taskMode;
+ (BOOL)fullMode;
+ (BOOL)liteMode;
+ (int)liveModeQuery;
+ (BOOL)fullModeForClass:(Class)arg1;
+ (void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2;
+ (void)resetUserDefaultCacheForKey:(id)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(BOOL)arg4;
+ (void)setObject:(id)arg1 forKey:(id)arg2 saveToDisk:(BOOL)arg3;
+ (void)setObject:(id)arg1 forKey:(id)arg2;
+ (id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3;
+ (id)objectForKey:(id)arg1 synchronize:(BOOL)arg2;
+ (id)objectForKey:(id)arg1 ifNotSet:(id)arg2;
+ (id)objectForKey:(id)arg1;
+ (BOOL)objectExistsForKey:(id)arg1;
+ (id)allDefaultsEnabled;
+ (id)sharedDefaults;
+ (id)applicationID;
@property(retain) NSMutableDictionary *userPrefsCache; // @synthesize userPrefsCache=_userPrefsCache;
@property(retain) NSMutableDictionary *instancePrefsCache; // @synthesize instancePrefsCache=_instancePrefsCache;
@property(retain) NSMutableDictionary *managedPrefsCache; // @synthesize managedPrefsCache=_managedPrefsCache;
@property BOOL debugEnabled; // @synthesize debugEnabled=_debugEnabled;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplicationID:(id)arg3 saveToDisk:(BOOL)arg4;
- (void)resetUserDefaultCacheForKey:(id)arg1 forApplicationID:(id)arg2;
- (id)instancePrefsObjectForKey:(id)arg1;
- (id)userDefaultsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3;
- (id)managedPrefsObjectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3;
- (id)objectForKey:(id)arg1 forApplicationID:(id)arg2 synchronize:(BOOL)arg3;
- (id)init;

@end

