//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTodayConfig : PBCodable <NSCopying>
{
    unsigned long long _backgroundForYouMinimumUpdateInterval;
    unsigned long long _backgroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long _foregroundForYouMinimumUpdateInterval;
    unsigned long long _foregroundTrendingByParsecMinimumUpdateInterval;
    unsigned long long _widgetSlotsLimit;
    NSMutableArray *_todayQueueConfigs;
    struct {
        unsigned int backgroundForYouMinimumUpdateInterval:1;
        unsigned int backgroundTrendingByParsecMinimumUpdateInterval:1;
        unsigned int foregroundForYouMinimumUpdateInterval:1;
        unsigned int foregroundTrendingByParsecMinimumUpdateInterval:1;
        unsigned int widgetSlotsLimit:1;
    } _has;
}

+ (Class)todayQueueConfigsType;
@property(nonatomic) unsigned long long backgroundTrendingByParsecMinimumUpdateInterval; // @synthesize backgroundTrendingByParsecMinimumUpdateInterval=_backgroundTrendingByParsecMinimumUpdateInterval;
@property(nonatomic) unsigned long long foregroundTrendingByParsecMinimumUpdateInterval; // @synthesize foregroundTrendingByParsecMinimumUpdateInterval=_foregroundTrendingByParsecMinimumUpdateInterval;
@property(nonatomic) unsigned long long backgroundForYouMinimumUpdateInterval; // @synthesize backgroundForYouMinimumUpdateInterval=_backgroundForYouMinimumUpdateInterval;
@property(nonatomic) unsigned long long foregroundForYouMinimumUpdateInterval; // @synthesize foregroundForYouMinimumUpdateInterval=_foregroundForYouMinimumUpdateInterval;
@property(nonatomic) unsigned long long widgetSlotsLimit; // @synthesize widgetSlotsLimit=_widgetSlotsLimit;
@property(retain, nonatomic) NSMutableArray *todayQueueConfigs; // @synthesize todayQueueConfigs=_todayQueueConfigs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBackgroundTrendingByParsecMinimumUpdateInterval;
@property(nonatomic) BOOL hasForegroundTrendingByParsecMinimumUpdateInterval;
@property(nonatomic) BOOL hasBackgroundForYouMinimumUpdateInterval;
@property(nonatomic) BOOL hasForegroundForYouMinimumUpdateInterval;
@property(nonatomic) BOOL hasWidgetSlotsLimit;
- (id)todayQueueConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todayQueueConfigsCount;
- (void)addTodayQueueConfigs:(id)arg1;
- (void)clearTodayQueueConfigs;
- (void)dealloc;

@end

