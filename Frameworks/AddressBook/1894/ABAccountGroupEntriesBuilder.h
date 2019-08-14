//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABAccount, ABAddressBook;

@interface ABAccountGroupEntriesBuilder : NSObject
{
    ABAccount *_account;
    ABAddressBook *_addressBook;
}

- (id)buildEntries;
- (id)buildEntryForSearching;
- (id)entryForGroup:(id)arg1;
- (BOOL)shouldAddEntryForGroup:(id)arg1;
- (void)addEntryForGroup:(id)arg1 to:(id)arg2;
- (id)buildEntriesForGroups;
- (id)groupsForEntries;
- (id)buildEntryForAllContacts:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2;

@end

