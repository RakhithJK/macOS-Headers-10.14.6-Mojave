//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNContactCell.h>

@class CNPropertyGroupItem, UIResponder, UITextField;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNPropertyNameCell : CNContactCell
{
    UITextField *_textField;
    UIResponder *_firstResponderItem;
    id <CNPropertyCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIResponder *firstResponderItem; // @synthesize firstResponderItem=_firstResponderItem;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) CNPropertyGroupItem *propertyItem;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

