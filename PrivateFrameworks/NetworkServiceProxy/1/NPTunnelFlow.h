//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSPConnectionInfoSource-Protocol.h>

@class NPFlowProperties, NPTunnel, NSData, NSDate, NSPAppRule, NetworkServiceProxyRequestStats;
@protocol OS_dispatch_data;

@interface NPTunnelFlow : NSObject <NSPConnectionInfoSource>
{
    long long _fallbackReason;
    BOOL _useCustomHostnameValidation;
    BOOL _isDirectConnectionViable;
    BOOL _fallbackDisabled;
    BOOL _hasTunnel;
    BOOL _shouldComposeIntialData;
    BOOL _enableDirectRace;
    int _tunnelError;
    unsigned long long _identifier;
    NPTunnel *_tunnel;
    NSPAppRule *_appRule;
    long long _state;
    void *_window;
    unsigned long long _hashKey;
    NSDate *_startDate;
    NSDate *_firstTxByteTimestamp;
    NPFlowProperties *_extraFlowProperties;
    NetworkServiceProxyRequestStats *_stats;
    unsigned long long _initialBytesLeftOver;
    NSObject<OS_dispatch_data> *_savedData;
    long long _latestByteDate;
    void *_fallbackTimer;
    void *_telemetryTimer;
    double _fallbackDelay;
}

@property double fallbackDelay; // @synthesize fallbackDelay=_fallbackDelay;
@property void *telemetryTimer; // @synthesize telemetryTimer=_telemetryTimer;
@property void *fallbackTimer; // @synthesize fallbackTimer=_fallbackTimer;
@property long long latestByteDate; // @synthesize latestByteDate=_latestByteDate;
@property(retain) NSObject<OS_dispatch_data> *savedData; // @synthesize savedData=_savedData;
@property unsigned long long initialBytesLeftOver; // @synthesize initialBytesLeftOver=_initialBytesLeftOver;
@property BOOL enableDirectRace; // @synthesize enableDirectRace=_enableDirectRace;
@property BOOL shouldComposeIntialData; // @synthesize shouldComposeIntialData=_shouldComposeIntialData;
@property(readonly) NetworkServiceProxyRequestStats *stats; // @synthesize stats=_stats;
@property(readonly) NPFlowProperties *extraFlowProperties; // @synthesize extraFlowProperties=_extraFlowProperties;
@property(retain) NSDate *firstTxByteTimestamp; // @synthesize firstTxByteTimestamp=_firstTxByteTimestamp;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property int tunnelError; // @synthesize tunnelError=_tunnelError;
@property BOOL hasTunnel; // @synthesize hasTunnel=_hasTunnel;
@property BOOL fallbackDisabled; // @synthesize fallbackDisabled=_fallbackDisabled;
@property(readonly) unsigned long long hashKey; // @synthesize hashKey=_hashKey;
@property BOOL isDirectConnectionViable; // @synthesize isDirectConnectionViable=_isDirectConnectionViable;
@property BOOL useCustomHostnameValidation; // @synthesize useCustomHostnameValidation=_useCustomHostnameValidation;
@property void *window; // @synthesize window=_window;
@property long long state; // @synthesize state=_state;
@property(readonly) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(readonly) NPTunnel *tunnel; // @synthesize tunnel=_tunnel;
@property unsigned long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)handleTunnelReadyForData;
- (void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3;
- (void)createTelemetryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2;
@property(readonly) BOOL isBestEffort;
- (void)reportMetrics;
@property long long fallbackReason;
@property(retain) NSData *appData;
- (id)copyConnectionInfo;
- (id)createFallbackConnectionInfoWithFallbackReason:(long long)arg1;
- (void)copyConnectionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processConnectionInfo:(id)arg1;
- (void)handleTunnelCanHandleMoreData;
- (void)handleTunnelDisconnected;
- (void)handleTunnelConnected;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)closeFromTunnel;
@property(readonly) BOOL isClientFlowClosed;
- (void)closeClientFlowWithError:(int)arg1;
- (void)closeWithError:(int)arg1;
- (void)increaseWindowSize:(unsigned long long)arg1;
- (void)handleAppData:(id)arg1;
- (void)stopDirectConnection;
- (void)startDirectConnection;
- (void)readDataFromClient;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (void)cleanupLosingConnection:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4;

@end

