//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSCyclerRandomnessUtilities : NSObject
{
}

+ (id)_randomStringWithCharactersFromString:(id)arg1;
+ (id)randomElementOfArray:(id)arg1 relativeProbabilities:(id)arg2;
+ (id)randomElementOfArray:(id)arg1;
+ (id)randomURL;
+ (id)randomString;
+ (unsigned long long)randomIntegerWithUpperBound:(unsigned long long)arg1;
+ (void)reseed;
+ (void)setSeed:(unsigned long long)arg1;
+ (unsigned long long)seed;
+ (void)initialize;

@end

