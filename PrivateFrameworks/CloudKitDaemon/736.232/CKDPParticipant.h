//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPContactInformation, CKDPIdentifier, CKDPProtectionInfo, NSData;

@interface CKDPParticipant : PBCodable <NSCopying>
{
    long long _acceptTimestamp;
    CKDPContactInformation *_contactInformation;
    CKDPIdentifier *_inviterId;
    int _outOfNetworkKeyType;
    NSData *_outOfNetworkPrivateKey;
    CKDPIdentifier *_participantId;
    int _participantType;
    int _permission;
    CKDPProtectionInfo *_protectionInfo;
    CKDPProtectionInfo *_publicKey;
    int _publicKeyVersion;
    int _state;
    CKDPIdentifier *_userId;
    BOOL _acceptedInProcess;
    BOOL _createdInProcess;
    BOOL _isInNetwork;
    BOOL _isOrgUser;
    struct {
        unsigned int acceptTimestamp:1;
        unsigned int outOfNetworkKeyType:1;
        unsigned int participantType:1;
        unsigned int permission:1;
        unsigned int publicKeyVersion:1;
        unsigned int state:1;
        unsigned int acceptedInProcess:1;
        unsigned int createdInProcess:1;
        unsigned int isInNetwork:1;
        unsigned int isOrgUser:1;
    } _has;
}

@property(nonatomic) BOOL isOrgUser; // @synthesize isOrgUser=_isOrgUser;
@property(nonatomic) BOOL isInNetwork; // @synthesize isInNetwork=_isInNetwork;
@property(nonatomic) BOOL acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(nonatomic) int outOfNetworkKeyType; // @synthesize outOfNetworkKeyType=_outOfNetworkKeyType;
@property(retain, nonatomic) NSData *outOfNetworkPrivateKey; // @synthesize outOfNetworkPrivateKey=_outOfNetworkPrivateKey;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(nonatomic) long long acceptTimestamp; // @synthesize acceptTimestamp=_acceptTimestamp;
@property(retain, nonatomic) CKDPProtectionInfo *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) BOOL createdInProcess; // @synthesize createdInProcess=_createdInProcess;
@property(retain, nonatomic) CKDPIdentifier *inviterId; // @synthesize inviterId=_inviterId;
@property(retain, nonatomic) CKDPContactInformation *contactInformation; // @synthesize contactInformation=_contactInformation;
@property(retain, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) CKDPIdentifier *participantId; // @synthesize participantId=_participantId;
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
@property(nonatomic) BOOL hasIsOrgUser;
@property(nonatomic) BOOL hasIsInNetwork;
@property(nonatomic) BOOL hasAcceptedInProcess;
@property(nonatomic) BOOL hasPublicKeyVersion;
@property(nonatomic) int publicKeyVersion; // @synthesize publicKeyVersion=_publicKeyVersion;
@property(nonatomic) BOOL hasOutOfNetworkKeyType;
@property(readonly, nonatomic) BOOL hasOutOfNetworkPrivateKey;
@property(readonly, nonatomic) BOOL hasProtectionInfo;
@property(nonatomic) BOOL hasAcceptTimestamp;
@property(readonly, nonatomic) BOOL hasPublicKey;
@property(nonatomic) BOOL hasCreatedInProcess;
@property(readonly, nonatomic) BOOL hasInviterId;
- (int)StringAsPermission:(id)arg1;
- (id)permissionAsString:(int)arg1;
@property(nonatomic) BOOL hasPermission;
@property(nonatomic) int permission; // @synthesize permission=_permission;
- (int)StringAsParticipantType:(id)arg1;
- (id)participantTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
- (int)StringAsState:(id)arg1;
- (id)stateAsString:(int)arg1;
@property(nonatomic) BOOL hasState;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) BOOL hasContactInformation;
@property(readonly, nonatomic) BOOL hasUserId;
@property(readonly, nonatomic) BOOL hasParticipantId;
- (id)_permissionCKLogValue;
- (id)_participantTypeCKLogValue;
- (id)_stateCKLogValue;

@end

