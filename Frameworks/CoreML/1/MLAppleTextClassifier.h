//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLAppleTextClassifierParameters, NSString;

@interface MLAppleTextClassifier : MLModel <MLModelSpecificationLoader>
{
    void *textClassifierModel;
    MLAppleTextClassifierParameters *_parameters;
}

+ (BOOL)saveAppleTextClassifierModelToURL:(id)arg1 textClassifierParameters:(id)arg2 error:(id *)arg3;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property(readonly) MLAppleTextClassifierParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 nlpHandle:(id)arg3 configuration:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

