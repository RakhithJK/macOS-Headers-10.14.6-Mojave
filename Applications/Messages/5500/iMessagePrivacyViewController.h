//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CNContactPickerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "iMessagePrivacyViewDelegate-Protocol.h"

@class CNContactPicker, NSButton, NSMutableOrderedSet, NSString, NSTableView, SOAccountRegistrationController, SOBlockListController, iMessagePrivacyView;

@interface iMessagePrivacyViewController : NSViewController <NSTableViewDataSource, CNContactPickerDelegate, iMessagePrivacyViewDelegate>
{
    BOOL _blockStopEditing;
    SOBlockListController *_blockListController;
    CNContactPicker *_contactPicker;
    SOAccountRegistrationController *_accountController;
    NSButton *_addButton;
    NSButton *_deleteButton;
    NSTableView *_tableView;
    NSString *_enteredAddress;
    long long _enteredAddressRow;
    NSMutableOrderedSet *_blockList;
    id _soBlockListControllerListDidChangeObserver;
    id _nsTableViewSelectionDidChangeObserver;
    iMessagePrivacyView *_privacyView;
}

+ (id)imHandleNamesFromPasteboard:(id)arg1;
@property(retain) iMessagePrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain) id nsTableViewSelectionDidChangeObserver; // @synthesize nsTableViewSelectionDidChangeObserver=_nsTableViewSelectionDidChangeObserver;
@property(retain) id soBlockListControllerListDidChangeObserver; // @synthesize soBlockListControllerListDidChangeObserver=_soBlockListControllerListDidChangeObserver;
@property(retain) NSMutableOrderedSet *blockList; // @synthesize blockList=_blockList;
@property long long enteredAddressRow; // @synthesize enteredAddressRow=_enteredAddressRow;
@property(retain) NSString *enteredAddress; // @synthesize enteredAddress=_enteredAddress;
@property BOOL blockStopEditing; // @synthesize blockStopEditing=_blockStopEditing;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
@property __weak NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(retain) SOAccountRegistrationController *accountController; // @synthesize accountController=_accountController;
@property(retain) CNContactPicker *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(retain) SOBlockListController *blockListController; // @synthesize blockListController=_blockListController;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidHide:(id)arg1;
- (void)viewDidDisplay:(id)arg1;
- (void)stopEditing:(id)arg1;
- (void)emptyList;
- (void)removeBlock:(id)arg1;
- (void)addBlock:(id)arg1;
- (void)reloadBlockList;
- (void)resetBlockList;
- (void)updateControls;
- (void)reloadBlockListData;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

