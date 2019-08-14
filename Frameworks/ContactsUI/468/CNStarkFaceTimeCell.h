//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNContactCell.h>

@class CNTransportButton, NSDictionary, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkFaceTimeCell : CNContactCell
{
    id <CNPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    CNTransportButton *_transportIcon;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(readonly, nonatomic) CNTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (void)transportButtonClicked:(id)arg1;
- (void)performDefaultAction;
- (id)constantConstraints;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

