//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSTextField, WBSSavedPasswordStore;

__attribute__((visibility("hidden")))
@interface AddPasswordSheetController : NSWindowController
{
    WBSSavedPasswordStore *_passwordStore;
    BOOL _preservePendingTextFieldStrings;
    NSTextField *_websiteTextField;
    NSTextField *_userNameTextField;
    NSTextField *_passwordTextField;
    NSButton *_addButton;
    NSButton *_cancelButton;
}

@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property(nonatomic) __weak NSTextField *websiteTextField; // @synthesize websiteTextField=_websiteTextField;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (void)hideSheetAndPrepareForReinstall;
- (void)_hideSheet;
- (void)_resetTextFields;
- (BOOL)_canSaveCurrentlyTypedPassword;
- (void)_cancelButtonWasClicked:(id)arg1;
- (void)_addButtonWasClicked:(id)arg1;
@property(readonly, nonatomic, getter=isShowingSheet) BOOL showingSheet;
- (void)showSheetInWindow:(id)arg1;
- (id)initWithPasswordStore:(id)arg1;
- (void)awakeFromNib;
- (id)windowNibName;

@end

