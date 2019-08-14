//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "HMAccessorySettingsDelegate-Protocol.h"

@class HMAccessorySetting, HMAccessorySettings, NSSet;

@protocol HFAccessorySettingsObserver <HMAccessorySettingsDelegate>

@optional
- (void)accessorySettings:(HMAccessorySettings *)arg1 didWriteValueForSettings:(NSSet *)arg2 failedSettings:(NSSet *)arg3;
- (void)accessorySettings:(HMAccessorySettings *)arg1 willWriteValueForSettings:(NSSet *)arg2;
- (void)accessorySettings:(HMAccessorySettings *)arg1 didUpdateSetting:(HMAccessorySetting *)arg2;
@end

