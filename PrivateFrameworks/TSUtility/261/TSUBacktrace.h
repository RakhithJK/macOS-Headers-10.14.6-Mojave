//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSUBacktrace : NSObject
{
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)callee;
+ (id)caller;
+ (id)new;
+ (id)backtrace;
- (BOOL)isEqual:(id)arg1;
- (id)callee;
- (id)caller;
- (id)callerAtIndex:(long long)arg1;
- (id)backtraceString;
- (void)dealloc;
- (id)init;
- (id)initWithAdjustment:(int)arg1;

@end

