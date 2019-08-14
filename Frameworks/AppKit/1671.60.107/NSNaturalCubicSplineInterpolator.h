//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSNaturalCubicSplineInterpolator : NSObject
{
    CDStruct_6b6ad735 *_knots;
    long long _length;
    double *_Hi;
    double *_Bi;
    double *_Ci;
    double *_Di;
    double *_Zi;
}

- (double)valueAt:(double)arg1;
- (double)_intervalAt:(double)arg1;
- (double)_intervalLength:(long long)arg1;
- (void)_calculateZiVector;
- (void)dealloc;
- (id)initWithKnots:(CDStruct_6b6ad735 *)arg1 length:(long long)arg2;

@end

