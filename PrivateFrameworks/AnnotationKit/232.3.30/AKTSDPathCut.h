//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKTSDPathCut : NSObject
{
    long long mSegment;
    double mT;
    double mSkew;
}

@property(readonly, nonatomic) double skew; // @synthesize skew=mSkew;
@property(readonly, nonatomic) double t; // @synthesize t=mT;
@property(readonly, nonatomic) long long segment; // @synthesize segment=mSegment;
- (id)description;
- (id)initWithSegment:(long long)arg1 atT:(double)arg2 withSkew:(double)arg3;

@end

