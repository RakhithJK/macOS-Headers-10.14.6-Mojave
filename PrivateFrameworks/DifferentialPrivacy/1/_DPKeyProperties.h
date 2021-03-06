//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, _DPPrivacyBudget, _DPValueRange;

@interface _DPKeyProperties : NSObject
{
    BOOL _keyPatternsAllowed;
    NSString *_propertiesName;
    _DPValueRange *_possibleRange;
    NSNumber *_acceptableError;
    _DPValueRange *_trimmedScale;
    NSString *_noiseDistribution;
    _DPPrivacyBudget *_budget;
    NSNumber *_privacyParameter;
    unsigned long long _fragmentWidth;
    unsigned long long _fragmentCount;
    NSString *_serverAlgorithmString;
    NSDictionary *_parameterDictionary;
    unsigned long long _submissionPriority;
    unsigned long long _dataAlgorithm;
    unsigned long long _privatizationAlgorithm;
    unsigned long long _transport;
}

+ (id)propertiesFromFile:(id)arg1;
+ (id)keyPropertiesForName:(id)arg1;
+ (id)keyPropertiesFromDictionary:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) unsigned long long privatizationAlgorithm; // @synthesize privatizationAlgorithm=_privatizationAlgorithm;
@property(readonly, nonatomic) unsigned long long dataAlgorithm; // @synthesize dataAlgorithm=_dataAlgorithm;
@property(readonly, nonatomic) unsigned long long submissionPriority; // @synthesize submissionPriority=_submissionPriority;
@property(readonly, nonatomic) BOOL keyPatternsAllowed; // @synthesize keyPatternsAllowed=_keyPatternsAllowed;
@property(readonly, nonatomic) NSDictionary *parameterDictionary; // @synthesize parameterDictionary=_parameterDictionary;
@property(readonly, copy, nonatomic) NSString *serverAlgorithmString; // @synthesize serverAlgorithmString=_serverAlgorithmString;
@property(readonly, nonatomic) unsigned long long fragmentCount; // @synthesize fragmentCount=_fragmentCount;
@property(readonly, nonatomic) unsigned long long fragmentWidth; // @synthesize fragmentWidth=_fragmentWidth;
@property(readonly, nonatomic) NSNumber *privacyParameter; // @synthesize privacyParameter=_privacyParameter;
@property(readonly, nonatomic) _DPPrivacyBudget *budget; // @synthesize budget=_budget;
@property(readonly, copy, nonatomic) NSString *noiseDistribution; // @synthesize noiseDistribution=_noiseDistribution;
@property(readonly, nonatomic) _DPValueRange *trimmedScale; // @synthesize trimmedScale=_trimmedScale;
@property(readonly, nonatomic) NSNumber *acceptableError; // @synthesize acceptableError=_acceptableError;
@property(readonly, nonatomic) _DPValueRange *possibleRange; // @synthesize possibleRange=_possibleRange;
@property(readonly, copy, nonatomic) NSString *propertiesName; // @synthesize propertiesName=_propertiesName;
- (void).cxx_destruct;
- (id)privatizationAlgorithmString;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

