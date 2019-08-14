//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDateComponents, UIDatePicker;
@protocol HUDatePickerCellDelegate;

@interface HUDatePickerCell : UITableViewCell
{
    id <HUDatePickerCellDelegate> _delegate;
    UIDatePicker *_datePicker;
}

@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(nonatomic) __weak id <HUDatePickerCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_valueChanged:(id)arg1;
@property(retain, nonatomic) NSDateComponents *timeComponents;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

