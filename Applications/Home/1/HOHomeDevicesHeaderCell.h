//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "HUCellProtocol-Protocol.h"

@class HFItem, NSString, UILabel;
@protocol HUResizableCellDelegate;

@interface HOHomeDevicesHeaderCell : UICollectionViewCell <HUCellProtocol>
{
    HFItem *_item;
    UILabel *_devicesLabel;
}

+ (double)requiredHeight;
@property(retain, nonatomic) UILabel *devicesLabel; // @synthesize devicesLabel=_devicesLabel;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

