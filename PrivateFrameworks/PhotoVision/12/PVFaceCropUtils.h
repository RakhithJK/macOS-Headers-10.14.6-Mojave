//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVFaceCropUtils : NSObject
{
}

+ (struct CGSize)faceCropDimensionsFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (struct CGRect)cropBoundsInOriginalImageFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (struct CGRect)faceBoundsFromFaceCrop:(id)arg1 error:(id *)arg2;
+ (BOOL)isValidFaceCrop:(id)arg1;
+ (id)newFaceCropFromImageData:(id)arg1 withFaceRect:(struct CGRect)arg2 error:(id *)arg3;
+ (id)newFaceCropFromImageURL:(id)arg1 withFaceRect:(struct CGRect)arg2 error:(id *)arg3;
+ (id)newFaceCropFromCGImageSource:(const struct CGImageSource *)arg1 withFaceRect:(struct CGRect)arg2 error:(id *)arg3;
+ (id)newDictionaryWithCGImageSourceOptions;
+ (id)newDictionaryRepresentationOfFaceCropDataFromFaceBox:(struct CGRect)arg1 andCropRegion:(struct CGRect)arg2;
+ (id)newDictionaryPopulatedWithFaceCropDataFromImageData:(id)arg1;
+ (struct CGImageMetadata *)createOutputMetadataFromDictionary:(id)arg1;

@end

