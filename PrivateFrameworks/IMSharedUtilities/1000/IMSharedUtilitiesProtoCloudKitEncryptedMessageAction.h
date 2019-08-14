//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <IMSharedUtilities/NSCopying-Protocol.h>

@class NSData, NSString;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessageAction : PBCodable <NSCopying>
{
    long long _messageActionType;
    NSString *_originalMessageGuid;
    NSString *_otherHandle;
    NSData *_padding;
    unsigned int _version;
    struct {
        unsigned int messageActionType:1;
        unsigned int version:1;
    } _has;
}

@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSString *originalMessageGuid; // @synthesize originalMessageGuid=_originalMessageGuid;
@property(retain, nonatomic) NSString *otherHandle; // @synthesize otherHandle=_otherHandle;
@property(nonatomic) long long messageActionType; // @synthesize messageActionType=_messageActionType;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPadding;
@property(readonly, nonatomic) BOOL hasOriginalMessageGuid;
@property(readonly, nonatomic) BOOL hasOtherHandle;
@property(nonatomic) BOOL hasMessageActionType;
@property(nonatomic) BOOL hasVersion;
- (void)dealloc;

@end

