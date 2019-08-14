//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NPTunnelTuscanyEndpoint, NSData, NSDictionary, NSUUID, NWEndpoint;

@interface NPFlowProperties : NSObject
{
    unsigned int _flowIdentifier;
    int _dataMode;
    unsigned int _flags;
    unsigned long long _serviceID;
    double _fallbackTimeout;
    NSData *_requestData;
    NPTunnelTuscanyEndpoint *_replacementEndpoint;
    NSDictionary *_replacementAddressMap;
    NSUUID *_dayPassUUID;
    NWEndpoint *_directEndpoint;
    unsigned long long *_timestamps;
}

@property unsigned int flags; // @synthesize flags=_flags;
@property unsigned long long *timestamps; // @synthesize timestamps=_timestamps;
@property(retain) NWEndpoint *directEndpoint; // @synthesize directEndpoint=_directEndpoint;
@property int dataMode; // @synthesize dataMode=_dataMode;
@property(retain) NSUUID *dayPassUUID; // @synthesize dayPassUUID=_dayPassUUID;
@property(retain) NSDictionary *replacementAddressMap; // @synthesize replacementAddressMap=_replacementAddressMap;
@property(retain) NPTunnelTuscanyEndpoint *replacementEndpoint; // @synthesize replacementEndpoint=_replacementEndpoint;
@property(retain) NSData *requestData; // @synthesize requestData=_requestData;
@property double fallbackTimeout; // @synthesize fallbackTimeout=_fallbackTimeout;
@property unsigned int flowIdentifier; // @synthesize flowIdentifier=_flowIdentifier;
@property unsigned long long serviceID; // @synthesize serviceID=_serviceID;
- (void).cxx_destruct;
@property BOOL isLoopback;
@property BOOL enableNSP;
- (id)copyTLVData;
- (void)dealloc;
- (id)initWithTLVData:(id)arg1;

@end

