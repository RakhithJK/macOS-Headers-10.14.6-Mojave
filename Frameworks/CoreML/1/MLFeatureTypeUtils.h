//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLFeatureTypeUtils : NSObject
{
}

+ (BOOL)canShapeArrayBePromotedFrom:(id)arg1 to:(id)arg2;
+ (id)descriptionForType:(long long)arg1;
+ (id)featureValuesWithConsistentTypeFromArray:(id)arg1 error:(id *)arg2;
+ (id)featureDescriptionWithName:(id)arg1 consistentWithFeatureValues:(id)arg2 error:(id *)arg3;
+ (long long)featureTypeForValuesInArray:(id)arg1 error:(id *)arg2;
+ (long long)featureTypeForObject:(id)arg1;

@end

