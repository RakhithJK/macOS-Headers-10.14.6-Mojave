//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRExternalDeviceMessageMetricsEntry : NSObject
{
    unsigned long long _avg;
    unsigned long long _min;
    unsigned long long _max;
    unsigned long long _total;
    NSMutableArray *_values;
}

@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(nonatomic) unsigned long long max; // @synthesize max=_max;
@property(nonatomic) unsigned long long min; // @synthesize min=_min;
@property(nonatomic) unsigned long long avg; // @synthesize avg=_avg;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithValue:(unsigned long long)arg1;
- (id)init;

@end

