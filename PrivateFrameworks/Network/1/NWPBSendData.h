//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NWPBSendData : PBCodable <NSCopying>
{
    NSString *_clientUUID;
    NSData *_messageData;
    unsigned int _receiveWindow;
    struct {
        unsigned int receiveWindow:1;
    } _has;
}

@property(nonatomic) unsigned int receiveWindow; // @synthesize receiveWindow=_receiveWindow;
@property(retain, nonatomic) NSData *messageData; // @synthesize messageData=_messageData;
@property(retain, nonatomic) NSString *clientUUID; // @synthesize clientUUID=_clientUUID;
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
@property(nonatomic) BOOL hasReceiveWindow;
@property(readonly, nonatomic) BOOL hasMessageData;
@property(readonly, nonatomic) BOOL hasClientUUID;

@end
