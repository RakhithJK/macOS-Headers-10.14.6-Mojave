//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesUI/ICTableTextStorage.h>

#import <NotesUI/ICTableCellMergeableStringObserving-Protocol.h>

@class ICTable, NSArray, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString, NSUUID;
@protocol ICTableUndoHelping;

@interface ICTableColumnTextStorage : ICTableTextStorage <ICTableCellMergeableStringObserving>
{
    BOOL _preventEditingUpdates;
    NSUUID *_columnID;
    id <ICTableUndoHelping> _undoHelper;
    ICTable *_table;
    NSMutableArray *_rows;
    NSMutableDictionary *_mergeableStringDelegates;
    NSMutableIndexSet *_rowStartIndexes;
}

@property(readonly, nonatomic) NSMutableIndexSet *rowStartIndexes; // @synthesize rowStartIndexes=_rowStartIndexes;
@property(readonly, nonatomic) NSMutableDictionary *mergeableStringDelegates; // @synthesize mergeableStringDelegates=_mergeableStringDelegates;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) __weak ICTable *table; // @synthesize table=_table;
@property(nonatomic) BOOL preventEditingUpdates; // @synthesize preventEditingUpdates=_preventEditingUpdates;
@property(nonatomic) __weak id <ICTableUndoHelping> undoHelper; // @synthesize undoHelper=_undoHelper;
@property(readonly) NSUUID *columnID; // @synthesize columnID=_columnID;
- (void).cxx_destruct;
- (void)tableCellWasEditedAtColumnID:(id)arg1 rowID:(id)arg2 edited:(unsigned long long)arg3 range:(struct _NSRange)arg4 changeInLength:(long long)arg5;
- (void)restoreSelection:(id)arg1;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;
- (BOOL)wantsUndoCommands;
- (void)resetUndoManager;
- (void)breakUndoCoalescing;
- (void)closeUndoGroups;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (unsigned long long)nextLocationAfterRowLocation:(unsigned long long)arg1;
- (unsigned long long)rowLocationForRowIndex:(unsigned long long)arg1;
- (unsigned long long)rowLocationForRowID:(id)arg1;
- (unsigned long long)insertionIndexForRow:(id)arg1;
- (id)rowAtIndex:(unsigned long long)arg1 rowRange:(out struct _NSRange *)arg2;
- (unsigned long long)indexOfRowAtLocation:(unsigned long long)arg1;
- (id)mergeableStringForRowID:(id)arg1;
- (struct _NSRange)logicalRangeForLocation:(unsigned long long)arg1;
- (void)updateStorageForMovedRow:(id)arg1;
- (void)removeRow:(id)arg1;
- (void)removeTextForRow:(id)arg1;
- (unsigned long long)indexOfRow:(id)arg1;
- (struct _NSRange)characterRangeForRowID:(id)arg1;
@property(readonly, nonatomic) NSArray *populatedRows;
- (id)initWithTable:(id)arg1 columnID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

