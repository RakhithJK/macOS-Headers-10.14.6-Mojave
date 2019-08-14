//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWAWDMPTCPConnectionInterfaceReport : PBCodable <NSCopying>
{
    CDStruct_95bda58d _postConnectSubflowFailureErrors;
    long long _dataInKB;
    long long _dataOutKB;
    unsigned long long _timestamp;
    NSString *_interfaceName;
    int _secondaryFlowFailureCount;
    int _secondaryFlowSuccessCount;
    BOOL _postConnectTcpFallbackCount;
    struct {
        unsigned int dataInKB:1;
        unsigned int dataOutKB:1;
        unsigned int timestamp:1;
        unsigned int secondaryFlowFailureCount:1;
        unsigned int secondaryFlowSuccessCount:1;
        unsigned int postConnectTcpFallbackCount:1;
    } _has;
}

@property(nonatomic) BOOL postConnectTcpFallbackCount; // @synthesize postConnectTcpFallbackCount=_postConnectTcpFallbackCount;
@property(nonatomic) int secondaryFlowFailureCount; // @synthesize secondaryFlowFailureCount=_secondaryFlowFailureCount;
@property(nonatomic) int secondaryFlowSuccessCount; // @synthesize secondaryFlowSuccessCount=_secondaryFlowSuccessCount;
@property(nonatomic) long long dataOutKB; // @synthesize dataOutKB=_dataOutKB;
@property(nonatomic) long long dataInKB; // @synthesize dataInKB=_dataInKB;
@property(retain, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasPostConnectTcpFallbackCount;
@property(nonatomic) BOOL hasSecondaryFlowFailureCount;
@property(nonatomic) BOOL hasSecondaryFlowSuccessCount;
@property(nonatomic) BOOL hasDataOutKB;
@property(nonatomic) BOOL hasDataInKB;
- (void)setPostConnectSubflowFailureErrors:(int *)arg1 count:(unsigned long long)arg2;
- (int)postConnectSubflowFailureErrorsAtIndex:(unsigned long long)arg1;
- (void)addPostConnectSubflowFailureErrors:(int)arg1;
- (void)clearPostConnectSubflowFailureErrors;
@property(readonly, nonatomic) int *postConnectSubflowFailureErrors;
@property(readonly, nonatomic) unsigned long long postConnectSubflowFailureErrorsCount;
@property(readonly, nonatomic) BOOL hasInterfaceName;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end
