//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NWAWDNWConnectionReport : PBCodable <NSCopying>
{
    unsigned long long _bestRTT;
    unsigned long long _bytesDuplicate;
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    unsigned long long _bytesOutOfOrder;
    unsigned long long _bytesRetransmitted;
    unsigned long long _connectedAddressIndex;
    unsigned long long _connectionReuseCount;
    unsigned long long _currentRTT;
    unsigned long long _dataStallCount;
    unsigned long long _flowConnectMilliseconds;
    unsigned long long _flowDurationMilliseconds;
    unsigned long long _ipv4AddressCount;
    unsigned long long _ipv4DNSServerCount;
    unsigned long long _ipv6AddressCount;
    unsigned long long _ipv6DNSServerCount;
    unsigned long long _multipathBytesInCell;
    unsigned long long _multipathBytesInInitial;
    unsigned long long _multipathBytesInWiFi;
    unsigned long long _multipathBytesOutCell;
    unsigned long long _multipathBytesOutInitial;
    unsigned long long _multipathBytesOutWiFi;
    unsigned long long _multipathServiceType;
    unsigned long long _packetsIn;
    unsigned long long _packetsOut;
    unsigned long long _pathTriggerMilliseconds;
    unsigned long long _proxyMilliseconds;
    unsigned long long _rTTvariance;
    unsigned long long _resolutionMilliseconds;
    unsigned long long _secondsSinceInterfaceChange;
    unsigned long long _smoothedRTT;
    unsigned long long _synRetransmissionCount;
    unsigned long long _timestamp;
    unsigned long long _tlsMilliseconds;
    unsigned long long _trafficClass;
    NSMutableArray *_activities;
    int _appleApp;
    int _appleHost;
    int _connectedAddressFamily;
    int _connectedInterfaceType;
    int _connectionMode;
    NSString *_connectionUUID;
    int _failureReason;
    int _firstAddressFamily;
    NSString *_processName;
    int _stackLevel;
    int _tlsVersion;
    int _usedProxyType;
    BOOL _customProxyConfigured;
    BOOL _fallbackEligible;
    BOOL _firstParty;
    BOOL _ipv4Available;
    BOOL _ipv6Available;
    BOOL _isDaemon;
    BOOL _multipathConfigured;
    BOOL _resolutionRequired;
    BOOL _synthesizedExtraIPv6Address;
    BOOL _synthesizedIPv6Address;
    BOOL _systemProxyConfigured;
    BOOL _tfoConfigured;
    BOOL _tfoUsed;
    BOOL _tlsConfigured;
    BOOL _tlsHandshakeTimedOut;
    BOOL _tlsVersionTimeout;
    BOOL _triggeredPath;
    BOOL _usedFallback;
    BOOL _weakFallback;
    struct {
        unsigned int bestRTT:1;
        unsigned int bytesDuplicate:1;
        unsigned int bytesIn:1;
        unsigned int bytesOut:1;
        unsigned int bytesOutOfOrder:1;
        unsigned int bytesRetransmitted:1;
        unsigned int connectedAddressIndex:1;
        unsigned int connectionReuseCount:1;
        unsigned int currentRTT:1;
        unsigned int dataStallCount:1;
        unsigned int flowConnectMilliseconds:1;
        unsigned int flowDurationMilliseconds:1;
        unsigned int ipv4AddressCount:1;
        unsigned int ipv4DNSServerCount:1;
        unsigned int ipv6AddressCount:1;
        unsigned int ipv6DNSServerCount:1;
        unsigned int multipathBytesInCell:1;
        unsigned int multipathBytesInInitial:1;
        unsigned int multipathBytesInWiFi:1;
        unsigned int multipathBytesOutCell:1;
        unsigned int multipathBytesOutInitial:1;
        unsigned int multipathBytesOutWiFi:1;
        unsigned int multipathServiceType:1;
        unsigned int packetsIn:1;
        unsigned int packetsOut:1;
        unsigned int pathTriggerMilliseconds:1;
        unsigned int proxyMilliseconds:1;
        unsigned int rTTvariance:1;
        unsigned int resolutionMilliseconds:1;
        unsigned int secondsSinceInterfaceChange:1;
        unsigned int smoothedRTT:1;
        unsigned int synRetransmissionCount:1;
        unsigned int timestamp:1;
        unsigned int tlsMilliseconds:1;
        unsigned int trafficClass:1;
        unsigned int appleApp:1;
        unsigned int appleHost:1;
        unsigned int connectedAddressFamily:1;
        unsigned int connectedInterfaceType:1;
        unsigned int connectionMode:1;
        unsigned int failureReason:1;
        unsigned int firstAddressFamily:1;
        unsigned int stackLevel:1;
        unsigned int tlsVersion:1;
        unsigned int usedProxyType:1;
        unsigned int customProxyConfigured:1;
        unsigned int fallbackEligible:1;
        unsigned int firstParty:1;
        unsigned int ipv4Available:1;
        unsigned int ipv6Available:1;
        unsigned int isDaemon:1;
        unsigned int multipathConfigured:1;
        unsigned int resolutionRequired:1;
        unsigned int synthesizedExtraIPv6Address:1;
        unsigned int synthesizedIPv6Address:1;
        unsigned int systemProxyConfigured:1;
        unsigned int tfoConfigured:1;
        unsigned int tfoUsed:1;
        unsigned int tlsConfigured:1;
        unsigned int tlsHandshakeTimedOut:1;
        unsigned int tlsVersionTimeout:1;
        unsigned int triggeredPath:1;
        unsigned int usedFallback:1;
        unsigned int weakFallback:1;
    } _has;
}

