//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NVariableValue-Protocol.h"

@class GAxis, OPResult;

@interface GVectorFieldResult : NSObject <NVariableValue>
{
    GAxis *mAxis;
    OPResult *mResult;
    unsigned long long mCoord;
}

+ (id)vectorFieldResultWithAxis:(id)arg1 result:(id)arg2 coord:(unsigned long long)arg3;
- (id)name;
- (void)setCurrentValue:(double)arg1;
- (double)currentValue;
- (double)maxValue;
- (double)minValue;
- (void)dealloc;
- (id)initWithAxis:(id)arg1 result:(id)arg2 coord:(unsigned long long)arg3;

@end

