//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNDetectedObjectObservation.h>

@class NSData, NSDictionary, NSNumber, VNFaceAttributes, VNFaceLandmarkSegments, VNFaceLandmarks2D, VNFaceLandmarks3D, VNFaceRegionMap, VNFaceTorsoprint, VNFaceprint, VNTorsoprint;

@interface VNFaceObservation : VNDetectedObjectObservation
{
    VNFaceLandmarks2D *_cachedLandmarks;
    VNFaceLandmarks3D *_cachedLandmarks3d;
    VNFaceRegionMap *_faceRegionMap;
    VNFaceAttributes *_faceAttributes;
    VNTorsoprint *_torsoprint;
    VNFaceTorsoprint *_faceTorsoprint;
    VNFaceLandmarkSegments *_faceLandmarkSegments;
    float _landmarkScore;
    BOOL _isBlinking;
    float _blinkScore;
    NSDictionary *_expressionsAndScores;
    float _faceJunkinessIndex;
    float _faceOrientationIndex;
    BOOL _hasBBoxBeenAligned;
    float _alignedRotationAngle;
    float _faceIdConfidence;
    NSNumber *_roll;
    NSNumber *_yaw;
    VNFaceLandmarks2D *_landmarks;
    NSData *_landmarkPoints;
    NSData *_landmarkPoints3d;
    NSData *_poseData;
    NSData *_alignedMeanShape;
    unsigned long long _faceId;
    VNFaceprint *_faceprint;
    struct _Geometry2D_rect2D_ _alignedBoundingBox;
}

+     // Error parsing type: c104@0:8{?=[4]}16^f80^f88^f96, name: computeYawPitchRollFromPoseMatrix:outputYaw:outputPitch:outputRoll:
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 alignedBoundingBox:(struct CGRect)arg3 roll:(id)arg4 yaw:(id)arg5;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 roll:(id)arg3 yaw:(id)arg4;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 faceprint:(id)arg3;
+ (id)faceObservationWithBoundingBox:(struct CGRect)arg1 faceprint:(id)arg2;
+ (id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2 andAlignedBoundingBox:(struct CGRect)arg3;
+ (id)faceObservationWithBoundingBox:(struct CGRect)arg1 andAlignedBoundingBox:(struct CGRect)arg2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_exifOrientationFromFaceRollAngle:(float)arg1 exifOrientation:(int *)arg2 error:(id *)arg3;
@property(readonly, nonatomic) VNFaceLandmarkSegments *faceLandmarkSegments; // @synthesize faceLandmarkSegments=_faceLandmarkSegments;
@property(retain, nonatomic) VNFaceprint *faceprint; // @synthesize faceprint=_faceprint;
@property(nonatomic) unsigned long long faceId; // @synthesize faceId=_faceId;
@property(readonly, nonatomic) VNFaceAttributes *faceAttributes; // @synthesize faceAttributes=_faceAttributes;
@property(readonly, nonatomic) VNFaceRegionMap *faceRegionMap; // @synthesize faceRegionMap=_faceRegionMap;
@property(retain, nonatomic) NSData *alignedMeanShape; // @synthesize alignedMeanShape=_alignedMeanShape;
@property(nonatomic) float faceIdConfidence; // @synthesize faceIdConfidence=_faceIdConfidence;
@property(retain, nonatomic) NSData *poseData; // @synthesize poseData=_poseData;
@property(retain, nonatomic) NSData *landmarkPoints3d; // @synthesize landmarkPoints3d=_landmarkPoints3d;
@property(retain, nonatomic) NSData *landmarkPoints; // @synthesize landmarkPoints=_landmarkPoints;
@property(nonatomic) float alignedRotationAngle; // @synthesize alignedRotationAngle=_alignedRotationAngle;
@property(nonatomic) struct _Geometry2D_rect2D_ alignedBoundingBox; // @synthesize alignedBoundingBox=_alignedBoundingBox;
@property(nonatomic) BOOL hasBBoxBeenAligned; // @synthesize hasBBoxBeenAligned=_hasBBoxBeenAligned;
@property(retain, nonatomic) VNFaceLandmarks2D *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) NSNumber *yaw; // @synthesize yaw=_yaw;
@property(retain, nonatomic) NSNumber *roll; // @synthesize roll=_roll;
- (void).cxx_destruct;
- (BOOL)getFaceEXIFOrientation:(int *)arg1 error:(id *)arg2;
- (void)setFaceTorsoprint:(id)arg1;
@property(readonly, nonatomic) VNFaceTorsoprint *faceTorsoprint;
@property(retain, nonatomic) VNTorsoprint *torsoprint;
- (void)setFaceOrientationIndex:(float)arg1;
- (void)setFaceJunkinessIndex:(float)arg1;
@property(readonly, nonatomic, getter=faceJunkinessIndex) float faceJunkinessIndex;
@property(readonly, nonatomic, getter=faceOrientationIndex) float faceOrientationIndex;
- (void)setFaceLandmarkSegments:(id)arg1;
- (void)setFaceAttributes:(id)arg1;
- (void)setFaceRegionMap:(id)arg1;
- (id)description;
- (float)landmarkScore;
- (void)setLandmarkScore:(float)arg1;
- (id)expressionsAndDetections;
- (id)expressionsAndScores;
- (void)setExpressionsAndScores:(id)arg1;
- (struct CGRect)alignedBoundingBoxAsCGRect;
@property(readonly) float blinkScore;
- (BOOL)isBlinking;
- (void)setBlinkScore:(float)arg1;
- (void)setIsBlinking:(BOOL)arg1;
- (BOOL)getComputedRectifyingTransform:(struct CGAffineTransform *)arg1;
// Error parsing type for property pose:
// Property attributes: T{?=[4]},R,N

@property(readonly, nonatomic) VNFaceLandmarks3D *landmarks3d;
@property(readonly, nonatomic) float nameConfidence;
@property(readonly, copy, nonatomic) NSDictionary *expressionsAndConfidence;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