+ (Class)activitiesType;
@property(nonatomic) BOOL tlsHandshakeTimedOut; // @synthesize tlsHandshakeTimedOut=_tlsHandshakeTimedOut;
@property(retain, nonatomic) NSString *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(retain, nonatomic) NSMutableArray *activities; // @synthesize activities=_activities;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) BOOL isDaemon; // @synthesize isDaemon=_isDaemon;
@property(nonatomic) unsigned long long secondsSinceInterfaceChange; // @synthesize secondsSinceInterfaceChange=_secondsSinceInterfaceChange;
@property(nonatomic) unsigned long long multipathBytesOutInitial; // @synthesize multipathBytesOutInitial=_multipathBytesOutInitial;
@property(nonatomic) unsigned long long multipathBytesInInitial; // @synthesize multipathBytesInInitial=_multipathBytesInInitial;
@property(nonatomic) unsigned long long multipathBytesOutWiFi; // @synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi;
@property(nonatomic) unsigned long long multipathBytesInWiFi; // @synthesize multipathBytesInWiFi=_multipathBytesInWiFi;
@property(nonatomic) unsigned long long multipathBytesOutCell; // @synthesize multipathBytesOutCell=_multipathBytesOutCell;
@property(nonatomic) unsigned long long multipathBytesInCell; // @synthesize multipathBytesInCell=_multipathBytesInCell;
@property(nonatomic) BOOL firstParty; // @synthesize firstParty=_firstParty;
@property(nonatomic) unsigned long long multipathServiceType; // @synthesize multipathServiceType=_multipathServiceType;
@property(nonatomic) BOOL tfoUsed; // @synthesize tfoUsed=_tfoUsed;
@property(nonatomic) unsigned long long synRetransmissionCount; // @synthesize synRetransmissionCount=_synRetransmissionCount;
@property(nonatomic) unsigned long long rTTvariance; // @synthesize rTTvariance=_rTTvariance;
@property(nonatomic) unsigned long long bestRTT; // @synthesize bestRTT=_bestRTT;
@property(nonatomic) unsigned long long smoothedRTT; // @synthesize smoothedRTT=_smoothedRTT;
@property(nonatomic) unsigned long long currentRTT; // @synthesize currentRTT=_currentRTT;
@property(nonatomic) unsigned long long packetsOut; // @synthesize packetsOut=_packetsOut;
@property(nonatomic) unsigned long long packetsIn; // @synthesize packetsIn=_packetsIn;
@property(nonatomic) unsigned long long bytesRetransmitted; // @synthesize bytesRetransmitted=_bytesRetransmitted;
@property(nonatomic) unsigned long long bytesOutOfOrder; // @synthesize bytesOutOfOrder=_bytesOutOfOrder;
@property(nonatomic) unsigned long long bytesDuplicate; // @synthesize bytesDuplicate=_bytesDuplicate;
@property(nonatomic) unsigned long long bytesOut; // @synthesize bytesOut=_bytesOut;
@property(nonatomic) unsigned long long bytesIn; // @synthesize bytesIn=_bytesIn;
@property(nonatomic) BOOL synthesizedExtraIPv6Address; // @synthesize synthesizedExtraIPv6Address=_synthesizedExtraIPv6Address;
@property(nonatomic) BOOL tlsVersionTimeout; // @synthesize tlsVersionTimeout=_tlsVersionTimeout;
@property(nonatomic) unsigned long long ipv6DNSServerCount; // @synthesize ipv6DNSServerCount=_ipv6DNSServerCount;
@property(nonatomic) unsigned long long ipv4DNSServerCount; // @synthesize ipv4DNSServerCount=_ipv4DNSServerCount;
@property(nonatomic) BOOL ipv6Available; // @synthesize ipv6Available=_ipv6Available;
@property(nonatomic) BOOL ipv4Available; // @synthesize ipv4Available=_ipv4Available;
@property(nonatomic) unsigned long long dataStallCount; // @synthesize dataStallCount=_dataStallCount;
@property(nonatomic) unsigned long long connectionReuseCount; // @synthesize connectionReuseCount=_connectionReuseCount;
@property(nonatomic) unsigned long long connectedAddressIndex; // @synthesize connectedAddressIndex=_connectedAddressIndex;
@property(nonatomic) BOOL synthesizedIPv6Address; // @synthesize synthesizedIPv6Address=_synthesizedIPv6Address;
@property(nonatomic) unsigned long long ipv6AddressCount; // @synthesize ipv6AddressCount=_ipv6AddressCount;
@property(nonatomic) unsigned long long ipv4AddressCount; // @synthesize ipv4AddressCount=_ipv4AddressCount;
@property(nonatomic) unsigned long long flowDurationMilliseconds; // @synthesize flowDurationMilliseconds=_flowDurationMilliseconds;
@property(nonatomic) unsigned long long tlsMilliseconds; // @synthesize tlsMilliseconds=_tlsMilliseconds;
@property(nonatomic) unsigned long long flowConnectMilliseconds; // @synthesize flowConnectMilliseconds=_flowConnectMilliseconds;
@property(nonatomic) unsigned long long proxyMilliseconds; // @synthesize proxyMilliseconds=_proxyMilliseconds;
@property(nonatomic) unsigned long long resolutionMilliseconds; // @synthesize resolutionMilliseconds=_resolutionMilliseconds;
@property(nonatomic) unsigned long long pathTriggerMilliseconds; // @synthesize pathTriggerMilliseconds=_pathTriggerMilliseconds;
@property(nonatomic) unsigned long long trafficClass; // @synthesize trafficClass=_trafficClass;
@property(nonatomic) BOOL multipathConfigured; // @synthesize multipathConfigured=_multipathConfigured;
@property(nonatomic) BOOL tfoConfigured; // @synthesize tfoConfigured=_tfoConfigured;
@property(nonatomic) BOOL tlsConfigured; // @synthesize tlsConfigured=_tlsConfigured;
@property(nonatomic) BOOL resolutionRequired; // @synthesize resolutionRequired=_resolutionRequired;
@property(nonatomic) BOOL usedFallback; // @synthesize usedFallback=_usedFallback;
@property(nonatomic) BOOL weakFallback; // @synthesize weakFallback=_weakFallback;
@property(nonatomic) BOOL fallbackEligible; // @synthesize fallbackEligible=_fallbackEligible;
@property(nonatomic) BOOL customProxyConfigured; // @synthesize customProxyConfigured=_customProxyConfigured;
@property(nonatomic) BOOL systemProxyConfigured; // @synthesize systemProxyConfigured=_systemProxyConfigured;
@property(nonatomic) BOOL triggeredPath; // @synthesize triggeredPath=_triggeredPath;
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
@property(nonatomic) BOOL hasTlsHandshakeTimedOut;
@property(readonly, nonatomic) BOOL hasConnectionUUID;
- (id)activitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)activitiesCount;
- (void)addActivities:(id)arg1;
- (void)clearActivities;
@property(readonly, nonatomic) BOOL hasProcessName;
@property(nonatomic) BOOL hasIsDaemon;
@property(nonatomic) BOOL hasSecondsSinceInterfaceChange;
@property(nonatomic) BOOL hasMultipathBytesOutInitial;
@property(nonatomic) BOOL hasMultipathBytesInInitial;
@property(nonatomic) BOOL hasMultipathBytesOutWiFi;
@property(nonatomic) BOOL hasMultipathBytesInWiFi;
@property(nonatomic) BOOL hasMultipathBytesOutCell;
@property(nonatomic) BOOL hasMultipathBytesInCell;
@property(nonatomic) BOOL hasFirstParty;
@property(nonatomic) BOOL hasMultipathServiceType;
@property(nonatomic) BOOL hasTfoUsed;
@property(nonatomic) BOOL hasSynRetransmissionCount;
@property(nonatomic) BOOL hasRTTvariance;
@property(nonatomic) BOOL hasBestRTT;
@property(nonatomic) BOOL hasSmoothedRTT;
@property(nonatomic) BOOL hasCurrentRTT;
@property(nonatomic) BOOL hasPacketsOut;
@property(nonatomic) BOOL hasPacketsIn;
@property(nonatomic) BOOL hasBytesRetransmitted;
@property(nonatomic) BOOL hasBytesOutOfOrder;
@property(nonatomic) BOOL hasBytesDuplicate;
@property(nonatomic) BOOL hasBytesOut;
@property(nonatomic) BOOL hasBytesIn;
@property(nonatomic) BOOL hasSynthesizedExtraIPv6Address;
@property(nonatomic) BOOL hasTlsVersionTimeout;
@property(nonatomic) BOOL hasIpv6DNSServerCount;
@property(nonatomic) BOOL hasIpv4DNSServerCount;
@property(nonatomic) BOOL hasIpv6Available;
@property(nonatomic) BOOL hasIpv4Available;
- (int)StringAsStackLevel:(id)arg1;
- (id)stackLevelAsString:(int)arg1;
@property(nonatomic) BOOL hasStackLevel;
@property(nonatomic) int stackLevel; // @synthesize stackLevel=_stackLevel;
- (int)StringAsTlsVersion:(id)arg1;
- (id)tlsVersionAsString:(int)arg1;
@property(nonatomic) BOOL hasTlsVersion;
@property(nonatomic) int tlsVersion; // @synthesize tlsVersion=_tlsVersion;
- (int)StringAsAppleApp:(id)arg1;
- (id)appleAppAsString:(int)arg1;
@property(nonatomic) BOOL hasAppleApp;
@property(nonatomic) int appleApp; // @synthesize appleApp=_appleApp;
- (int)StringAsAppleHost:(id)arg1;
- (id)appleHostAsString:(int)arg1;
@property(nonatomic) BOOL hasAppleHost;
@property(nonatomic) int appleHost; // @synthesize appleHost=_appleHost;
- (int)StringAsConnectionMode:(id)arg1;
- (id)connectionModeAsString:(int)arg1;
@property(nonatomic) BOOL hasConnectionMode;
@property(nonatomic) int connectionMode; // @synthesize connectionMode=_connectionMode;
@property(nonatomic) BOOL hasDataStallCount;
@property(nonatomic) BOOL hasConnectionReuseCount;
- (int)StringAsConnectedInterfaceType:(id)arg1;
- (id)connectedInterfaceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasConnectedInterfaceType;
@property(nonatomic) int connectedInterfaceType; // @synthesize connectedInterfaceType=_connectedInterfaceType;
@property(nonatomic) BOOL hasConnectedAddressIndex;
- (int)StringAsConnectedAddressFamily:(id)arg1;
- (id)connectedAddressFamilyAsString:(int)arg1;
@property(nonatomic) BOOL hasConnectedAddressFamily;
@property(nonatomic) int connectedAddressFamily; // @synthesize connectedAddressFamily=_connectedAddressFamily;
- (int)StringAsFirstAddressFamily:(id)arg1;
- (id)firstAddressFamilyAsString:(int)arg1;
@property(nonatomic) BOOL hasFirstAddressFamily;
@property(nonatomic) int firstAddressFamily; // @synthesize firstAddressFamily=_firstAddressFamily;
@property(nonatomic) BOOL hasSynthesizedIPv6Address;
@property(nonatomic) BOOL hasIpv6AddressCount;
@property(nonatomic) BOOL hasIpv4AddressCount;
@property(nonatomic) BOOL hasFlowDurationMilliseconds;
@property(nonatomic) BOOL hasTlsMilliseconds;
@property(nonatomic) BOOL hasFlowConnectMilliseconds;
@property(nonatomic) BOOL hasProxyMilliseconds;
@property(nonatomic) BOOL hasResolutionMilliseconds;
@property(nonatomic) BOOL hasPathTriggerMilliseconds;
- (int)StringAsFailureReason:(id)arg1;
- (id)failureReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasFailureReason;
@property(nonatomic) int failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) BOOL hasTrafficClass;
@property(nonatomic) BOOL hasMultipathConfigured;
@property(nonatomic) BOOL hasTfoConfigured;
@property(nonatomic) BOOL hasTlsConfigured;
@property(nonatomic) BOOL hasResolutionRequired;
@property(nonatomic) BOOL hasUsedFallback;
@property(nonatomic) BOOL hasWeakFallback;
@property(nonatomic) BOOL hasFallbackEligible;
- (int)StringAsUsedProxyType:(id)arg1;
- (id)usedProxyTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasUsedProxyType;
@property(nonatomic) int usedProxyType; // @synthesize usedProxyType=_usedProxyType;
@property(nonatomic) BOOL hasCustomProxyConfigured;
@property(nonatomic) BOOL hasSystemProxyConfigured;
@property(nonatomic) BOOL hasTriggeredPath;
@property(nonatomic) BOOL hasTimestamp;

@end

