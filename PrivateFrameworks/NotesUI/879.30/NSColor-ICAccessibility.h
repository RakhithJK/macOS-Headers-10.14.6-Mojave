//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSColor.h>

@class NSString;

@interface NSColor (ICAccessibility)
+ (id)icaxHueNameForValue:(double)arg1;
- (id)_icaxLightnessSaturationHueFormatString;
- (id)_icaxSaturationHueFormatString;
- (id)_icaxLightnessHueFormatString;
- (id)_icaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
@property(readonly, nonatomic) NSString *icaxDescriptionWithLuma;
- (id)icaxSaturationModifier;
- (id)icaxLightnessModifier;
- (id)icaxHueName;
@property(readonly, nonatomic) NSString *icaxApproximateColorDescription;
@property(readonly, nonatomic) double icaxLuma;
- (double)icaxSaturation;
- (double)icaxHue;
@end

