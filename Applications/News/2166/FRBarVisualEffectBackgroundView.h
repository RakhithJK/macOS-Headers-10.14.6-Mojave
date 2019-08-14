//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIColor, UIView;

@interface FRBarVisualEffectBackgroundView : UIVisualEffectView
{
    BOOL _topHairlineEnabled;
    BOOL _bottomHairlineEnabled;
    UIColor *_backgroundTintColor;
    UIView *_tintView;
    UIView *_topHairline;
    UIView *_bottomHairline;
}

+ (id)newDefaultBackgroundViewWithColor:(id)arg1;
@property(retain, nonatomic) UIView *bottomHairline; // @synthesize bottomHairline=_bottomHairline;
@property(retain, nonatomic) UIView *topHairline; // @synthesize topHairline=_topHairline;
@property(retain, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
@property(nonatomic) BOOL bottomHairlineEnabled; // @synthesize bottomHairlineEnabled=_bottomHairlineEnabled;
@property(nonatomic) BOOL topHairlineEnabled; // @synthesize topHairlineEnabled=_topHairlineEnabled;
@property(copy, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
- (void).cxx_destruct;
- (void)setupTintView;
- (void)setupBottomHairline;
- (void)setupTopHairline;
- (void)layoutSubviews;

@end

