//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CVML/CVMLObservation.h>

#import <CVML/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CVMLFaceModelObservation : CVMLObservation <NSSecureCoding>
{
    BOOL mIsModelBuilt;
    unsigned int mModelVersion;
    unsigned int mModelMinorVersion;
    unsigned int mEnrolledFaceCount;
    NSString *mFaceprintType;
    NSMutableDictionary *mUUIDToInternalIdMap;
    NSMutableArray *mInternalIdToUUIDMap;
    struct vector<int, std::__1::allocator<int>> mFaceprintCountPerIdentity;
    struct shared_ptr<vision::mod::ModelValues> mModelValues;
    struct map<(anonymous namespace)::Faceprint, int, std::__1::less<(anonymous namespace)::Faceprint>, std::__1::allocator<std::__1::pair<const (anonymous namespace)::Faceprint, int>>> mFaceprintToInternalIdMap;
    NSArray *_modelLabels;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSArray *modelLabels; // @synthesize modelLabels=_modelLabels;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)algorithmMinorVersion;
- (unsigned int)algorithmMajorVersion;
- (id)identitiesModelCanIdentify;
- (id)identitiesEnrolledInModel;
- (id)createDictionaryRepresentationOfModelValuesNoCopy;
- (BOOL)removeIdentity:(id)arg1;
- (BOOL)removeFace:(id)arg1;
- (BOOL)addFace:(id)arg1 error:(id *)arg2;
- (id)getUUIDForInternalId:(int)arg1;
- (void)setIsModelBuilt:(BOOL)arg1;
- (BOOL)isModelReadyToIdentifyFaces;
- (BOOL)canBuildModel;
- (int)enrolledFaceCountForIdentity:(id)arg1;
- (int)enrolledIdentitiesCount;
- (int)facePrintLength;
- (int)maxFaceprintCountPerIdentity;
- (int)minRequiredFaceprintsPerIdentityCount;
- (int)maxIdentitiesCount;
- (int)minRequiredIdentitiesCount;
- (int)enrolledFaceCount;
- (BOOL)setVIPAlgorithmState:(void *)arg1;
- (const void *)vipAlgorithmState;
- (id)flattenedFaceIdCache;
- (id)flattenedFaceprintCache;
- (unsigned int)modelVersion;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)setModelValuesFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

