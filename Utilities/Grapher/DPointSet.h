//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DGraph.h"

@class NSMutableArray;

@interface DPointSet : DGraph
{
    NSMutableArray *mRows;
    long long mColumnNumbers;
}

+ (id)exportDelegate;
+ (void)setExportDelegate:(id)arg1;
+ (id)importDelegate;
+ (void)setImportDelegate:(id)arg1;
+ (id)pointSet;
- (unsigned long long)validateDrop:(id)arg1;
- (id)insertPasteboard:(id)arg1 aboveRow:(long long)arg2;
- (id)insertString:(id)arg1 aboveRow:(long long)arg2;
- (void)writeRows:(id)arg1 toPasteboard:(id)arg2;
- (id)rowsFromString:(id)arg1;
- (id)stringForAllRows;
- (id)stringForRows:(id)arg1;
- (id)stringForRow:(long long)arg1;
- (void)deleteColumn:(long long)arg1;
- (void)insertColumnAtIndex:(long long)arg1 from:(long long)arg2;
- (void)appendColumnFrom:(long long)arg1;
- (void)deleteRow:(long long)arg1;
- (void)insertRowAtIndex:(long long)arg1 from:(long long)arg2;
- (id)insertRows:(id)arg1 atIndex:(long long)arg2;
- (void)insertRow:(id)arg1 atIndex:(long long)arg2;
- (void)appendRowFrom:(long long)arg1;
- (void)appendRow:(id)arg1;
- (id)rowFromArray:(id)arg1;
- (id)rowFrom:(long long)arg1;
- (void)setNumber:(id)arg1 atColumn:(long long)arg2 row:(long long)arg3;
- (id)numberAtColumn:(long long)arg1 row:(long long)arg2;
- (long long)numberOfRows;
- (long long)numberOfColumns;
- (void)setRows:(id)arg1;
- (id)rows;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
