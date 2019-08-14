//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AccountsUI/NSObject-Protocol.h>

@class ACAccount, ACAccountType, ACUIAccountInfoViewController, ACUIAccountSetupViewController, ACUIWebLoginViewController, NSArray, NSError, NSImage, NSSet, NSString, NSWindow;

@protocol ACUIPlugin <NSObject>
- (NSSet *)supportedAccountTypes;

@optional
- (NSImage *)logoForAccountType:(NSString *)arg1;
- (void)deleteAccount:(ACAccount *)arg1 inWindow:(NSWindow *)arg2;
- (NSArray *)dataclassesOrder;
- (NSSet *)uiDataclasses;
- (BOOL)shouldHandleWebLoginError:(NSError *)arg1 forAccount:(ACAccount *)arg2;
- (ACUIWebLoginViewController *)webLoginViewControllerForAccount:(ACAccount *)arg1;
- (ACUIAccountSetupViewController *)setupViewControllerForAccountType:(ACAccountType *)arg1;
- (ACUIAccountInfoViewController *)infoViewControllerForAccount:(ACAccount *)arg1;
- (NSImage *)iconForAccountType:(NSString *)arg1;
@end
