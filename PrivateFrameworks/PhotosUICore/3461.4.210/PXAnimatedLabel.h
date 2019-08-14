//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSFont, NSLayoutConstraint, NSString, PXAnimatedCounter, UXLabel;

@interface PXAnimatedLabel : UXView
{
    NSFont *_font;
    NSString *_text;
    PXAnimatedCounter *_counter;
    UXLabel *_label;
    NSLayoutConstraint *_counterWidthConstraint;
}

@property(readonly) NSLayoutConstraint *counterWidthConstraint; // @synthesize counterWidthConstraint=_counterWidthConstraint;
@property(retain) UXLabel *label; // @synthesize label=_label;
@property(retain) PXAnimatedCounter *counter; // @synthesize counter=_counter;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
- (void).cxx_destruct;
- (void)_updateConstraintsForText;
- (void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

