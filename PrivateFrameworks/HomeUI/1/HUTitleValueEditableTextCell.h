//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, NSArray, NSLayoutConstraint, NSString, UIFont, UILabel, UITextField;
@protocol HUResizableCellDelegate;

@interface HUTitleValueEditableTextCell : UITableViewCell <HUDisableableCellProtocol, HUCellProtocol>
{
    BOOL _disabled;
    BOOL _hideTitle;
    UITextField *_valueTextField;
    HFItem *_item;
    NSString *_titleText;
    UIFont *_titleFont;
    long long _compressionResistancePolicy;
    UILabel *_titleLabel;
    NSArray *_titleLabelConstraints;
    NSArray *_valueTextFieldConstraints;
    NSLayoutConstraint *_labelsSpacingConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *labelsSpacingConstraint; // @synthesize labelsSpacingConstraint=_labelsSpacingConstraint;
@property(retain, nonatomic) NSArray *valueTextFieldConstraints; // @synthesize valueTextFieldConstraints=_valueTextFieldConstraints;
@property(retain, nonatomic) NSArray *titleLabelConstraints; // @synthesize titleLabelConstraints=_titleLabelConstraints;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long compressionResistancePolicy; // @synthesize compressionResistancePolicy=_compressionResistancePolicy;
@property(nonatomic) BOOL hideTitle; // @synthesize hideTitle=_hideTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
@property(nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic) UITextField *valueTextField; // @synthesize valueTextField=_valueTextField;
- (void).cxx_destruct;
- (void)_updateCompressionResistance;
- (void)_updateTitle;
- (void)_addValueTextField;
- (void)_addTitleLabel;
- (void)updateUIWithAnimation:(BOOL)arg1;
- (void)updateConstraints;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

