//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABBookUndoableCommand.h"

@class ABAccount, ABAddressBook, ABBookCreateGroupCommand, ABBookGroupAddMembersCommand, ABGroupEntriesList, NSSet;

@interface ABBookCreateGroupWithMembersCommand : ABBookUndoableCommand
{
    ABAccount *_account;
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABBookCreateGroupCommand *_createCommand;
    ABBookGroupAddMembersCommand *_addMembersCommand;
    NSSet *_memberUids;
}

- (void)updateGroupName:(id)arg1;
- (id)groupEntryForNewGroup;
- (void)executeRedo;
- (void)executeUndo;
- (void)execute;
- (id)actionName;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 addressBook:(id)arg2 groupEntriesList:(id)arg3 memberUids:(id)arg4;

@end

