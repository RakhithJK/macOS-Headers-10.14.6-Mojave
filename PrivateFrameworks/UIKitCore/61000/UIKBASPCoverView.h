//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class CAGradientLayer;

__attribute__((visibility("hidden")))
@interface UIKBASPCoverView : UIView
{
    CAGradientLayer *_gradientLayer;
}

+ (id)ASPCoverViewColor;
+ (id)ASPCoverView:(BOOL)arg1 withFrame:(struct CGRect)arg2 isRightToLeft:(BOOL)arg3 withTextWidth:(double)arg4;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initCoverViewWithFrame:(struct CGRect)arg1 isRightToLeft:(BOOL)arg2 withTextWidth:(double)arg3;
- (id)initCoverBackgroundViewWithFrame:(struct CGRect)arg1 isRightToLeft:(BOOL)arg2;

@end

