//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory10Key.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory10Key_Round : UIKBRenderFactory10Key
{
}

- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (BOOL)shouldUseRoundCornerForKey:(id)arg1;
- (id)shiftLockControlKeyTraits;
- (id)shiftedControlKeyTraits;
- (id)activeControlKeyTraits;
- (id)controlKeyTraits;
- (long long)lightHighQualityEnabledBlendForm;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyShadowColorName;
- (id)defaultKeyShadowColorName;
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3 onKeyplane:(id)arg4;
- (int)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;
- (unsigned long long)edgesWithInsetsForKey:(id)arg1 onKeyplane:(id)arg2;
- (BOOL)useRoundCorner;
- (struct UIEdgeInsets)wideShadowPaddleInsets;
- (struct UIEdgeInsets)symbolFrameInsets;

@end

