//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPOperation, FCCKPQueryRetrieveRequest, FCCKPRecordRetrieveRequest, FCCKPRequestOperationHeader;

@interface FCCKPRequestOperation : PBCodable <NSCopying>
{
    FCCKPRequestOperationHeader *_header;
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;
    FCCKPOperation *_request;
}

@property(retain, nonatomic) FCCKPOperation *request; // @synthesize request=_request;
@property(retain, nonatomic) FCCKPRequestOperationHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRequest;
@property(readonly, nonatomic) BOOL hasHeader;
- (void)dealloc;
@property(retain, nonatomic) FCCKPRecordRetrieveRequest *recordRetrieveRequest;
@property(readonly, nonatomic) BOOL hasRecordRetrieveRequest;
@property(retain, nonatomic) FCCKPQueryRetrieveRequest *queryRetrieveRequest;
@property(readonly, nonatomic) BOOL hasQueryRetrieveRequest;

@end

