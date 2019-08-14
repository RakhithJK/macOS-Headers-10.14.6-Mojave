//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainItemBasic, NSMapTable, NSMutableArray, NSView, SFCertificateAssistantController;

@interface PreviewController : NSObject
{
    id _previewView;
    NSView *_currentView;
    id _copyToClipboardButton;
    NSMutableArray *_openItemEditors;
    KeychainItemBasic *_item;
    NSMapTable *_openWindows;
    SFCertificateAssistantController *_certAssistantController;
}

- (id)_certAssistantController;
- (id)item;
- (void)_invalidateAllItemsNotification:(id)arg1;
- (void)_keychainItemEditorDidClose:(id)arg1;
- (void)_itemUpdatedNotification:(id)arg1;
- (void)_itemDeletedNotification:(id)arg1;
- (void)copyToClipboard:(id)arg1;
- (void)goThere;
- (void)getInfo:(id)arg1;
- (void)setViewItem:(id)arg1;
- (void)emptyView;
- (void)removeCurrentView;
- (void)setPreviewView:(id)arg1;
- (void)hidePreview:(BOOL)arg1;
- (BOOL)isHidden;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

