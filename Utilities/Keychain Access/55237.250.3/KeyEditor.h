//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACLEditor, KeychainItemBasic, NSButton, NSImageView, NSTextField, NSTextView, NSView, NSWindow;

@interface KeyEditor : NSObject
{
    NSTextView *_comment;
    NSImageView *_icon;
    NSTextField *_name;
    NSTextField *_kind;
    NSTextField *_usage;
    NSTextField *_effective;
    NSTextField *_expires;
    NSTextField *_status;
    NSButton *_saveButton;
    NSWindow *_window;
    NSView *_aclView;
    ACLEditor *_aclEditor;
    KeychainItemBasic *_item;
    _Bool _commentNotificationOn;
    BOOL _isDirty;
    long long _saveChanges;
}

- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)commentDidChange:(id)arg1;
- (void)saveClicked:(id)arg1;
- (void)populateAttributes;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (long long)saveChangesAlert;
- (void)windowWillClose:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)dealloc;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)forceClose;
- (void)makeKeyAndOrderFront:(id)arg1;
- (void)show:(id)arg1;
- (void)awakeFromNib;
- (id)initWithItem:(id)arg1;
- (void)setDirty:(BOOL)arg1;

@end

