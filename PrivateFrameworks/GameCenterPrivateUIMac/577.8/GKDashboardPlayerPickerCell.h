//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKDashboardPlayerCell.h>

@class NSImageView, NSLayoutConstraint, UIButton;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell
{
    BOOL _selectable;
    NSImageView *_selectionView;
    UIButton *_selectionButton;
    NSLayoutConstraint *_nameConstraint;
    NSLayoutConstraint *_selectionHorizontalConstraint;
    NSLayoutConstraint *_selectionVerticalConstraint;
    NSLayoutConstraint *_statusHeightConstraint;
    double _nameInitialConstant;
    double _selectionInitialHorizontalConstant;
    double _selectionInitialVerticalConstant;
    double _statusInitialConstant;
}

@property(nonatomic) double statusInitialConstant; // @synthesize statusInitialConstant=_statusInitialConstant;
@property(nonatomic) double selectionInitialVerticalConstant; // @synthesize selectionInitialVerticalConstant=_selectionInitialVerticalConstant;
@property(nonatomic) double selectionInitialHorizontalConstant; // @synthesize selectionInitialHorizontalConstant=_selectionInitialHorizontalConstant;
@property(nonatomic) double nameInitialConstant; // @synthesize nameInitialConstant=_nameInitialConstant;
@property(nonatomic) NSLayoutConstraint *statusHeightConstraint; // @synthesize statusHeightConstraint=_statusHeightConstraint;
@property(nonatomic) NSLayoutConstraint *selectionVerticalConstraint; // @synthesize selectionVerticalConstraint=_selectionVerticalConstraint;
@property(nonatomic) NSLayoutConstraint *selectionHorizontalConstraint; // @synthesize selectionHorizontalConstraint=_selectionHorizontalConstraint;
@property(nonatomic) NSLayoutConstraint *nameConstraint; // @synthesize nameConstraint=_nameConstraint;
@property(nonatomic) UIButton *selectionButton; // @synthesize selectionButton=_selectionButton;
@property(nonatomic) NSImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
- (void)setSelected:(BOOL)arg1;
- (void)setStatusWithAchievementEarnedPoints:(long long)arg1 andDate:(id)arg2;
- (void)setPlayer:(id)arg1;
- (void)awakeFromNib;

@end

