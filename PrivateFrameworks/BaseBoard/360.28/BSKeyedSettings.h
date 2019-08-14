//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BaseBoard/BSSettings.h>

@class NSMutableDictionary;

@interface BSKeyedSettings : BSSettings
{
    NSMutableDictionary *_keyMap;
}

- (void).cxx_destruct;
- (id)initWithXPCDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_removeSettingForKey:(id)arg1;
- (unsigned long long)_settingForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_keyForSetting:(unsigned long long)arg1;
- (id)_valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 multilinePrefix:(id)arg4;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (void)enumerateKeyedObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateKeyedFlagsWithBlock:(CDUnknownBlockType)arg1;
- (id)objectForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (long long)flagForKey:(id)arg1;
- (BOOL)isKeyedSettings;
- (id)initWithKeyedSettings:(id)arg1;
- (id)_init;

@end

