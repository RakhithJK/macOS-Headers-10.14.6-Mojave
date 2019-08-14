//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSControl.h>

@class NSImage;

@interface ImageSlider : NSControl
{
    NSImage *mBackground;
    NSImage *mKnob;
    NSImage *mOptionOneOffImage;
    NSImage *mOptionOneOnImage;
    NSImage *mOptionTwoOffImage;
    NSImage *mOptionTwoOnImage;
    struct CGRect mTrackRect;
    struct CGRect mSecondTrackRect;
    struct CGRect mKnobBounds;
    struct CGRect mKnobRect;
    struct CGRect mSecondSliderKnobRect;
    struct CGRect mOptionOneRect;
    struct CGRect mOptionTwoRect;
    double mCurrentValue;
    double mSecondSliderCurrentValue;
    double mMinValue;
    double mSecondSliderMinValue;
    double mMaxValue;
    double mSecondSliderMaxValue;
    SEL mAction;
    SEL mSecondSliderAction;
    SEL mDownAction;
    SEL mSecondSliderDownAction;
    SEL mUpAction;
    SEL mSecondSliderUpAction;
    SEL mOptionOneAction;
    SEL mOptionTwoAction;
    id mTarget;
    BOOL mIsChanging;
    BOOL mIsContinuous;
    BOOL mWholeNumbersOnly;
    double mKnobOffset;
    BOOL mOptionOneOn;
    BOOL mOptionTwoOn;
}

- (void)axUIElement:(id)arg1 setValue:(id)arg2 forAttribute:(id)arg3;
- (BOOL)axUIElement:(id)arg1 isAttributeSettable:(id)arg2;
- (id)axUIElement:(id)arg1 attributeValue:(id)arg2;
- (id)axUIElementAttributeNames:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)axValueDescriptionString;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)axValueIndicatorUIElement;
- (void)dealloc;
- (double)_trackPointForSecondSliderValue:(double)arg1;
- (void)_adjustSecondSliderValueByMovingKnob:(double)arg1;
- (double)_valueForSecondSliderTrackPoint:(double)arg1;
- (void)setSecondSliderMouseDownAction:(SEL)arg1;
- (void)setSecondSliderMouseUpAction:(SEL)arg1;
- (void)setSecondSliderAction:(SEL)arg1;
- (void)setSecondSliderMaxValue:(double)arg1;
- (double)secondSliderMaxValue;
- (double)secondSliderMinValue;
- (void)setSecondSliderMinValue:(double)arg1;
- (void)setCurrentValueForSecondSlider:(double)arg1;
- (double)floatValueForSecondSlider;
- (void)setSecondSliderTrackRect:(struct CGRect)arg1;
- (BOOL)isChanging;
- (void)mouseDown:(id)arg1;
- (double)_valueForTrackPoint:(double)arg1;
- (void)setWholeNumbersOnly:(BOOL)arg1;
- (void)setKnobOffset:(double)arg1;
- (double)_trackPointForValue:(double)arg1;
- (void)_adjustValueByMovingKnob:(double)arg1;
- (double)maxValue;
- (void)setMaxValue:(double)arg1;
- (double)minValue;
- (void)setMinValue:(double)arg1;
- (void)setCurrentValue:(double)arg1;
- (float)floatValue;
- (double)doubleValue;
- (void)setOptionTwoRect:(struct CGRect)arg1;
- (void)setOptionOneRect:(struct CGRect)arg1;
- (void)setTrackRect:(struct CGRect)arg1;
- (void)setOptionTwoOnImage:(id)arg1 offImage:(id)arg2;
- (void)setOptionOneOnImage:(id)arg1 offImage:(id)arg2;
- (void)setKnob:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setOptionTwoOn:(BOOL)arg1;
- (void)setOptionOneOn:(BOOL)arg1;
- (void)setOptionTwoAction:(SEL)arg1;
- (void)setOptionOneAction:(SEL)arg1;
- (void)setMouseDownAction:(SEL)arg1;
- (void)setMouseUpAction:(SEL)arg1;
- (void)setAction:(SEL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setIsContinuous:(BOOL)arg1;
- (BOOL)isContinuous;
- (BOOL)isOpaque;
- (void)parentViewDidResize;
- (void)parentViewWillResize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

