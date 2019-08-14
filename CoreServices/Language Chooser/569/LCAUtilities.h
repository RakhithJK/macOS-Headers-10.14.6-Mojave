//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LCAUtilities : NSObject
{
}

+ (void)releasePowerAssertion;
+ (BOOL)acquirePowerAssertion;
+ (id)_mountPointForDevNode:(id)arg1;
+ (id)deviceInformationImage;
+ (BOOL)isFactoryCableMode;
+ (id)continueButtonImageForWritingDirection:(long long)arg1;
+ (BOOL)isReallyRunningInTheBaseSystem;
+ (BOOL)isRunningInTheBaseSystem;
+ (id)font:(id)arg1 forLanguage:(id)arg2 size:(double)arg3;
+ (void)setUsFront;
+ (BOOL)startServicesForServerSetup;
+ (id)getNVRAMString:(id)arg1;
+ (void)setupKeyboardLayout;
+ (BOOL)saveLanguageToDisk:(id)arg1;
+ (id)savedLanguage;
+ (id)languagePrompts;
+ (id)languageCodes;
+ (id)getImgsrcDevicesByNestingHeight;
+ (BOOL)bootedFromNetBootImage;
+ (BOOL)isIARAMDiskBooted;
+ (BOOL)_usingInstallAssistantAutomation;
+ (id)getBootMode;
+ (BOOL)isSIUAutomated;
+ (BOOL)shouldLaunchSecureBootRecovery;
+ (BOOL)shouldUseHiddenMode;
+ (BOOL)shouldUseIAMode;

@end

