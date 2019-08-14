//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBEndpointConfig : PBCodable <NSCopying>
{
    NSString *_analyticsEndpointUrlsJson;
    NSString *_analyticsEnvelopeContentTypePropJson;
    NSString *_clientApiBaseUrl;
    int _environment;
    NSString *_eventRelayBaseUrl;
    NSString *_eventRelayBatchBaseUrl;
    NSString *_newsNotificationsBaseUrl;
    NSString *_remoteDataSourceBaseUrl;
    NSString *_staticAssetBaseUrl;
}

@property(retain, nonatomic) NSString *remoteDataSourceBaseUrl; // @synthesize remoteDataSourceBaseUrl=_remoteDataSourceBaseUrl;
@property(retain, nonatomic) NSString *staticAssetBaseUrl; // @synthesize staticAssetBaseUrl=_staticAssetBaseUrl;
@property(retain, nonatomic) NSString *analyticsEnvelopeContentTypePropJson; // @synthesize analyticsEnvelopeContentTypePropJson=_analyticsEnvelopeContentTypePropJson;
@property(retain, nonatomic) NSString *analyticsEndpointUrlsJson; // @synthesize analyticsEndpointUrlsJson=_analyticsEndpointUrlsJson;
@property(retain, nonatomic) NSString *newsNotificationsBaseUrl; // @synthesize newsNotificationsBaseUrl=_newsNotificationsBaseUrl;
@property(retain, nonatomic) NSString *eventRelayBatchBaseUrl; // @synthesize eventRelayBatchBaseUrl=_eventRelayBatchBaseUrl;
@property(retain, nonatomic) NSString *eventRelayBaseUrl; // @synthesize eventRelayBaseUrl=_eventRelayBaseUrl;
@property(retain, nonatomic) NSString *clientApiBaseUrl; // @synthesize clientApiBaseUrl=_clientApiBaseUrl;
@property(nonatomic) int environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRemoteDataSourceBaseUrl;
@property(readonly, nonatomic) BOOL hasStaticAssetBaseUrl;
@property(readonly, nonatomic) BOOL hasAnalyticsEnvelopeContentTypePropJson;
@property(readonly, nonatomic) BOOL hasAnalyticsEndpointUrlsJson;
@property(readonly, nonatomic) BOOL hasNewsNotificationsBaseUrl;
@property(readonly, nonatomic) BOOL hasEventRelayBatchBaseUrl;
@property(readonly, nonatomic) BOOL hasEventRelayBaseUrl;
@property(readonly, nonatomic) BOOL hasClientApiBaseUrl;

@end

