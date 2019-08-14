//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAddressBook, ABCardViewNotificationHandler, ABGroupListNotificationHandler, ABPersonListController;

@interface ABBookExternalNotificationWatcher : NSObject
{
    ABAddressBook *_addressBook;
    ABPersonListController *_personListController;
    ABGroupListNotificationHandler *_groupListHandler;
    ABCardViewNotificationHandler *_cardViewHandler;
}

- (void)preferencesChanged:(id)arg1;
- (void)updatePersonListForExternalNotification:(id)arg1;
- (void)donationsDidChange:(id)arg1;
- (void)accountStatusDidChange:(id)arg1;
- (void)addressBookChangedExternally:(id)arg1;
- (void)registerForNotifications;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1 personListController:(id)arg2 groupListHandler:(id)arg3 cardViewHandler:(id)arg4;

@end

