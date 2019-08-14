//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDSimpleArtworkRenditionSpec.h>

@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec
{
}

- (BOOL)updatePackingPropertiesWithDocument:(id)arg1;
- (void)addLayerReferencesObject:(id)arg1;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)drawFlattenedImageIntoContext:(struct CGContext *)arg1 document:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *layerReferences; // @dynamic layerReferences;
@property(retain, nonatomic) TDRadiosityImageRenditionSpec *radiosityImage; // @dynamic radiosityImage;

@end

