//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UITableViewCellSelectedBackground : UIView
{
    long long _selectionStyle;
    UIColor *_multiselectBackgroundColor;
    UIColor *_selectionTintColor;
    UIColor *_noneStyleBackgroundColor;
    UIVisualEffectView *_selectionEffectsView;
    BOOL _multiselect;
}

@property(retain, nonatomic) UIColor *noneStyleBackgroundColor; // @synthesize noneStyleBackgroundColor=_noneStyleBackgroundColor;
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(retain, nonatomic) UIColor *multiselectBackgroundColor; // @synthesize multiselectBackgroundColor=_multiselectBackgroundColor;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_canDrawContent;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *selectionEffects;
@property(nonatomic, getter=isMultiselect) BOOL multiselect;

@end

