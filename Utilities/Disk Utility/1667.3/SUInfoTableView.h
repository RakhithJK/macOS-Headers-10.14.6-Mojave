//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, SUDiskInfo;

@interface SUInfoTableView : NSView
{
    NSMutableArray *labelViews;
    NSMutableArray *valueViews;
    struct CGSize calculatedSize;
    SUDiskInfo *diskInfo;
}

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)_valueForItem:(long long)arg1;
- (id)_labelForItem:(long long)arg1;
- (void)reloadData;
- (void)drawRect:(struct CGRect)arg1;
- (void)setDiskInfo:(id)arg1;
- (id)_constraintsEffectingView:(id)arg1;
- (void)_setLabelPropertiesOnTextField:(id)arg1 isValue:(BOOL)arg2;
- (void)_calculateIntrinsicSize;
- (void)_addLabels;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
