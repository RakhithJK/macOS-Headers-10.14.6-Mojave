//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SASettingOpenSettings.h>

#import <SAObjects/SASettingSettingsAction-Protocol.h>

@class NSString;

@interface SASettingOpenBatteryUsage : SASettingOpenSettings <SASettingSettingsAction>
{
}

+ (id)openBatteryUsageWithDictionary:(id)arg1 context:(id)arg2;
+ (id)openBatteryUsage;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

