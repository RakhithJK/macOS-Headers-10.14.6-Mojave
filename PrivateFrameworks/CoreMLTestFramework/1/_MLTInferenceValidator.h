//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _MLTInferenceValidator : NSObject
{
    BOOL _verbose;
    BOOL _quiet;
    NSString *_computeUnit;
    NSString *_errorString;
}

@property(retain) NSString *errorString; // @synthesize errorString=_errorString;
@property(retain) NSString *computeUnit; // @synthesize computeUnit=_computeUnit;
@property(nonatomic) BOOL quiet; // @synthesize quiet=_quiet;
@property(nonatomic) BOOL verbose; // @synthesize verbose=_verbose;
- (void).cxx_destruct;
- (BOOL)validatePrediction:(id)arg1 withExpectedValue:(id)arg2 testCaseName:(id)arg3 error:(id *)arg4;
- (void)calculateAndVerifyMetric:(id)arg1 forFeatureName:(id)arg2 betweenPredictedValue:(id)arg3 andexpectedValue:(id)arg4 withThresholdInformation:(id)arg5 andTestCaseName:(id)arg6;
- (void)addErrorString:(id)arg1 forTestCase:(id)arg2 andFeatureName:(id)arg3;
- (id)initWithVerbosity:(BOOL)arg1 computeUnit:(long long)arg2;

@end

