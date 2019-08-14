//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@class NSString;

@interface PPPBDateComponents : PBCodable <NSCopying>
{
    NSString *_calendarIdentifier;
    int _day;
    int _month;
    NSString *_timeZoneName;
    int _year;
    struct {
        unsigned int day:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
}

@property(retain, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(retain, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(nonatomic) int year; // @synthesize year=_year;
@property(nonatomic) int month; // @synthesize month=_month;
@property(nonatomic) int day; // @synthesize day=_day;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimeZoneName;
@property(readonly, nonatomic) BOOL hasCalendarIdentifier;
@property(nonatomic) BOOL hasYear;
@property(nonatomic) BOOL hasMonth;
@property(nonatomic) BOOL hasDay;

@end

