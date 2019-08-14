//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVB17221EntityDiscovery, NSArray;
@protocol AVB17221EntityPublisher;

@interface AVB17221Entity : NSObject
{
    unsigned int service;
    unsigned int interestNotficiation;
    struct IONotificationPort *notificationPort;
    BOOL localEntity;
    unsigned char timeToLive;
    unsigned char gPTPDomainNumber;
    unsigned short talkerStreamSources;
    unsigned short talkerCapabilities;
    unsigned short listenerStreamSinks;
    unsigned short listenerCapabilities;
    unsigned short identifyControlIndex;
    unsigned short interfaceIndex;
    unsigned int entityCapabilities;
    unsigned int controllerCapabilities;
    unsigned int availableIndex;
    unsigned int lastAvailableIndex;
    unsigned long long entityID;
    unsigned long long entityModelID;
    unsigned long long gPTPGrandmasterID;
    unsigned long long associationID;
    NSArray *macAddresses;
    AVB17221EntityDiscovery *entityDiscovery;
    id <AVB17221EntityPublisher> entityPublisher;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)keyPathsForValuesAffectingDynamicEntityModelID;
+ (id)keyPathsForValuesAffectingDynamicEntityID;
+ (id)keyPathsForValuesAffectingAsGrandmasterID;
+ (id)keyPathsForValuesAffectingModelID;
+ (id)keyPathsForValuesAffectingVendorID;
+ (id)keyPathsForValuesAffectingGuid;
+ (id)keyPathsForValuesAffectingControllerImplemented;
+ (id)keyPathsForValuesAffectingVideoSink;
+ (id)keyPathsForValuesAffectingAudioSink;
+ (id)keyPathsForValuesAffectingMidiSink;
+ (id)keyPathsForValuesAffectingSmpteSink;
+ (id)keyPathsForValuesAffectingMediaClockSink;
+ (id)keyPathsForValuesAffectingControlSink;
+ (id)keyPathsForValuesAffectingOtherSink;
+ (id)keyPathsForValuesAffectingListenerImplemented;
+ (id)keyPathsForValuesAffectingVideoSource;
+ (id)keyPathsForValuesAffectingAudioSource;
+ (id)keyPathsForValuesAffectingMidiSource;
+ (id)keyPathsForValuesAffectingSmpteSource;
+ (id)keyPathsForValuesAffectingMediaClockSource;
+ (id)keyPathsForValuesAffectingControlSource;
+ (id)keyPathsForValuesAffectingOtherSource;
+ (id)keyPathsForValuesAffectingTalkerImplemented;
+ (id)keyPathsForValuesAffectingEntityNotReady;
+ (id)keyPathsForValuesAffectingGeneralControllerIgnore;
+ (id)keyPathsForValuesAffectingInterfaceIndexValid;
+ (id)keyPathsForValuesAffectingIdentifyControlIndexValid;
+ (id)keyPathsForValuesAffectingPersistentAcquireSupported;
+ (id)keyPathsForValuesAffectingAuthenticationRequired;
+ (id)keyPathsForValuesAffectingAuthenticationSupported;
+ (id)keyPathsForValuesAffectingGPTPSupported;
+ (id)keyPathsForValuesAffectingClassBSupported;
+ (id)keyPathsForValuesAffectingClassASupported;
+ (id)keyPathsForValuesAffectingVendorUniqueSupported;
+ (id)keyPathsForValuesAffectingAssociationIDValid;
+ (id)keyPathsForValuesAffectingAssociationIDSupported;
+ (id)keyPathsForValuesAffectingLegacyAVCSupported;
+ (id)keyPathsForValuesAffectingAvdeccControlSupported;
+ (id)keyPathsForValuesAffectingGatewayEntity;
+ (id)keyPathsForValuesAffectingAddressAccessSupported;
+ (id)keyPathsForValuesAffectingEfuMode;
+ (id)entityWithService:(unsigned int)arg1 notificationPort:(struct IONotificationPort *)arg2;
@property unsigned char gPTPDomainNumber; // @synthesize gPTPDomainNumber;
@property unsigned short interfaceIndex; // @synthesize interfaceIndex;
@property unsigned short identifyControlIndex; // @synthesize identifyControlIndex;
@property unsigned int lastAvailableIndex; // @synthesize lastAvailableIndex;
@property id <AVB17221EntityPublisher> entityPublisher; // @synthesize entityPublisher;
@property AVB17221EntityDiscovery *entityDiscovery; // @synthesize entityDiscovery;
@property(copy) NSArray *macAddresses; // @synthesize macAddresses;
@property unsigned long long associationID; // @synthesize associationID;
@property unsigned long long gPTPGrandmasterID; // @synthesize gPTPGrandmasterID;
@property unsigned int availableIndex; // @synthesize availableIndex;
@property unsigned int controllerCapabilities; // @synthesize controllerCapabilities;
@property unsigned short listenerCapabilities; // @synthesize listenerCapabilities;
@property unsigned short listenerStreamSinks; // @synthesize listenerStreamSinks;
@property unsigned short talkerCapabilities; // @synthesize talkerCapabilities;
@property unsigned short talkerStreamSources; // @synthesize talkerStreamSources;
@property unsigned int entityCapabilities; // @synthesize entityCapabilities;
@property unsigned long long entityModelID; // @synthesize entityModelID;
@property unsigned long long entityID; // @synthesize entityID;
@property unsigned char timeToLive; // @synthesize timeToLive;
@property(getter=isLocalEntity) BOOL localEntity; // @synthesize localEntity;
- (void)dealloc;
- (void)finalize;
- (id)description;
@property(readonly, getter=isDynamicEntityModelID) BOOL dynamicEntityModelID;
@property(readonly, getter=isDynamicEntityID) BOOL dynamicEntityID;
@property unsigned long long asGrandmasterID; // @dynamic asGrandmasterID;
@property unsigned int modelID; // @dynamic modelID;
@property unsigned int vendorID; // @dynamic vendorID;
@property unsigned long long guid; // @dynamic guid;
@property(getter=isControllerImplemented) BOOL controllerImplemented; // @dynamic controllerImplemented;
@property(getter=isVideoSink) BOOL videoSink; // @dynamic videoSink;
@property(getter=isAudioSink) BOOL audioSink; // @dynamic audioSink;
@property(getter=isMidiSink) BOOL midiSink; // @dynamic midiSink;
@property(getter=isSmpteSink) BOOL smpteSink; // @dynamic smpteSink;
@property(getter=isMediaClockSink) BOOL mediaClockSink; // @dynamic mediaClockSink;
@property(getter=isControlSink) BOOL controlSink; // @dynamic controlSink;
@property(getter=isOtherSink) BOOL otherSink; // @dynamic otherSink;
@property(getter=isListenerImplemented) BOOL listenerImplemented; // @dynamic listenerImplemented;
@property(getter=isVideoSource) BOOL videoSource; // @dynamic videoSource;
@property(getter=isAudioSource) BOOL audioSource; // @dynamic audioSource;
@property(getter=isMidiSource) BOOL midiSource; // @dynamic midiSource;
@property(getter=isSmpteSource) BOOL smpteSource; // @dynamic smpteSource;
@property(getter=isMediaClockSource) BOOL mediaClockSource; // @dynamic mediaClockSource;
@property(getter=isControlSource) BOOL controlSource; // @dynamic controlSource;
@property(getter=isOtherSource) BOOL otherSource; // @dynamic otherSource;
@property(getter=isTalkerImplemented) BOOL talkerImplemented; // @dynamic talkerImplemented;
@property(getter=isEntityNotReady) BOOL entityNotReady; // @dynamic entityNotReady;
@property BOOL generalControllerIgnore; // @dynamic generalControllerIgnore;
@property(getter=isInterfaceIndexValid) BOOL interfaceIndexValid;
@property(getter=isIdentifyControlIndexValid) BOOL identifyControlIndexValid; // @dynamic identifyControlIndexValid;
@property(getter=isPersistentAcquireSupported) BOOL persistentAcquireSupported; // @dynamic persistentAcquireSupported;
@property(getter=isAuthenticationRequired) BOOL authenticationRequired; // @dynamic authenticationRequired;
@property(getter=isAuthenticationSupported) BOOL authenticationSupported; // @dynamic authenticationSupported;
@property(getter=isGPTPSupported) BOOL gPTPSupported; // @dynamic gPTPSupported;
@property(getter=isClassBSupported) BOOL classBSupported; // @dynamic classBSupported;
@property(getter=isClassASupported) BOOL classASupported; // @dynamic classASupported;
@property(getter=isVendorUniqueSupported) BOOL vendorUniqueSupported; // @dynamic vendorUniqueSupported;
@property(getter=isAssociationIDValid) BOOL associationIDValid; // @dynamic associationIDValid;
@property(getter=isAssociationIDSupported) BOOL associationIDSupported; // @dynamic associationIDSupported;
@property(getter=isLegacyAVCSupported) BOOL legacyAVCSupported; // @dynamic legacyAVCSupported;
@property(getter=isAEMSupported, setter=setAEMSupported:) BOOL aemSupported; // @dynamic aemSupported;
@property(getter=isGatewayEntity) BOOL gatewayEntity; // @dynamic gatewayEntity;
@property(getter=isAddressAccessSupported) BOOL addressAccessSupported; // @dynamic addressAccessSupported;
- (BOOL)isEfuMode;
@property(getter=isEFUMode) BOOL efuMode; // @dynamic efuMode;
- (void)_registryPropertyChanged;
- (unsigned int)_updateProperties;
- (BOOL)registerForChangeNotificationsWithNotificationPort:(struct IONotificationPort *)arg1;
- (id)initWithService:(unsigned int)arg1 notificationPort:(struct IONotificationPort *)arg2;

@end

