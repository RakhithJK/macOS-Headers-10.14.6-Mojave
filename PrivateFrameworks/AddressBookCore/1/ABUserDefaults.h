//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol ABPrimitiveUserDefaults;

@interface ABUserDefaults : NSObject
{
    id <ABPrimitiveUserDefaults> _primitiveDefaults;
    NSDictionary *_registeredDefaults;
}

+ (id)preferencesWithApplicationID:(id)arg1;
+ (id)standardPreferences;
+ (id)iisSupportPreferences;
+ (id)addressBookManagerPreferences;
+ (id)addressBookPreferences;
@property(copy) NSDictionary *registeredDefaults; // @synthesize registeredDefaults=_registeredDefaults;
- (BOOL)userHasOptedInToPreference:(id)arg1;
- (BOOL)userHasOptedOutOfPreference:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1 keyExists:(char *)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1 keyExists:(char *)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setupAutosync;
- (BOOL)synchronize;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(char *)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(char *)arg2;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (id)primitiveDefaults;
- (void)registerDefaults:(id)arg1;
- (void)dealloc;
- (id)initWithPrimitiveDefaults:(id)arg1;
- (id)initWithApplicationID:(id)arg1;

@end
