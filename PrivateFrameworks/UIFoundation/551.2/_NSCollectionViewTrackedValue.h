//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _NSCollectionViewTrackedValue : NSObject
{
    double _trackedValue;
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
    BOOL _isAccumulating;
}

@property(nonatomic) double trackedValue; // @synthesize trackedValue=_trackedValue;
@property(nonatomic) BOOL isAccumulating; // @synthesize isAccumulating=_isAccumulating;
- (void).cxx_destruct;
- (double)speed;
- (void)addValue:(double)arg1;
- (id)init;

@end

