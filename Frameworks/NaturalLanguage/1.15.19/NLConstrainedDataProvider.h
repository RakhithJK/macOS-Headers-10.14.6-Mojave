//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NaturalLanguage/NLDataProvider.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLConstrainedDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;
    struct _NLConstraintParameters _parameters;
    NSArray *_locators;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfVocabularyEntries;
- (unsigned long long)numberOfLabels;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)inverseLabelMap;
- (id)labelMap;
- (struct __CFStringTokenizer *)tokenizer;
- (void)_generateMaps;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfInstances;
- (id)configuration;
- (id)initWithDataProvider:(id)arg1 parameters:(struct _NLConstraintParameters)arg2 modelTrainer:(id)arg3;

@end

