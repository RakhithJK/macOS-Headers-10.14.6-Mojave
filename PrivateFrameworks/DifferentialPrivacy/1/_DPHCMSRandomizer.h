//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DifferentialPrivacy/_DPStringRandomizer-Protocol.h>

@interface _DPHCMSRandomizer : NSObject <_DPStringRandomizer>
{
    double _epsilon;
    unsigned long long _m;
    unsigned long long _k;
    double _fragmentEpsilon;
    unsigned long long _fragmentM;
    unsigned long long _fragmentK;
}

+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6;
+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long fragmentK; // @synthesize fragmentK=_fragmentK;
@property(readonly, nonatomic) unsigned long long fragmentM; // @synthesize fragmentM=_fragmentM;
@property(readonly, nonatomic) double fragmentEpsilon; // @synthesize fragmentEpsilon=_fragmentEpsilon;
@property(readonly, nonatomic) unsigned long long k; // @synthesize k=_k;
@property(readonly, nonatomic) unsigned long long m; // @synthesize m=_m;
@property(readonly, nonatomic) double epsilon; // @synthesize epsilon=_epsilon;
- (id)randomizeBitValues:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)description;
- (id)hcmsSampleForFragment:(id)arg1;
- (id)hcmsSampleForString:(id)arg1;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6;
- (id)init;

@end

