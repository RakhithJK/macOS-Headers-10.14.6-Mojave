//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate;

__attribute__((visibility("hidden")))
@interface _GEOMapItemHandleCacheData : NSObject
{
    NSDate *_timestamp;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cost;
- (id)initWithTimestamp:(id)arg1 data:(id)arg2;

@end

