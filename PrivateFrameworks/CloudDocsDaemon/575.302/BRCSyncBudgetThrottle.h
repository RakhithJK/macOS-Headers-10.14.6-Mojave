//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding>
{
    double _t0;
    float _values[8];
}

+ (BOOL)supportsSecureCoding;
- (id)debugDescriptionWithDefaults:(id)arg1;
- (id)description;
- (float)availableBudgetWithDefaults:(id)arg1;
- (double)nextDateWithBudgetWithDefaults:(id)arg1;
- (double)_timeToLoseAmount:(float)arg1 count:(int)arg2;
- (void)consume:(float)arg1;
- (void)updateForTime:(double)arg1;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) float lastDay;
@property(readonly, nonatomic) float lastHour;
@property(readonly, nonatomic) float lastMinute;

@end

