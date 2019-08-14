//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

@class NSMutableDictionary;
@protocol ABPeoplePickerTableViewDataSource, ABPeoplePickerTableViewDelegate;

@interface ABPeoplePickerTableView : NSTableView
{
    int _subrowSelectionBehavior;
    NSMutableDictionary *_rowToSelectedSubrowIndexesMap;
}

@property int subrowSelectionBehavior;
- (BOOL)isSubrowSelected:(long long)arg1 ofRow:(long long)arg2;
- (id)selectedSubrowIndexesForRow:(long long)arg1;
- (void)deselectSubrow:(long long)arg1 ofRow:(long long)arg2;
- (void)selectSubrow:(long long)arg1 ofRow:(long long)arg2 byExtendingSelection:(BOOL)arg3;
- (id)_selectedSubrowsOfRow:(long long)arg1;
- (long long)subRowIndexAtPoint:(struct CGPoint)arg1;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)mouseDown:(id)arg1;
- (long long)propertyColumnIndex;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)deselectAll:(id)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)_accessibilityTableRow:(long long)arg1;

// Remaining properties
@property id <ABPeoplePickerTableViewDataSource> dataSource; // @dynamic dataSource;
@property id <ABPeoplePickerTableViewDelegate> delegate; // @dynamic delegate;

@end

