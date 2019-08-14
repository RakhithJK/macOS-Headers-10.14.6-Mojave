//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OPOperation.h"

@interface OPAddition : OPOperation
{
    BOOL mSubtraction;
}

+ (id)sumOf:(id)arg1 with:(id)arg2;
- (id)partialDerivative:(unsigned long long)arg1;
- (id)simplified;
- (struct _NComplex)computeComplexWith:(struct _NComplex)arg1 and:(struct _NComplex)arg2;
- (double)computeRealWith:(double)arg1 and:(double)arg2;
- (id)initWithFirstTerm:(id)arg1 secondTerm:(id)arg2 subtraction:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

