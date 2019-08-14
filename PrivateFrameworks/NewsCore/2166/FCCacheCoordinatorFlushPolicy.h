//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCCacheCoordinatorFlushPolicy : NSObject
{
    BOOL _alwaysFlushKeysWithZeroInterest;
    unsigned long long _highWaterMark;
    unsigned long long _lowWaterMark;
}

@property(nonatomic) unsigned long long lowWaterMark; // @synthesize lowWaterMark=_lowWaterMark;
@property(nonatomic) unsigned long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property(nonatomic) BOOL alwaysFlushKeysWithZeroInterest; // @synthesize alwaysFlushKeysWithZeroInterest=_alwaysFlushKeysWithZeroInterest;
- (BOOL)canPreemptiveFlushWithDataSize:(unsigned long long)arg1;
- (BOOL)canFlushWithDataSize:(unsigned long long)arg1;

@end

