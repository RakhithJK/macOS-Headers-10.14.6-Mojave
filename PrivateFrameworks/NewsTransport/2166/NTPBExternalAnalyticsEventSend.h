//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBExternalAnalyticsEventSend : PBCodable <NSCopying>
{
    NSString *_contentViewedId;
    NSString *_eventUdid;
    int _externalAnalyticsEventType;
    NSString *_externalAnalyticsId;
    NSString *_failureReasonCode;
    int _resultType;
    NSString *_sourceChannelId;
    struct {
        unsigned int externalAnalyticsEventType:1;
        unsigned int resultType:1;
    } _has;
}

@property(retain, nonatomic) NSString *externalAnalyticsId; // @synthesize externalAnalyticsId=_externalAnalyticsId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *contentViewedId; // @synthesize contentViewedId=_contentViewedId;
@property(retain, nonatomic) NSString *failureReasonCode; // @synthesize failureReasonCode=_failureReasonCode;
@property(retain, nonatomic) NSString *eventUdid; // @synthesize eventUdid=_eventUdid;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasExternalAnalyticsId;
@property(readonly, nonatomic) BOOL hasSourceChannelId;
@property(readonly, nonatomic) BOOL hasContentViewedId;
@property(readonly, nonatomic) BOOL hasFailureReasonCode;
@property(readonly, nonatomic) BOOL hasEventUdid;
@property(nonatomic) BOOL hasResultType;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
@property(nonatomic) BOOL hasExternalAnalyticsEventType;
@property(nonatomic) int externalAnalyticsEventType; // @synthesize externalAnalyticsEventType=_externalAnalyticsEventType;

@end
