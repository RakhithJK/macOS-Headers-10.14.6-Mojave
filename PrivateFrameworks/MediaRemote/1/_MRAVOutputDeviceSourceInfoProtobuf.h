//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying>
{
    NSString *_routingContextUID;
    BOOL _multipleBuiltInDevices;
    struct {
        unsigned int multipleBuiltInDevices:1;
    } _has;
}

@property(nonatomic) BOOL multipleBuiltInDevices; // @synthesize multipleBuiltInDevices=_multipleBuiltInDevices;
@property(retain, nonatomic) NSString *routingContextUID; // @synthesize routingContextUID=_routingContextUID;
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
@property(nonatomic) BOOL hasMultipleBuiltInDevices;
@property(readonly, nonatomic) BOOL hasRoutingContextUID;

@end

