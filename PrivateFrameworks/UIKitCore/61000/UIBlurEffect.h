//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class UIColor, _UIBlurEffectImpl;

@interface UIBlurEffect : UIVisualEffect
{
    _UIBlurEffectImpl *_impl;
}

+ (void)_addBlurToEffectNode:(id)arg1 blurRadius:(double)arg2 scale:(double)arg3 options:(id)arg4;
+ (BOOL)supportsSecureCoding;
+ (id)effectWithBlurRadius:(double)arg1;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3;
+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)effectWithStyle:(long long)arg1;
- (void).cxx_destruct;
- (BOOL)_indicatesMacSidebarBackground;
- (id)effectSettings;
- (id)description;
- (BOOL)_isAutomaticStyle;
- (BOOL)_isATVStyle;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)_expectedUsage;
- (BOOL)_needsUpdateForOption:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
@property(readonly, nonatomic) BOOL _canProvideVibrancyEffect;
@property(readonly, nonatomic) BOOL _invertAutomaticStyle;
@property(readonly, nonatomic) UIColor *_tintColor;
@property(readonly, nonatomic) long long _style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImplementation:(id)arg1;
- (id)init;

@end

