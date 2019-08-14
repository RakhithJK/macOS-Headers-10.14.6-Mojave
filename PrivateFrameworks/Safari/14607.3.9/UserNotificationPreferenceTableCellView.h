//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSMenuItem, NSPopUpButton, UserNotificationPolicyData;

__attribute__((visibility("hidden")))
@interface UserNotificationPreferenceTableCellView : NSTableCellView
{
    UserNotificationPolicyData *_data;
    NSPopUpButton *_policyPopUpButton;
    NSMenuItem *_allowMenuItem;
    NSMenuItem *_denyMenuItem;
}

@property(nonatomic) __weak NSMenuItem *denyMenuItem; // @synthesize denyMenuItem=_denyMenuItem;
@property(nonatomic) __weak NSMenuItem *allowMenuItem; // @synthesize allowMenuItem=_allowMenuItem;
@property(nonatomic) __weak NSPopUpButton *policyPopUpButton; // @synthesize policyPopUpButton=_policyPopUpButton;
@property(retain, nonatomic) UserNotificationPolicyData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)setUserNotificationPolicyFrom:(id)arg1;
- (int)_permissionPolicyForMenuItem:(id)arg1;
- (id)_menuItemForPermissionPolicy:(int)arg1;

@end

