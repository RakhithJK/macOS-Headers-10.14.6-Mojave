//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class UIPickerTableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell : UITableViewCell
{
    UITapGestureRecognizer *_tap;
    UIPickerTableView *pickerTable;
}

+ (id)_modernNonCenterCellFont;
+ (id)_modernCenterCellFont;
@property(nonatomic) UIPickerTableView *pickerTable; // @synthesize pickerTable;
- (void).cxx_destruct;
- (void)_tapAction:(id)arg1;
- (void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

