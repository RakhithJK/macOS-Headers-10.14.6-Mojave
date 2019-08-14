//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface FRFeatureView : UIView
{
    BOOL _imageOnTop;
    UIImageView *_featureImageView;
    UILabel *_featureTitleLabel;
    UILabel *_featureBodyLabel;
    NSString *_title;
    NSString *_body;
}

@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) __weak UILabel *featureBodyLabel; // @synthesize featureBodyLabel=_featureBodyLabel;
@property(readonly, nonatomic) __weak UILabel *featureTitleLabel; // @synthesize featureTitleLabel=_featureTitleLabel;
@property(readonly, nonatomic) __weak UIImageView *featureImageView; // @synthesize featureImageView=_featureImageView;
@property(nonatomic) BOOL imageOnTop; // @synthesize imageOnTop=_imageOnTop;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (double)lineHeight;
- (id)bodyFont;
- (id)titleFont;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)titleToBodySpacing;
@property(readonly, nonatomic) double imageOnTopPadding;
- (double)iconPadding;
- (double)textPadding;
- (double)minTextWidth;
@property(readonly, nonatomic) struct CGSize iconSize;
- (BOOL)useCompactLayout;
- (id)featureBody;
- (id)featureTitle;
- (id)featureImage;
- (id)initWithImage:(id)arg1 title:(id)arg2 body:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

