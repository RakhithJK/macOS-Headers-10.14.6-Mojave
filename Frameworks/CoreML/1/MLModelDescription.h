//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOrderedSet, NSString;

@interface MLModelDescription : NSObject
{
    NSDictionary *_inputDescriptionsByName;
    NSDictionary *_outputDescriptionsByName;
    NSString *_predictedFeatureName;
    NSString *_predictedProbabilitiesName;
    NSDictionary *_metadata;
    NSOrderedSet *_inputFeatureNames;
    NSOrderedSet *_outputFeatureNames;
}

+ (id)metadataWithFormat:(struct _MLModelMetadataSpecification *)arg1;
+ (id)metadataWithSpecification:(struct _MLModelSpecification *)arg1;
@property(retain) NSOrderedSet *outputFeatureNames; // @synthesize outputFeatureNames=_outputFeatureNames;
@property(retain) NSOrderedSet *inputFeatureNames; // @synthesize inputFeatureNames=_inputFeatureNames;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSString *predictedProbabilitiesName; // @synthesize predictedProbabilitiesName=_predictedProbabilitiesName;
@property(readonly, copy, nonatomic) NSString *predictedFeatureName; // @synthesize predictedFeatureName=_predictedFeatureName;
@property(readonly, nonatomic) NSDictionary *outputDescriptionsByName; // @synthesize outputDescriptionsByName=_outputDescriptionsByName;
@property(readonly, nonatomic) NSDictionary *inputDescriptionsByName; // @synthesize inputDescriptionsByName=_inputDescriptionsByName;
- (void).cxx_destruct;
- (BOOL)verifyInput:(id)arg1 error:(id *)arg2;
- (BOOL)isEqualToDescription:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithModelDescriptionSpecification:(struct _MLModelDescriptionSpecification *)arg1 error:(id *)arg2;
- (id)initWithInputDescriptions:(id)arg1 outputDescriptions:(id)arg2 predictedFeatureName:(id)arg3 predictedProbabilitiesName:(id)arg4 metadata:(id)arg5;
- (id)debugQuickLookObject;

@end
