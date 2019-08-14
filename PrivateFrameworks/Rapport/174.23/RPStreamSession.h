//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class CUTCPServer, CUWiFiManager, NSData, NSString, NSUUID, RPConnection;
@protocol OS_dispatch_queue, OS_nw_listener, OS_nw_path_evaluator, RPMessageable;

@interface RPStreamSession : NSObject <NSSecureCoding>
{
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_nw_listener> *_nwListener;
    NSObject<OS_nw_path_evaluator> *_nwPathEvaluator;
    unsigned char _ourCurveSK[32];
    CDUnion_fab80606 _peerIP;
    int _peerPort;
    BOOL _prepareOnly;
    RPConnection *_rpCnx;
    CUTCPServer *_tcpServer;
    CUWiFiManager *_wifiManager;
    BOOL _serverMode;
    int _flowControlState;
    unsigned int _streamFlags;
    int _streamSocket;
    int _streamType;
    unsigned int _trafficFlags;
    unsigned long long _delegatedProcessUPID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    id <RPMessageable> _messenger;
    NSUUID *_nwClientID;
    CDUnknownBlockType _receivedEventHandler;
    CDUnknownBlockType _receivedRequestHandler;
    NSString *_streamID;
    NSData *_streamKey;
    NSString *_destinationString;
    NSData *_pskData;
    CDUnknownBlockType _streamAcceptHandler;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CDUnknownBlockType streamAcceptHandler; // @synthesize streamAcceptHandler=_streamAcceptHandler;
@property(nonatomic) BOOL serverMode; // @synthesize serverMode=_serverMode;
@property(copy, nonatomic) NSData *pskData; // @synthesize pskData=_pskData;
@property(copy, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int streamSocket; // @synthesize streamSocket=_streamSocket;
@property(copy, nonatomic) NSData *streamKey; // @synthesize streamKey=_streamKey;
@property(copy, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int streamFlags; // @synthesize streamFlags=_streamFlags;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedEventHandler; // @synthesize receivedEventHandler=_receivedEventHandler;
@property(copy, nonatomic) NSUUID *nwClientID; // @synthesize nwClientID=_nwClientID;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(readonly, nonatomic) int flowControlState; // @synthesize flowControlState=_flowControlState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned long long delegatedProcessUPID; // @synthesize delegatedProcessUPID=_delegatedProcessUPID;
- (void).cxx_destruct;
- (void)_updateTrafficRegistrationForIP:(const CDUnion_fab80606 *)arg1;
- (void)_updateTrafficRegistration;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_lowLatencySelfAddressString:(id *)arg1;
- (unsigned int)_getSockAddrInterfaceType:(const void *)arg1;
- (void)_serverRPConnectionHandleConnectionStarted:(id)arg1;
- (void)_serverRPConnectionHandleConnectionAccepted:(int)arg1;
- (void)_serverRPConnectionStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_clientRPConnectionStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)_clientRPConnectionPrepareResponse:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_clientRPConnectionPrepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)_serverUDPSocketStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_clientUDPSocketStartResponse:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_clientUDPSocketStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)_serverUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 peerIP:(CDUnion_fab80606)arg4 peerMACData:(id)arg5 usb:(BOOL)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)_serverUDPNWPathStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_clientUDPNWPathStartResponse:(id)arg1 options:(id)arg2 localEndpoint:(id)arg3 nwInterface:(id)arg4 selfIPString:(id)arg5 usb:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_clientUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 usb:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_clientUDPNWPathStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (BOOL)_startServerConnectionAndReturnError:(id *)arg1;
- (void)startServerConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateForServerRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)acceptedByServer;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

