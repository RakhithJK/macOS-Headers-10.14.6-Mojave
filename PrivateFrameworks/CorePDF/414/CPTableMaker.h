//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPTable, CPZone;

__attribute__((visibility("hidden")))
@interface CPTableMaker : NSObject
{
    CPZone *tableZone;
    CPTable *table;
    unsigned int cellIndex;
    CDStruct_c3b9c2ee *rowYIntervals;
    CDStruct_c3b9c2ee *columnXIntervals;
}

+ (void)makeTablesInPage:(id)arg1;
+ (void)makeTablesInZone:(id)arg1;
+ (void)makeTableFrom:(id)arg1;
+ (BOOL)isTable:(id)arg1;
- (void)makeTable;
- (void)determineRowsAndColumns:(BOOL)arg1;
- (id)newTableCellFromZone:(id)arg1;
- (id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1;
- (void)dealloc;
- (id)initWithZone:(id)arg1;

@end

