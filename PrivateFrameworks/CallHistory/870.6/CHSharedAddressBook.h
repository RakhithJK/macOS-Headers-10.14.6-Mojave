//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    NSMutableDictionary *_addressBookCache;
}

+ (id)get;
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (void).cxx_destruct;
- (id)description;
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;
- (void)revertAddressBook:(id)arg1;
- (void)cleanUpAddressBookCache_sync;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;
- (void)registerForContactsNotifications;
- (void)dealloc;
- (id)init;

@end

