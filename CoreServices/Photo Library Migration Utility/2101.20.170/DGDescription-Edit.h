//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Geode/DGDescription.h>

@interface DGDescription (Edit)
- (struct CGRect)imageCropRectForEditCropRect:(struct CGRect)arg1 masterSize:(struct DGSize_st)arg2;
- (struct CGRect)editCropRectForImageCropRect:(struct CGRect)arg1 masterSize:(struct DGSize_st)arg2;
- (long long)angleDirectionWithFlip;
- (struct DGSize_st)unrotatedCroppableSizeFromMasterSize:(struct DGSize_st)arg1;
- (struct CGAffineTransform)CGAffineTransformRotateFlipForMasterSize:(struct DGSize_st)arg1;
- (BOOL)containsEnabledOperationsWithIdentifiers:(id)arg1;
- (BOOL)containsEnabledOperationWithIdentifier:(id)arg1;
- (BOOL)containsUsableOperationsWithIdentifiers:(id)arg1;
- (BOOL)containsUsableOperationWithIdentifier:(id)arg1;
- (struct CGAffineTransform)transformFromMasterToVersionWithMasterSize:(struct DGSize_st)arg1;
- (BOOL)hasLevelsOperation;
- (BOOL)hasAutoRedEyeSpots;
- (BOOL)hasRedEyeSpots;
- (BOOL)hasRetouchStrokes;
- (id)autoRedEyeSpots;
- (id)redEyeSpots;
- (id)retouchStrokes;
- (BOOL)hasAdjustedRAWDecodeOperation;
- (BOOL)hasDefaultRAWDecodeOperation;
- (BOOL)hasRAWDecodeOperation;
- (id)RAWRecoveryValue;
- (id)RAWExposureValue;
- (id)RAWTintValue;
- (id)RAWTemperatureValue;
- (unsigned long long)rotationWithFlip;
- (BOOL)hasFlip;
- (CDStruct_900afa40)cropRectConstraint;
- (long long)_editCropRectOrientation;
- (id)_cropRectConstrainOrientation;
- (id)_cropRectConstrainRatio;
- (id)_cropRectConstrainTag;
- (BOOL)hasCrop;
- (struct CGRect)unitCropRectForImageSize:(struct DGSize_st)arg1;
- (id)unitCropRectValueForImageSize:(struct DGSize_st)arg1;
- (struct CGRect)cropRectForImageSize:(struct DGSize_st)arg1;
- (id)cropRectValueForImageSize:(struct DGSize_st)arg1;
- (BOOL)hasExplicitCrop;
- (struct CGRect)unitExplicitCropRectForImageSize:(struct DGSize_st)arg1;
- (id)unitExplicitCropRectValueForImageSize:(struct DGSize_st)arg1;
- (struct CGRect)explicitCropRect;
- (id)explicitCropRectValue;
- (BOOL)hasImplicitCrop;
- (id)unitImplicitStraightenCropRectValueForImageSize:(struct DGSize_st)arg1;
- (struct CGRect)implicitStraightenCropRectForImageSize:(struct DGSize_st)arg1;
- (id)implicitStraightenCropRectValueForImageSize:(struct DGSize_st)arg1;
- (BOOL)hasStraighten;
- (double)straightenAngleWithFlipRadians;
- (double)straightenAngleWithFlip;
- (double)straightenAngleRadians;
- (double)straightenAngle;
- (id)straightenValue;
- (id)edgeBlurEffectValue;
- (id)boostEffectValue;
- (id)fadeEffectValue;
- (id)blackVignetteEffectValue;
- (id)whiteVignetteEffectValue;
- (id)antiqueEffectValue;
- (id)sepiaEffectValue;
- (id)blackAndWhiteEffectValue;
- (id)whitePointValue;
- (id)gammaValue;
- (id)blackPointValue;
- (id)highlightsValue;
- (id)shadowsValue;
- (id)noiseValue;
- (id)sharpnessEdgeScaleValue;
- (id)tintValue;
- (id)temperatureValue;
- (id)saturationValue;
- (id)definitionValue;
- (id)contrastValue;
- (id)exposureValue;
- (id)vibrancyValue;
- (id)blackWhitePointsFullState;
- (id)shadowsHighlightsFullState;
- (id)saturationFullState;
- (id)vibrancyFullState;
- (id)_simpleValueForInputKey:(id)arg1 operationIdentifier:(id)arg2;
- (id)_simpleValueForInputKey:(id)arg1 operationIdentifier:(id)arg2 returnDefaultValue:(BOOL)arg3;
- (id)_fullStateForOperation:(id)arg1;
- (id)_firstUsableOperationWithIdentifier:(id)arg1;
@end

