//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Rapport/RPEndpoint.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface RPCompanionLinkDevice : RPEndpoint <NSSecureCoding>
{
    BOOL _personal;
    BOOL _changed;
    BOOL _daemon;
    BOOL _uiTriggered;
    unsigned int _flags;
    int _mediaSystemRole;
    int _mediaSystemState;
    int _personalDeviceState;
    int _personalRequestsState;
    int _mediaSystemRoleEffective;
    int _serversChangedState;
    NSString *_deviceColor;
    NSUUID *_homeKitIdentifier;
    NSString *_idsPersonalDeviceIdentifier;
    NSUUID *_mediaSystemIdentifier;
    NSString *_mediaSystemName;
    NSString *_publicIdentifier;
    NSString *_roomName;
    NSDictionary *_siriInfo;
    NSString *_role;
    NSUUID *_mediaSystemIdentifierEffective;
    NSUUID *_pairingIdentifier;
    NSString *_password;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL uiTriggered; // @synthesize uiTriggered=_uiTriggered;
@property(nonatomic) int serversChangedState; // @synthesize serversChangedState=_serversChangedState;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(nonatomic) int mediaSystemRoleEffective; // @synthesize mediaSystemRoleEffective=_mediaSystemRoleEffective;
@property(copy, nonatomic) NSUUID *mediaSystemIdentifierEffective; // @synthesize mediaSystemIdentifierEffective=_mediaSystemIdentifierEffective;
@property(nonatomic) BOOL daemon; // @synthesize daemon=_daemon;
@property(nonatomic) BOOL changed; // @synthesize changed=_changed;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(copy, nonatomic) NSDictionary *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(copy, nonatomic) NSString *publicIdentifier; // @synthesize publicIdentifier=_publicIdentifier;
@property(nonatomic) int personalRequestsState; // @synthesize personalRequestsState=_personalRequestsState;
@property(nonatomic) int personalDeviceState; // @synthesize personalDeviceState=_personalDeviceState;
@property(nonatomic, getter=isPersonal) BOOL personal; // @synthesize personal=_personal;
@property(nonatomic) int mediaSystemState; // @synthesize mediaSystemState=_mediaSystemState;
@property(nonatomic) int mediaSystemRole; // @synthesize mediaSystemRole=_mediaSystemRole;
@property(copy, nonatomic) NSString *mediaSystemName; // @synthesize mediaSystemName=_mediaSystemName;
@property(copy, nonatomic) NSUUID *mediaSystemIdentifier; // @synthesize mediaSystemIdentifier=_mediaSystemIdentifier;
@property(copy, nonatomic) NSString *idsPersonalDeviceIdentifier; // @synthesize idsPersonalDeviceIdentifier=_idsPersonalDeviceIdentifier;
@property(copy, nonatomic) NSUUID *homeKitIdentifier; // @synthesize homeKitIdentifier=_homeKitIdentifier;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) NSString *deviceColor; // @synthesize deviceColor=_deviceColor;
- (void).cxx_destruct;
- (unsigned int)updateWithSFDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
@property(readonly, copy, nonatomic) NSString *effectiveIdentifier;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

