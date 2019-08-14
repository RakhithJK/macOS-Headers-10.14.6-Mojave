//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSString, UISlider;
@protocol HUControlViewDelegate;

@interface HUSimpleSliderControlView : UIView <HUControlView>
{
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    UISlider *_slider;
}

+ (Class)valueClass;
@property(readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_sliderValueChanged:(id)arg1;
- (void)_sliderTouchUp:(id)arg1;
- (void)_sliderTouchDown:(id)arg1;
@property(nonatomic, getter=isDisabled) BOOL disabled;
@property(retain, nonatomic) id value;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) float maxValue;
@property(nonatomic) float minValue;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) BOOL canBeHighlighted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

