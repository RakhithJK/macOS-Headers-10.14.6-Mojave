//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton
{
    UIImage *_touchImage;
    BOOL _showsTouchOnTopWhenHighlighted;
}

@property(retain, nonatomic) UIImage *touchImage; // @synthesize touchImage=_touchImage;
@property(nonatomic) BOOL showsTouchOnTopWhenHighlighted; // @synthesize showsTouchOnTopWhenHighlighted=_showsTouchOnTopWhenHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)_pressFeedbackImage;
- (struct CGPoint)_pressFeedbackPosition;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

