//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NLDataProvider, NLModelConfiguration;

@interface NLDataSet : NSObject
{
    NLModelConfiguration *_configuration;
    NLDataProvider *_trainingDataProvider;
    NLDataProvider *_validationDataProvider;
    NLDataProvider *_testDataProvider;
}

+ (id)dataSetWithDataSet:(id)arg1 constraintParameters:(struct _NLConstraintParameters)arg2 modelTrainer:(id)arg3;
- (void).cxx_destruct;
- (unsigned long long)numberOfVocabularyEntries;
- (unsigned long long)numberOfLabels;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)inverseLabelMap;
- (id)labelMap;
- (id)testInstanceAtIndex:(unsigned long long)arg1;
- (id)validationInstanceAtIndex:(unsigned long long)arg1;
- (id)trainingInstanceAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfTestInstances;
@property(readonly) unsigned long long numberOfValidationInstances;
@property(readonly) unsigned long long numberOfTrainingInstances;
- (id)dataProviderOfType:(long long)arg1;
@property(readonly, copy) NLModelConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1 dataProvider:(id)arg2 validationSplit:(double)arg3 testingSplit:(double)arg4;
- (id)initWithConfiguration:(id)arg1 trainingDataURL:(id)arg2 validationDataURL:(id)arg3 testDataURL:(id)arg4;
- (id)initWithConfiguration:(id)arg1 trainingDataProvider:(id)arg2 validationDataProvider:(id)arg3 testDataProvider:(id)arg4;

@end
