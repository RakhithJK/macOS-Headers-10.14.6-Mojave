//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface SVMoreFromButton : UIControl
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelBottomConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBottomConstraint; // @synthesize titleLabelBottomConstraint=_titleLabelBottomConstraint;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)determineNumberOfLines;
- (void)updateImageViewHeight;
- (void)updateFonts;
- (void)preferredContentSizeCategoryDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateConstraints;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

