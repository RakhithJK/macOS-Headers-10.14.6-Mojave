//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/NSPopoverDelegate-Protocol.h>

@class BookmarksUndoController, NSButton, NSPopover, NSString, NSTextField, WebBookmarkLeaf;

__attribute__((visibility("hidden")))
@interface BookmarkAddressEditingPopoverViewController : NSViewController <NSPopoverDelegate>
{
    NSPopover *_popover;
    WebBookmarkLeaf *_bookmark;
    BOOL _shouldDiscardChangesWhenDoneEditing;
    CDUnknownBlockType _popoverDidCloseHandler;
    BookmarksUndoController *_undoController;
    NSTextField *_addressField;
    NSButton *_doneButton;
}

@property(nonatomic) __weak NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) __weak NSTextField *addressField; // @synthesize addressField=_addressField;
@property(retain, nonatomic) BookmarksUndoController *undoController; // @synthesize undoController=_undoController;
@property(copy, nonatomic) CDUnknownBlockType popoverDidCloseHandler; // @synthesize popoverDidCloseHandler=_popoverDidCloseHandler;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)doneEditing:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)showRelativeToBoundsOfView:(id)arg1 preferredEdge:(unsigned long long)arg2;
- (void)popoverDidClose:(id)arg1;
- (void)loadView;
- (id)nibName;
- (id)initWithBookmark:(id)arg1 nibBundle:(id)arg2;
- (id)initWithBookmark:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

