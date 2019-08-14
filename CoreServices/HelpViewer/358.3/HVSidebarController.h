//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSOutlineViewDelegate-Protocol.h"

@class HVSidebarCellView, NSArray, NSOutlineView, NSPredicate, NSString, NSTextField, NSView;
@protocol HVSidebarItem;

@interface HVSidebarController : NSObject <NSOutlineViewDelegate>
{
    BOOL _loaded;
    BOOL _settingSelection;
    NSPredicate *_filteringPredicate;
    id <HVSidebarItem> _selectedObject;
    NSOutlineView *_outlineView;
    NSArray<HVSidebarItem> *_content;
    HVSidebarCellView *_sizingView;
    NSTextField *_sizingTextField;
}

+ (void)load;
@property(retain) NSTextField *sizingTextField; // @synthesize sizingTextField=_sizingTextField;
@property(retain) HVSidebarCellView *sizingView; // @synthesize sizingView=_sizingView;
@property(retain, nonatomic) NSArray<HVSidebarItem> *content; // @synthesize content=_content;
@property __weak NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (id)outlineView:(id)arg1 pasteboardWriterForItem:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
@property(retain) id <HVSidebarItem> selectedObject; // @synthesize selectedObject=_selectedObject;
- (id)itemWithIdentifier:(id)arg1;
- (BOOL)_itemContainsSelection:(id)arg1;
- (void)_expandAllAncestorsOfItem:(id)arg1;
- (id)_parentItemForItem:(id)arg1;
@property(retain) NSPredicate *filteringPredicate; // @synthesize filteringPredicate=_filteringPredicate;
@property(nonatomic) NSString *contentIdentifier;
@property NSView *footerView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
