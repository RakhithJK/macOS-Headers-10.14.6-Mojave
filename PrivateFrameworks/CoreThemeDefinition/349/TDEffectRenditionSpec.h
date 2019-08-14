//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSImage, NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec
{
    NSImage *_sampleImage;
}

+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
@property(readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectOutputOpacity;
@property(readonly, retain, nonatomic) TDEffectComponent *CUIShapeEffectShapeOpacity;
- (id)componentOfType:(unsigned int)arg1;
- (BOOL)canBePackedWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2;
- (id)effectPreset;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;
- (void)dealloc;
- (id)sampleImage;
- (struct CGImage *)_effectSampleImage;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *components; // @dynamic components;
@property(retain, nonatomic) NSNumber *effectScale; // @dynamic effectScale;

@end

