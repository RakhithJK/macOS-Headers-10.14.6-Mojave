//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SEDataSource;

@interface SEDataColumn : NSObject
{
    SEDataSource *_dataSource;
    NSString *_name;
    unsigned int _sortOrder;
    unsigned int _sortType;
    unsigned int _sortCaseSensitivity;
}

+ (id)columnForDataSource:(id)arg1 withName:(id)arg2;
- (void)replaceInRows:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromRowsAtIndex:(unsigned int)arg1;
- (void)insertInRows:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceInCells:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeFromCellsAtIndex:(unsigned int)arg1;
- (void)insertInCells:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setSortCaseSensitivity:(unsigned int)arg1;
- (unsigned int)sortCaseSensitivity;
- (void)setSortType:(unsigned int)arg1;
- (unsigned int)sortType;
- (void)setSortOrder:(unsigned int)arg1;
- (unsigned int)sortOrder;
- (id)cells;
- (id)rows;
- (void)setName:(id)arg1;
- (id)name;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (id)initForDataSource:(id)arg1 withName:(id)arg2;

@end
