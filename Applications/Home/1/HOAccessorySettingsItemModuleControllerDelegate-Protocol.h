//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HFAccessorySettingGroupItem, HOAccessorySettingsItemModuleController, NAFuture, UIViewController;

@protocol HOAccessorySettingsItemModuleControllerDelegate <NSObject>

@optional
- (NAFuture *)moduleController:(HOAccessorySettingsItemModuleController *)arg1 requestPresentViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (void)moduleController:(HOAccessorySettingsItemModuleController *)arg1 presentGroup:(HFAccessorySettingGroupItem *)arg2;
@end
