//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _connectEnd;
    double _connectStart;
    double _domainLookupEnd;
    double _domainLookupStart;
    double _fetchStart;
    double _requestEnd;
    double _requestStart;
    double _responseEnd;
    double _responseStart;
    double _secureConnectEnd;
    double _secureConnectStart;
    int _protocolName;
    int _resourceFetchType;
    BOOL _proxyConnection;
    BOOL _reusedConnection;
    CDStruct_63f2c340 _has;
}

@property(nonatomic) BOOL reusedConnection; // @synthesize reusedConnection=_reusedConnection;
@property(nonatomic) BOOL proxyConnection; // @synthesize proxyConnection=_proxyConnection;
@property(nonatomic) double responseEnd; // @synthesize responseEnd=_responseEnd;
@property(nonatomic) double responseStart; // @synthesize responseStart=_responseStart;
@property(nonatomic) double requestEnd; // @synthesize requestEnd=_requestEnd;
@property(nonatomic) double requestStart; // @synthesize requestStart=_requestStart;
@property(nonatomic) double connectEnd; // @synthesize connectEnd=_connectEnd;
@property(nonatomic) double secureConnectEnd; // @synthesize secureConnectEnd=_secureConnectEnd;
@property(nonatomic) double secureConnectStart; // @synthesize secureConnectStart=_secureConnectStart;
@property(nonatomic) double connectStart; // @synthesize connectStart=_connectStart;
@property(nonatomic) double domainLookupEnd; // @synthesize domainLookupEnd=_domainLookupEnd;
@property(nonatomic) double domainLookupStart; // @synthesize domainLookupStart=_domainLookupStart;
@property(nonatomic) double fetchStart; // @synthesize fetchStart=_fetchStart;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsResourceFetchType:(id)arg1;
- (id)resourceFetchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasResourceFetchType;
@property(nonatomic) int resourceFetchType; // @synthesize resourceFetchType=_resourceFetchType;
@property(nonatomic) BOOL hasReusedConnection;
@property(nonatomic) BOOL hasProxyConnection;
- (int)StringAsProtocolName:(id)arg1;
- (id)protocolNameAsString:(int)arg1;
@property(nonatomic) BOOL hasProtocolName;
@property(nonatomic) int protocolName; // @synthesize protocolName=_protocolName;
@property(nonatomic) BOOL hasResponseEnd;
@property(nonatomic) BOOL hasResponseStart;
@property(nonatomic) BOOL hasRequestEnd;
@property(nonatomic) BOOL hasRequestStart;
@property(nonatomic) BOOL hasConnectEnd;
@property(nonatomic) BOOL hasSecureConnectEnd;
@property(nonatomic) BOOL hasSecureConnectStart;
@property(nonatomic) BOOL hasConnectStart;
@property(nonatomic) BOOL hasDomainLookupEnd;
@property(nonatomic) BOOL hasDomainLookupStart;
@property(nonatomic) BOOL hasFetchStart;

@end
