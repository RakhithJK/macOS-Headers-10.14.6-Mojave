//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AssetCacheMetricsReader, NSDate, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SMCacheMetricsReader : NSObject
{
    unsigned char _verbose;
    double _interval;
    CDUnknownBlockType _refreshBlock;
    NSMutableArray *_summarizedCacheMetrics;
    NSDate *_lastReadDate;
    NSMutableArray *_metricsMonth;
    NSMutableArray *_metricsWeek;
    NSMutableArray *_metricsDay;
    NSMutableArray *_metricsHour;
    AssetCacheMetricsReader *_reader;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_intervalTimer;
    unsigned long long _totalBytesServed;
    unsigned long long _totalBytesServedFromCache;
}

@property unsigned long long totalBytesServedFromCache; // @synthesize totalBytesServedFromCache=_totalBytesServedFromCache;
@property unsigned long long totalBytesServed; // @synthesize totalBytesServed=_totalBytesServed;
@property unsigned char verbose; // @synthesize verbose=_verbose;
@property(retain) NSObject<OS_dispatch_source> *intervalTimer; // @synthesize intervalTimer=_intervalTimer;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) AssetCacheMetricsReader *reader; // @synthesize reader=_reader;
@property(retain) NSMutableArray *metricsHour; // @synthesize metricsHour=_metricsHour;
@property(retain) NSMutableArray *metricsDay; // @synthesize metricsDay=_metricsDay;
@property(retain) NSMutableArray *metricsWeek; // @synthesize metricsWeek=_metricsWeek;
@property(retain) NSMutableArray *metricsMonth; // @synthesize metricsMonth=_metricsMonth;
@property(retain) NSDate *lastReadDate; // @synthesize lastReadDate=_lastReadDate;
@property(retain) NSMutableArray *summarizedCacheMetrics; // @synthesize summarizedCacheMetrics=_summarizedCacheMetrics;
@property(copy) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (BOOL)_pruneOldMetricsFromArray:(id)arg1 scope:(double)arg2;
- (BOOL)_pruneOldMetrics;
- (unsigned long long)_readNewMetrics;
- (void)updateTimerInterval:(double)arg1;
- (void)stop;
- (void)start;
- (id)init;

@end

