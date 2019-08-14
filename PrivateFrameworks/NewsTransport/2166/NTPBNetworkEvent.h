//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying>
{
    unsigned long long _cacheState;
    unsigned long long _connectDuration;
    unsigned long long _dnsDuration;
    unsigned long long _errorCode;
    unsigned long long _httpStatusCode;
    unsigned long long _requestDuration;
    unsigned long long _responseDuration;
    unsigned long long _responseSize;
    unsigned long long _sessionID;
    unsigned long long _startTime;
    unsigned long long _type;
    NSString *_requestUUID;
    NSString *_respondingPOP;
    NSString *_url;
    struct {
        unsigned int cacheState:1;
        unsigned int connectDuration:1;
        unsigned int dnsDuration:1;
        unsigned int errorCode:1;
        unsigned int httpStatusCode:1;
        unsigned int requestDuration:1;
        unsigned int responseDuration:1;
        unsigned int responseSize:1;
        unsigned int sessionID:1;
        unsigned int startTime:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *respondingPOP; // @synthesize respondingPOP=_respondingPOP;
@property(retain, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(nonatomic) unsigned long long cacheState; // @synthesize cacheState=_cacheState;
@property(nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(nonatomic) unsigned long long responseDuration; // @synthesize responseDuration=_responseDuration;
@property(nonatomic) unsigned long long requestDuration; // @synthesize requestDuration=_requestDuration;
@property(nonatomic) unsigned long long connectDuration; // @synthesize connectDuration=_connectDuration;
@property(nonatomic) unsigned long long dnsDuration; // @synthesize dnsDuration=_dnsDuration;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSessionID;
@property(readonly, nonatomic) BOOL hasRespondingPOP;
@property(readonly, nonatomic) BOOL hasRequestUUID;
@property(readonly, nonatomic) BOOL hasUrl;
@property(nonatomic) BOOL hasType;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasHttpStatusCode;
@property(nonatomic) BOOL hasCacheState;
@property(nonatomic) BOOL hasResponseSize;
@property(nonatomic) BOOL hasResponseDuration;
@property(nonatomic) BOOL hasRequestDuration;
@property(nonatomic) BOOL hasConnectDuration;
@property(nonatomic) BOOL hasDnsDuration;
@property(nonatomic) BOOL hasStartTime;
- (void)dealloc;

@end

