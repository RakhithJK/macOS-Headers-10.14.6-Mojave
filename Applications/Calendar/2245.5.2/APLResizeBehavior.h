//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APLResizeBehavior : NSObject
{
    BOOL _canGrow;
    double _minWeight;
    double _optimalWeight;
    double _maxWeight;
}

+ (id)defaultResizeBehavior;
- (void)setMaxWeight:(double)arg1;
- (double)maxWeight;
- (void)setOptimalWeight:(double)arg1;
- (double)optimalWeight;
- (void)setMinWeight:(double)arg1;
- (double)minWeight;
- (void)setCanGrow:(BOOL)arg1;
- (BOOL)canGrow;
- (void)mergeWithResizeBehavior:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithString:(id)arg1;
- (id)init;

@end
