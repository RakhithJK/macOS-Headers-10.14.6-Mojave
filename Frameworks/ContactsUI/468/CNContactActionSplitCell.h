//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface CNContactActionSplitCell : CNLabeledCell
{
    UIButton *_leftLabel;
    UIButton *_rightLabel;
}

@property(readonly, nonatomic) UIButton *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) UIButton *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;
- (id)constantConstraints;
- (void)setLabelTextAttributes:(id)arg1;
- (id)rightMostView;
- (id)labelView;
- (double)minCellHeight;
- (id)standardButton;
- (void)setCardGroupItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

