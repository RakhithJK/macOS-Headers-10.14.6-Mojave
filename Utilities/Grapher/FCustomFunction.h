//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FVariable.h"

@class NSArray, OPOperation;

@interface FCustomFunction : FVariable
{
    OPOperation *mIndex;
    NSArray *mParams;
}

+ (id)functionWithName:(id)arg1 operation:(id)arg2 index:(id)arg3 params:(id)arg4;
+ (id)functionWithName:(id)arg1 value:(double)arg2;
- (void)finishCreatingOperation:(id)arg1;
- (id)createOperation;
- (void)dealloc;
- (id)initWithName:(id)arg1 operation:(id)arg2 index:(id)arg3 params:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

