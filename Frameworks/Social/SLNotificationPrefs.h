//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLNotificationPrefs : NSObject
{
}

+ (id)sharedPreferences;
- (void)setNotificationPreferenceForClient:(id)arg1 withObject:(id)arg2 forKey:(id)arg3;
- (id)notificationPreferenceForClient:(id)arg1 andKey:(id)arg2;
- (id)notificationPreferencesForClient:(id)arg1;
- (id)preferencesForClient:(id)arg1;
- (void)addCheckBoxFromPreferences:(id)arg1 toArray:(id)arg2 forKey:(id)arg3;
- (void)addRadioButtonsFromPreferences:(id)arg1 toArray:(id)arg2 forKey:(id)arg3;
- (id)defaultPrefsForBundleID:(id)arg1;
- (id)defaultSinaWeiboPrefs;
- (id)defaultTwitterPrefs;
- (id)localizedPrefsForType:(id)arg1 withValue:(id)arg2;
- (id)init;

@end

