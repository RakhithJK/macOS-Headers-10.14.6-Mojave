//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCNetworkEventStats : NSObject
{
    unsigned long long _count;
    unsigned long long _mean;
    unsigned long long _median;
    unsigned long long _percentile95;
    unsigned long long _min;
    unsigned long long _max;
}

@property(nonatomic) unsigned long long max; // @synthesize max=_max;
@property(nonatomic) unsigned long long min; // @synthesize min=_min;
@property(nonatomic) unsigned long long percentile95; // @synthesize percentile95=_percentile95;
@property(nonatomic) unsigned long long median; // @synthesize median=_median;
@property(nonatomic) unsigned long long mean; // @synthesize mean=_mean;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)initWithValues:(id)arg1;

@end

