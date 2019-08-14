//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHObject.h>

@class NSString, PHFaceprint;

@interface PHFace : PHObject
{
    NSString *_personIdentifier;
    BOOL _fetchPropertySetsIfNeeded;
    BOOL _verified;
    long long _assetModelId;
    long long _personModelId;
}

+ (Class)propertySetClassForFetchPropertySet:(id)arg1;
+ (id)defaultPropertySets;
+ (id)corePropertySets;
+ (id)identifierPropertySet;
+ (id)_fetchDeterministicallyOrderedFacesWithLocalIdentifiers:(id)arg1 fetchOptions:(id)arg2;
+ (BOOL)_deterministicOrderInSortDescriptors:(id)arg1;
+ (id)fetchFacesForPersonsAssociatedWithFaceGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForFaceCrop:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesOnAssetWithFace:(id)arg1 options:(id)arg2;
+ (id)fetchKeyFaceForFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInFaceGroup:(id)arg1 options:(id)arg2;
+ (id)fetchRejectedFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesForPerson:(id)arg1 options:(id)arg2;
+ (id)fetchFacesInAsset:(id)arg1 options:(id)arg2;
+ (id)fetchFacesWithOptions:(id)arg1;
+ (long long)confirmedFaceCropGenerationStateFromModel:(id)arg1;
+ (id)propertiesToLoadFromPhotoLibrary:(id)arg1;
+ (id)identifierCode;
@property(readonly, nonatomic, getter=isVerified) BOOL verified; // @synthesize verified=_verified;
@property(nonatomic) long long personModelId; // @synthesize personModelId=_personModelId;
@property(nonatomic) long long assetModelId; // @synthesize assetModelId=_assetModelId;
- (void).cxx_destruct;
- (BOOL)shouldFetchPropertySetsIfNeeded;
- (id)faceClusteringProperties;
- (void)fetchPropertySetsIfNeeded;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, nonatomic) long long qualityMeasure;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) PHFaceprint *faceprint;
@property(readonly, nonatomic) double posePitch;
@property(readonly, nonatomic) double poseYaw;
@property(readonly, nonatomic) double poseRoll;
@property(readonly, nonatomic) double expressionScore3;
@property(readonly, nonatomic) double expressionScore2;
@property(readonly, nonatomic) double expressionScore1;
@property(readonly, nonatomic) long long expressionType3;
@property(readonly, nonatomic) long long expressionType2;
@property(readonly, nonatomic) long long expressionType1;
@property(readonly, nonatomic) double expressionConfidence;
@property(readonly, nonatomic) long long faceAlgorithmVersion;
@property(readonly, nonatomic, getter=isConfirmedFaceCropGenerationPending) BOOL confirmedFaceCropGenerationPending;
@property(readonly, nonatomic) int trainingType;
@property(readonly, nonatomic) long long nameSource;
@property(readonly, copy, nonatomic) id adjustmentVersion;
@property(readonly, nonatomic, getter=isRightEyeClosed) BOOL rightEyeClosed;
@property(readonly, nonatomic, getter=isLeftEyeClosed) BOOL leftEyeClosed;
@property(readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property(readonly, nonatomic) double blurScore;
@property(readonly, nonatomic) BOOL hasSmile;
@property(readonly, nonatomic) BOOL manual;
@property(readonly, nonatomic) BOOL isInTrash;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic) double mouthY;
@property(readonly, nonatomic) double mouthX;
@property(readonly, nonatomic) double rightEyeY;
@property(readonly, nonatomic) double rightEyeX;
@property(readonly, nonatomic) double leftEyeY;
@property(readonly, nonatomic) double leftEyeX;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) long long sourceHeight;
@property(readonly, nonatomic) long long sourceWidth;
- (id)face;
- (id)initWithModel:(id)arg1 photoLibrary:(id)arg2;

@end
