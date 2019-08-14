//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/NSCopying-Protocol.h>
#import <ProactiveML/NSMutableCopying-Protocol.h>

@class NSData, NSMutableData;

@interface PMLDenseVector : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableData *_data;
}

+ (id)denseVectorFromNumbers:(id)arg1;
- (void).cxx_destruct;
- (float)valueAt:(unsigned long long)arg1;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateValuesWithBlock:(CDUnknownBlockType)arg1;
- (float)density;
- (float)maxValue;
- (float)minValue;
- (float)l2norm;
- (float)l1norm;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)vecByAppendingVec:(id)arg1;
- (id)sliceFrom:(int)arg1 to:(int)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithFloatsNoCopy:(float *)arg1 count:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;
- (id)initWithFloatsNoCopy:(float *)arg1 count:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithFloats:(const float *)arg1 count:(unsigned long long)arg2;
- (id)initWithCount:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) const float *ptr;

@end

