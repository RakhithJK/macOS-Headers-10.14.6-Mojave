//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVGeometryUtils : NSObject
{
}

+ (struct CGPoint)pointFromNormalizedPoint:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;
+ (struct CGRect)rectFromMappingNormalizedRect:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
+ (struct CGRect)rectFromMappingNormalizedRect:(struct CGRect)arg1 toBoundsOfSize:(struct CGSize)arg2;
+ (struct CGRect)normalizedRectForRect:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
+ (struct CGRect)normalizedRectForRect:(struct CGRect)arg1 inBoundsOfSize:(struct CGSize)arg2;

@end
