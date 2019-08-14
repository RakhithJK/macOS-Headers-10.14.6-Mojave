//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

__attribute__((visibility("hidden")))
@interface NSAppearanceAuxiliary : NSObject
{
    BOOL _preventArchiving;
    BOOL _allowsVibrancy;
    int _defaultBlendMode;
    NSColor *_tintColor;
    BOOL _supportsWhitePointAdjustments;
    BOOL _supportsBrightnessAdjustments;
    double _bezelBrightness;
    double _glyphBrightness;
    unsigned long long _colorTemperature;
    BOOL _allowsSystemTintColors;
    BOOL _allowsCustomTintColors;
}

@property BOOL allowsCustomTintColors; // @synthesize allowsCustomTintColors=_allowsCustomTintColors;
@property BOOL allowsSystemTintColors; // @synthesize allowsSystemTintColors=_allowsSystemTintColors;
@property unsigned long long colorTemperature; // @synthesize colorTemperature=_colorTemperature;
@property double glyphBrightness; // @synthesize glyphBrightness=_glyphBrightness;
@property double bezelBrightness; // @synthesize bezelBrightness=_bezelBrightness;
@property BOOL supportsBrightnessAdjustments; // @synthesize supportsBrightnessAdjustments=_supportsBrightnessAdjustments;
@property BOOL supportsWhitePointAdjustments; // @synthesize supportsWhitePointAdjustments=_supportsWhitePointAdjustments;
@property(retain) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property int defaultBlendMode; // @synthesize defaultBlendMode=_defaultBlendMode;
@property BOOL allowsVibrancy; // @synthesize allowsVibrancy=_allowsVibrancy;
@property BOOL preventArchiving; // @synthesize preventArchiving=_preventArchiving;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

