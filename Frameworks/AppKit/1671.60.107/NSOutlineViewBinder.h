//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBinder.h>

@class _NSTreeNodeObservingTracker;

__attribute__((visibility("hidden")))
@interface NSOutlineViewBinder : NSBinder
{
    struct ___outlineViewBinderFlags {
        unsigned int _isAutoCreated:1;
        unsigned int _reservedOutlineViewBinder:31;
    } _outlineViewBinderFlags;
    long long _ignoreChangesCount;
    struct _NSRange _previousVisibleRange;
    _NSTreeNodeObservingTracker *_treeNodeObservingTracker;
    id _contentBindingController;
}

+ (id)bindingsForObject:(id)arg1;
+ (id)bindingCategory;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (BOOL)_autoCreateBinderForObject:(id)arg1 withController:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)outlineView:(id)arg1 willCollapseItem:(id)arg2;
- (void)outlineView:(id)arg1 didExpandItem:(id)arg2;
- (void)tableView:(id)arg1 didChangeToSortDescriptors:(id)arg2;
- (void)_updateSortDescriptors:(id)arg1;
- (void)tableView:(id)arg1 didChangeToSelectedRowIndexes:(id)arg2;
- (void)_updateSelectionIndexPaths:(id)arg1;
- (void)_scrollSelectionToVisible;
- (void)tableView:(id)arg1 updateVisibleRowInformation:(struct _NSRange)arg2;
- (void)expandIndexPath:(id)arg1;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_childrenChangedForNode:(id)arg1;
- (void)stopObservingOutlineViewChildrenOfItem:(id)arg1;
- (void)startObservingOutlineViewChildrenOfItem:(id)arg1;
- (void)modifyObservingOutlineViewChildrenOfItem:(id)arg1 withOption:(unsigned long long)arg2;
- (BOOL)_observeKeyPathForRelatedBinder:(id)arg1 registerOrUnregister:(BOOL)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)outlineView:(id)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)tableView:(id)arg1 objectValueForRow:(long long)arg2;
- (void)_updateObservingRegistration:(BOOL)arg1;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_dealloc;
- (void)_init;
- (void)endIgnoreChanges;
- (void)beginIgnoreChanges;
- (void)_markAutoCreated:(BOOL)arg1;
- (BOOL)_isAutoCreated;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;

@end

