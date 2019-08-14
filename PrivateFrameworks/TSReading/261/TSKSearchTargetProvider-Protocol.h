//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSString;

@protocol TSKSearchTargetProvider <NSObject>
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(NSString *)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4;
- (void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(void (^)(id <TSKSearchTarget>))arg2;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1;
@end

