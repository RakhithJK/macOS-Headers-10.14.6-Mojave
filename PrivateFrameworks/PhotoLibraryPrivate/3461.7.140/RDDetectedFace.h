//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSNumber, NSString, RDDetectedFaceTable;

@interface RDDetectedFace : RDModel
{
}

+ (Class)tableClass;
@property(readonly, nonatomic) BOOL skippedInUnnamedFaces;
@property(readonly, nonatomic) double faceSkinScore;
@property(readonly, nonatomic) double faceDirectionAngle;
@property(readonly, nonatomic) double faceAngle;
@property(readonly, copy, nonatomic) NSNumber *tileFacePosition;
@property(readonly, copy, nonatomic) NSNumber *hasFaceTile;
@property(readonly, copy, nonatomic) NSNumber *faceFlags;
@property(readonly, nonatomic) BOOL ignore;
@property(readonly, copy, nonatomic) NSNumber *faceCount;
@property(readonly, nonatomic) BOOL rejected;
@property(readonly, nonatomic) double exposureValue;
@property(readonly, nonatomic) double sharpness;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double bottomRightY;
@property(readonly, nonatomic) double bottomRightX;
@property(readonly, nonatomic) double bottomLeftY;
@property(readonly, nonatomic) double bottomLeftX;
@property(readonly, nonatomic) double topRightY;
@property(readonly, nonatomic) double topRightX;
@property(readonly, nonatomic) double topLeftY;
@property(readonly, nonatomic) double topLeftX;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@property(readonly, copy, nonatomic) NSNumber *faceIndex;
@property(readonly, copy, nonatomic) NSString *ownerServiceKey;
@property(readonly, copy, nonatomic) NSNumber *correlatedFaceKey;
@property(readonly, copy, nonatomic) NSNumber *faceKey;
@property(readonly, copy, nonatomic) NSString *altMasterUuid;
@property(readonly, copy, nonatomic) NSString *masterUuid;
@property(readonly, nonatomic) RDDetectedFaceTable *table;
- (struct CGRect)detectedFaceUnitCropRect;

@end

