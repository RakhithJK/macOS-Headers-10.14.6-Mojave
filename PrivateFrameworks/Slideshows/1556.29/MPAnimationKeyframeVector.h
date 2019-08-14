//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MPAnimationKeyframe.h>

@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe
{
    MPVector *_vector;
}

+ (id)keyframeVectorWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
+ (id)keyframeVectorWithVector:(id)arg1 atTime:(double)arg2;
@property(copy, nonatomic) MPVector *vector; // @synthesize vector=_vector;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initKeyframeVectorWithVector:(id)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3;
- (id)keyframe;

@end

