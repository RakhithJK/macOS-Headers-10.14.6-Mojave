//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TDesktopGridLayout : NSObject
{
    int _layoutStyle;
    _Bool _justifiedLayout;
    struct CGRect _frame;
    double _topMargin;
    double _bottomMargin;
    double _leftMargin;
    double _rightMargin;
    struct CGRect _anchoredCellFrame;
    struct CGSize _cellSize;
    struct TIconLayoutBitmap _bitmap;
}

@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _Bool justifiedLayout; // @synthesize justifiedLayout=_justifiedLayout;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)nextOpenLocation:(struct CGPoint *)arg1;
- (void)clearAllItemLocations;
- (void)occupyGridSpotsForRect:(const struct CGRect *)arg1;
- (_Bool)setItemLocation:(const struct CGPoint *)arg1;
- (_Bool)itemAtLocation:(const struct CGPoint *)arg1;
- (vector_e1abc270)occupyGridSpots:(unsigned long long)arg1;
- (struct CGPoint)gridLocationInDirection:(int)arg1 fromAnchor:(const struct CGPoint *)arg2;
- (struct CGPoint)nearestGridLocation:(struct CGPoint)arg1;
- (unsigned long long)nextMajorIndexFromIndex:(unsigned long long)arg1;
- (struct CGPoint)anchorForIndex:(unsigned long long)arg1;
- (struct CGPoint)anchorAtGridLocation:(struct CGPoint)arg1;
- (unsigned long long)numberOfGridSpots;
- (struct CGSize)gridDimensions;
@property(readonly, nonatomic) struct CGSize cellSize;
@property(nonatomic) _Bool expandsIfNeeded; // @dynamic expandsIfNeeded;
- (void)updateGrid;
@property(nonatomic) struct CGRect anchoredCellFrame;
- (_Bool)getCellFrame:(struct CGRect *)arg1 atGridLocation:(struct CGPoint)arg2;
- (double)heightForRows:(unsigned long long)arg1;
- (struct CGSize)calculateGridDimensions;
@property(readonly, nonatomic) struct CGRect layoutFrame;
- (_Bool)isLTRLayout;
- (_Bool)isVerticalLayout;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect)arg1 anchoredCellFrame:(struct CGRect)arg2 layoutStyle:(int)arg3 justifiedLayout:(_Bool)arg4;
- (id)init;

@end

