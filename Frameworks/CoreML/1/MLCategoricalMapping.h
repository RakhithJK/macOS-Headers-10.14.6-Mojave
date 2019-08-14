//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLFeatureValue, NSDictionary, NSString;

@interface MLCategoricalMapping : MLModel <MLModelSpecificationLoader>
{
    NSDictionary *_mapping;
    MLFeatureValue *_valueOnUnknown;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) MLFeatureValue *valueOnUnknown; // @synthesize valueOnUnknown=_valueOnUnknown;
@property(readonly, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)mapFeature:(id)arg1 error:(id *)arg2;
- (id)initWithMapping:(id)arg1 valueOnUnknown:(id)arg2 dataTransformerName:(id)arg3 inputDescription:(id)arg4 outputDescription:(id)arg5 orderedInputFeatureNames:(id)arg6 orderedOutputFeatureNames:(id)arg7 configuration:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

