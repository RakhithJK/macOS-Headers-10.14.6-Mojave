//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NaturalLanguage/NLDataInstance.h>

@class NSArray;

@interface NLSequenceModelDataInstance : NLDataInstance
{
    NSArray *_tokens;
    NSArray *_labels;
}

+ (id)readInstancesFromString:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (void).cxx_destruct;
- (id)subInstanceWithLocator:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)locatorsWithIndex:(unsigned long long)arg1 parameters:(struct _NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(struct __CFStringTokenizer *)arg4;
- (struct __CFDictionary *)instanceDictionary;
- (id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2;
- (id)labels;
- (id)label;
- (id)tokens;
- (id)string;
- (id)initWithLine:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)initWithTokens:(id)arg1 labels:(id)arg2;

@end

