//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABHeaderGroupEntry.h>

@class ABAddressBook, ABGroup;

@interface ABSmartGroupsHeaderGroupEntry : ABHeaderGroupEntry
{
    ABAddressBook *_addressBook;
    ABGroup *_group;
}

@property(readonly, retain) ABGroup *group; // @synthesize group=_group;
@property(readonly, retain) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (id)createGroupInSectionHelperWithFactory:(id)arg1;
- (BOOL)canCreateGroupInSection;
- (id)iconWithStyleProvider:(id)arg1;
- (id)selectHelperWithFactory:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 children:(id)arg2 addressBook:(id)arg3;

@end

