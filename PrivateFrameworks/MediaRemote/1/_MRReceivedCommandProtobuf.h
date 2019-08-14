//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRCommandOptionsProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRReceivedCommandAppOptionsProtobuf;

@interface _MRReceivedCommandProtobuf : PBCodable <NSCopying>
{
    long long _destinationAppProcessID;
    _MRReceivedCommandAppOptionsProtobuf *_appOptions;
    int _command;
    NSString *_destinationAppDisplayID;
    _MRCommandOptionsProtobuf *_options;
    int _originUID;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_remoteControlInterfaceID;
    NSString *_senderAppDisplayID;
    struct {
        unsigned int destinationAppProcessID:1;
        unsigned int command:1;
        unsigned int originUID:1;
    } _has;
}

@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) _MRReceivedCommandAppOptionsProtobuf *appOptions; // @synthesize appOptions=_appOptions;
@property(retain, nonatomic) NSString *remoteControlInterfaceID; // @synthesize remoteControlInterfaceID=_remoteControlInterfaceID;
@property(nonatomic) long long destinationAppProcessID; // @synthesize destinationAppProcessID=_destinationAppProcessID;
@property(retain, nonatomic) NSString *destinationAppDisplayID; // @synthesize destinationAppDisplayID=_destinationAppDisplayID;
@property(retain, nonatomic) NSString *senderAppDisplayID; // @synthesize senderAppDisplayID=_senderAppDisplayID;
@property(nonatomic) int originUID; // @synthesize originUID=_originUID;
@property(retain, nonatomic) _MRCommandOptionsProtobuf *options; // @synthesize options=_options;
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
@property(readonly, nonatomic) BOOL hasPlayerPath;
@property(readonly, nonatomic) BOOL hasAppOptions;
@property(readonly, nonatomic) BOOL hasRemoteControlInterfaceID;
@property(nonatomic) BOOL hasDestinationAppProcessID;
@property(readonly, nonatomic) BOOL hasDestinationAppDisplayID;
@property(readonly, nonatomic) BOOL hasSenderAppDisplayID;
@property(nonatomic) BOOL hasOriginUID;
@property(readonly, nonatomic) BOOL hasOptions;
- (int)StringAsCommand:(id)arg1;
- (id)commandAsString:(int)arg1;
@property(nonatomic) BOOL hasCommand;
@property(nonatomic) int command; // @synthesize command=_command;

@end

