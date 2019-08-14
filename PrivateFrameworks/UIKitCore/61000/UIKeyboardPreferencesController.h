//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject
{
}

+ (id)sharedPreferencesController;
- (BOOL)isPasswordAutoFillAllowed;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)isPreferenceKeyLockedDown:(id)arg1;
- (void)setLastUsedDictationLanguages:(id)arg1;
- (void)setEnabledDictationLanguages:(id)arg1;
- (void)performedFirstReachableKeyboardInteraction;
- (BOOL)isFirstReachableKeyboardInteraction;
@property long long handBias;
- (BOOL)spaceConfirmationEnabled;
- (double)rivenSizeFactor:(double)arg1;
- (BOOL)typologyEnabled;
- (BOOL)allEnabledInputModesAreValid;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (BOOL)boolForPreferenceKey:(id)arg1;
- (id)valueForPreferenceKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (BOOL)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
- (void)preferencesControllerChanged:(id)arg1;
- (void)_configurePreferences;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;

@end

