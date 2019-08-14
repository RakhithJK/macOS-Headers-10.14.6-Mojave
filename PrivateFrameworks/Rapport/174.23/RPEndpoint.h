//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class CUBonjourDevice, IDSDevice, NSArray, NSString, SFDevice;

@interface RPEndpoint : NSObject <NSSecureCoding>
{
    SFDevice *_bleDevice;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _hotspotInfo;
    NSString *_identifier;
    NSString *_idsDeviceIdentifier;
    int _linkType;
    NSString *_mediaRemoteIdentifier;
    NSString *_mediaRouteIdentifier;
    NSString *_model;
    NSString *_name;
    NSArray *_serviceTypes;
    unsigned long long _statusFlags;
    NSString *_sourceVersion;
    BOOL _present;
    int _proximity;
    NSString *_homeKitUserIdentifier;
    NSString *_serviceType;
    IDSDevice *_idsDevice;
}

+ (BOOL)supportsSecureCoding;
+ (id)nullEndpoint;
@property(nonatomic) BOOL present; // @synthesize present=_present;
@property(nonatomic) int linkType; // @synthesize linkType=_linkType;
@property(retain, nonatomic) IDSDevice *idsDevice; // @synthesize idsDevice=_idsDevice;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(retain, nonatomic) SFDevice *bleDevice; // @synthesize bleDevice=_bleDevice;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *mediaRouteIdentifier; // @synthesize mediaRouteIdentifier=_mediaRouteIdentifier;
@property(copy, nonatomic) NSString *mediaRemoteIdentifier; // @synthesize mediaRemoteIdentifier=_mediaRemoteIdentifier;
@property(copy, nonatomic) NSString *idsDeviceIdentifier; // @synthesize idsDeviceIdentifier=_idsDeviceIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int hotspotInfo; // @synthesize hotspotInfo=_hotspotInfo;
@property(readonly, copy, nonatomic) NSString *homeKitUserIdentifier; // @synthesize homeKitUserIdentifier=_homeKitUserIdentifier;
- (void).cxx_destruct;
- (BOOL)removeSFDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;
- (unsigned int)removeIDSDevice;
- (unsigned int)updateWithIDSDevice:(id)arg1;
- (BOOL)removeBonjourDevice:(id)arg1;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

