//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;
- (void)appendDescriptionTo:(id)arg1;
- (BOOL)_needsUpdateForOption:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (BOOL)canProvideVibrancyEffect;
- (BOOL)invertAutomaticStyle;
- (id)tintColor;
- (long long)style;
- (void)setEffect:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

