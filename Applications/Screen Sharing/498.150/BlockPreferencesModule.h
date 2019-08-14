//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SSPreferencesModule.h"

@class NSArrayController, NSButton, NSImage, NSTableView, NSWindow, SSContactsTokenField;

@interface BlockPreferencesModule : SSPreferencesModule
{
    BOOL _emailValueIsAvailable;
    NSImage *_userGuestImage;
    NSArrayController *_arrayController;
    NSTableView *_tableView;
    NSWindow *_blockUserSheet;
    SSContactsTokenField *_emailTextField;
    NSButton *_blockButton;
}

@property(readonly) BOOL emailValueIsAvailable; // @synthesize emailValueIsAvailable=_emailValueIsAvailable;
@property(retain) NSButton *blockButton; // @synthesize blockButton=_blockButton;
@property(retain) SSContactsTokenField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain) NSWindow *blockUserSheet; // @synthesize blockUserSheet=_blockUserSheet;
@property(retain) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(readonly) NSImage *userGuestImage; // @synthesize userGuestImage=_userGuestImage;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)sheetButtonClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)poseAddSheet:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)populateblockedUsersTableArray;
- (id)objectForArrayControllerFromID:(id)arg1;
- (void)setAllowInvitationsFromContactsOnly:(BOOL)arg1;
- (BOOL)allowInvitationsFromContactsOnly;
- (void)setBlockAllInviters:(BOOL)arg1;
- (BOOL)blockAllInviters;
- (void)saveChanges;
- (void)dealloc;
- (void)awakeFromNib;

@end
