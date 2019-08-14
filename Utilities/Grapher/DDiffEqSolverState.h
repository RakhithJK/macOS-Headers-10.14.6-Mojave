//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface DDiffEqSolverState : NSObject <NSCoding>
{
    unsigned long long mDim;
    struct _NComplex *mState;
    double mT;
}

+ (id)diffEqSolverStateFromSolver:(id)arg1;
- (double)t;
- (struct _NComplex)stateAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSolver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

