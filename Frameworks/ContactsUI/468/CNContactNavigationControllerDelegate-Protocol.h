//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNContact, CNContactNavigationController, CNContactProperty, CNContactViewController, NSIndexPath, UIViewController;

@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>

@optional
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 presentViewController:(UIViewController *)arg2 animated:(BOOL)arg3;
- (CNContactViewController *)contactNavigationController:(CNContactNavigationController *)arg1 contactViewControllerForContact:(CNContact *)arg2 preferredMode:(long long)arg3;
- (BOOL)contactNavigationControllerShouldShowContactsOnKeyCommands:(CNContactNavigationController *)arg1;
- (void)contactNavigationController:(CNContactNavigationController *)arg1 didDeleteContact:(CNContact *)arg2;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 shouldPerformDefaultActionForContactProperty:(CNContactProperty *)arg2;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 shouldShowCardForContact:(CNContact *)arg2;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 shouldSelectContact:(CNContact *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (BOOL)contactNavigationController:(CNContactNavigationController *)arg1 canSelectContact:(CNContact *)arg2;
- (void)contactNavigationControllerDidComplete:(CNContactNavigationController *)arg1;
- (void)contactNavigationControllerDidCancel:(CNContactNavigationController *)arg1;
@end
