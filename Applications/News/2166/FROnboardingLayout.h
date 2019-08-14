//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface FROnboardingLayout : NSObject <NSCopying>
{
    long long _countOfItems;
    long long _countOfVisibleItems;
    double _horizontalCellMargin;
    double _verticalCellMargin;
    long long _columnCount;
    long long _maxVisibleRow;
    struct CGSize _sizeOfViewport;
    struct CGSize _cellSize;
    struct UIEdgeInsets _contentInsets;
}

+ (double)cardMarginForSize:(struct CGSize)arg1;
@property(nonatomic) long long maxVisibleRow; // @synthesize maxVisibleRow=_maxVisibleRow;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) double verticalCellMargin; // @synthesize verticalCellMargin=_verticalCellMargin;
@property(nonatomic) double horizontalCellMargin; // @synthesize horizontalCellMargin=_horizontalCellMargin;
@property(nonatomic) struct CGSize sizeOfViewport; // @synthesize sizeOfViewport=_sizeOfViewport;
@property(nonatomic) long long countOfVisibleItems; // @synthesize countOfVisibleItems=_countOfVisibleItems;
@property(nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (long long)calculatePotentialMaxVisibleRowThatWouldBeFullyPopulated;
- (struct CGPoint)centerForRow:(long long)arg1 column:(long long)arg2;
- (struct CGRect)boundsForIndex:(long long)arg1;
- (struct CGPoint)centerForIndex:(long long)arg1;
- (CDStruct_912cb5d2)positionOfIndex:(long long)arg1;
@property(readonly, nonatomic) double contentHeight;
- (double)adjustedWidthOfViewPort;
- (double)contentSideMargin;
@property(readonly, nonatomic) long long rowCount;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

