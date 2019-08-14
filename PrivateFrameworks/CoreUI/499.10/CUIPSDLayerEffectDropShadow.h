//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent
{
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    short _angle;
    unsigned long long _distance;
    unsigned long long _blurSize;
    unsigned long long _spread;
}

@property unsigned long long spread; // @synthesize spread=_spread;
@property unsigned long long blurSize; // @synthesize blurSize=_blurSize;
@property unsigned long long distance; // @synthesize distance=_distance;
@property short angle; // @synthesize angle=_angle;
@property(retain) CUIColor *color; // @synthesize color=_color;
@property double opacity; // @synthesize opacity=_opacity;
@property int blendMode; // @synthesize blendMode=_blendMode;
- (void)dealloc;
- (unsigned int)effectType;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id *)arg2;

@end

