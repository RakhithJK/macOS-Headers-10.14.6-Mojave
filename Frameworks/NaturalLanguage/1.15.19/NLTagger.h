//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface NLTagger : NSObject
{
    NSArray *_schemes;
    NSString *_string;
    void *_tagger;
    NSMutableDictionary *_customModels;
    NSMutableDictionary *_customModelDictionaries;
    NSMutableDictionary *_classifierCaches;
    NSMutableDictionary *_sequenceCaches;
}

+ (id)availableTagSchemesForUnit:(long long)arg1 language:(id)arg2;
- (void).cxx_destruct;
- (id)modelsForTagScheme:(id)arg1;
- (void)setModels:(id)arg1 forTagScheme:(id)arg2;
- (void)stringEditedInRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)setOrthography:(id)arg1 range:(struct _NSRange)arg2;
- (void)setLanguage:(id)arg1 range:(struct _NSRange)arg2;
@property(readonly, copy, nonatomic) NSString *dominantLanguage;
- (struct _NSRange)tokenRangeAtIndex:(unsigned long long)arg1 unit:(long long)arg2;
- (id)tagsInRange:(struct _NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 tokenRanges:(id *)arg5;
- (id)tagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 tokenRange:(struct _NSRange *)arg4;
- (void)enumerateTagsInRange:(struct _NSRange)arg1 unit:(long long)arg2 scheme:(id)arg3 options:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)_customTagAtIndex:(unsigned long long)arg1 unit:(long long)arg2 scheme:(id)arg3 modelDictionary:(id)arg4;
- (id)_customTagAtIndex:(unsigned long long)arg1 fromTagDictionary:(id)arg2;
- (id)_customTagDictionaryForSentence:(id)arg1 model:(id)arg2;
- (id)_customModelAtIndex:(unsigned long long)arg1 unit:(long long)arg2 modelDictionary:(id)arg3;
- (struct _NSRange)sentenceRangeForRange:(struct _NSRange)arg1;
@property(retain, nonatomic) NSString *string;
- (id)_tagSchemeForScheme:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tagSchemes;
- (id)description;
- (void)dealloc;
- (id)initWithTagSchemes:(id)arg1;

@end

