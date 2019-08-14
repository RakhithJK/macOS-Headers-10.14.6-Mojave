//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UICircleProgressView : UIView
{
}

+ (Class)layerClass;
- (double)progressPresentationValue;
- (void)animateProgressCompletedWithCompletion:(CDUnknownBlockType)arg1;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) double progress;
@property(nonatomic) BOOL showProgressTray;
@property(nonatomic) double progressLineWidth;
@property(readonly, nonatomic) UIColor *progressColor;
- (void)setProgressColor:(id)arg1;
@property(nonatomic) long long progressStartPoint;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
