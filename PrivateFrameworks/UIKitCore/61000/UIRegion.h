//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class PKRegion, UIBezierPath;

@interface UIRegion : NSObject <NSCopying, NSCoding>
{
    PKRegion *_region;
}

+ (id)infiniteRegion;
- (void).cxx_destruct;
- (void)containsPoints:(const float *)arg1 locationStride:(long long)arg2 results:(char *)arg3 resultsStride:(long long)arg4 count:(int)arg5;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithPath:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithRadius:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) UIBezierPath *path;
@property(readonly, nonatomic) PKRegion *_region;

@end

