//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffect;
@protocol HFIconDescriptor, HUIconContentViewDelegate;

@interface HUIconContentView : UIView
{
    BOOL _disableContinuousAnimation;
    UIVisualEffect *_vibrancyEffect;
    id <HUIconContentViewDelegate> _delegate;
    unsigned long long _iconSize;
    double _aspectRatio;
    unsigned long long _displayContext;
    unsigned long long _displayStyle;
    long long _renderingMode;
    id <HFIconDescriptor> _iconDescriptor;
    long long _primaryState;
}

+ (id)iconImageNamed:(id)arg1 withSize:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;
+ (Class)iconContentViewClassForIconDescriptor:(id)arg1;
@property(nonatomic) long long primaryState; // @synthesize primaryState=_primaryState;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(nonatomic) long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(readonly, nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) BOOL disableContinuousAnimation; // @synthesize disableContinuousAnimation=_disableContinuousAnimation;
@property(nonatomic) unsigned long long displayContext; // @synthesize displayContext=_displayContext;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) __weak id <HUIconContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIVisualEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;
- (void).cxx_destruct;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)invalidateRenderingMode;
- (void)_updateOverrideRenderingModeForSubviewsOfView:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (id)managedVisualEffectViews;
- (BOOL)wantsManagedVibrancyEffect;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

