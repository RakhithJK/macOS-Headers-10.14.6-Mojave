//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@interface _UIBlurThroughEffect : UIVisualEffect
{
    long long _style;
}

+ (id)_blurThroughWithStyle:(long long)arg1;
- (BOOL)_indicatesMacSidebarBackground;
- (id)description;
- (long long)_expectedUsage;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (BOOL)_needsUpdateForMovingToWindow:(id)arg1 fromWindow:(id)arg2 inEffectView:(id)arg3;
- (BOOL)_needsUpdateForMovingToSuperview:(id)arg1 fromSuperview:(id)arg2 inEffectView:(id)arg3;
- (BOOL)_needsUpdateForOption:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

