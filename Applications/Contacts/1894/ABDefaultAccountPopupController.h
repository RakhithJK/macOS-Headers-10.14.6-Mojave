//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccountRepository, ABDefaultAccountPopupButton, NSTextField, NSView;

@interface ABDefaultAccountPopupController : NSObject
{
    ABDefaultAccountPopupButton *_popup;
    NSTextField *_label;
    NSView *_auxiliaryView;
    BOOL _isPopupHidden;
    ABAccountRepository *_accountRepository;
}

@property(nonatomic) BOOL isPopupHidden; // @synthesize isPopupHidden=_isPopupHidden;
@property(retain, nonatomic) ABAccountRepository *accountRepository; // @synthesize accountRepository=_accountRepository;
@property NSView *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
@property NSTextField *label; // @synthesize label=_label;
@property(nonatomic) ABDefaultAccountPopupButton *popup; // @synthesize popup=_popup;
- (id)menuItemForAccount:(id)arg1;
- (void)_addMenuItemForAccount:(id)arg1;
- (BOOL)shouldHidePopupForAccounts:(id)arg1;
- (void)_addAccountsToPopup:(id)arg1;
- (void)_sortAccounts:(id)arg1;
- (void)_removeLocalAccountIfEmpty:(id)arg1;
- (void)_initializePopup;
- (void)rebuildPopup;
- (void)_defaultAccountDidChange:(id)arg1;
- (void)_accountRepositoryDidChange:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_unregisterForNotificationsForRepository:(id)arg1;
- (void)_registerForNotificationsForRepository:(id)arg1;
- (void)_unregisterForWindowNotifications;
- (void)_registerForWindowNotifications:(id)arg1;
- (void)updateDefaultAccount:(id)arg1;
- (void)_setControlVisibility:(BOOL)arg1;
- (void)popupButtonDidMoveToWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

