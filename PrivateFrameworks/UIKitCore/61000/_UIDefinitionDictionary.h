//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASAsset, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionDictionary : NSObject
{
    BOOL _activated;
    ASAsset *_rawAsset;
    NSString *_definitionLanguage;
}

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;
@property BOOL activated; // @synthesize activated=_activated;
@property(readonly) NSString *definitionLanguage; // @synthesize definitionLanguage=_definitionLanguage;
@property(readonly) ASAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isTTYDictionary;
- (id)_definitionValueForTerm:(id)arg1;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (BOOL)_hasDefinitionForTerm:(id)arg1;
@property(readonly) NSString *localizedDictionaryName;
@property(readonly) NSString *localizedLanguageName;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

