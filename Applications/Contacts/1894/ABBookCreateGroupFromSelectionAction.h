//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABGroupEntry, ABGroupListController, NSArray;
@protocol ABCommandExecutor, ABMainWindowController;

@interface ABBookCreateGroupFromSelectionAction : NSObject
{
    ABGroupListController *_groupListController;
    ABGroupEntry *_selectedGroupEntry;
    NSArray *_selectedEntries;
    CDUnknownBlockType _commandProvider;
    id <ABCommandExecutor> _commandExecutor;
    id <ABMainWindowController> _windowController;
}

- (id)folderWithMembersString;
- (id)groupWithMembersString;
- (void)performActionWithSender:(id)arg1;
- (id)uniqueIdsForGroup;
- (id)entriesByAccountIdentifierFromEntriesIndex:(id)arg1 accountIndex:(id)arg2;
- (id)selectedEntriesIndexedByPersonIdentifier;
- (id)selectedEntriesByAccountIdentifier;
- (id)targetAccountForSpecificGroup;
- (id)targetAccountForAllContacts;
- (id)targetAccount;
- (id)menuItemTitleForTargetAccount:(id)arg1;
- (BOOL)validateWithMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithSelectedGroupEntry:(id)arg1 selectedEntries:(id)arg2 groupListController:(id)arg3 commandProvider:(CDUnknownBlockType)arg4 commandExecutor:(id)arg5 windowController:(id)arg6;

@end

