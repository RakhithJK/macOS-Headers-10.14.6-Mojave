//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying>
{
    unsigned long long _widgetVisibleSectionsLimit;
    NSMutableArray *_todaySectionConfigs;
    struct {
        unsigned int widgetVisibleSectionsLimit:1;
    } _has;
}

+ (Class)todaySectionConfigsType;
@property(nonatomic) unsigned long long widgetVisibleSectionsLimit; // @synthesize widgetVisibleSectionsLimit=_widgetVisibleSectionsLimit;
@property(retain, nonatomic) NSMutableArray *todaySectionConfigs; // @synthesize todaySectionConfigs=_todaySectionConfigs;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasWidgetVisibleSectionsLimit;
- (id)todaySectionConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todaySectionConfigsCount;
- (void)addTodaySectionConfigs:(id)arg1;
- (void)clearTodaySectionConfigs;
- (void)dealloc;

@end

