//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary;

@protocol _RWIRelayToClientMessageReceiver
- (void)_rpc_requestDriverStateChange:(NSDictionary *)arg1;
- (void)_rpc_reportConnectedDriverList:(NSDictionary *)arg1;
- (void)_rpc_driverDisconnected:(NSDictionary *)arg1;
- (void)_rpc_driverUpdated:(NSDictionary *)arg1;
- (void)_rpc_driverConnected:(NSDictionary *)arg1;
- (void)_rpc_reportAutomaticInspectionCandidate:(NSDictionary *)arg1;
- (void)_rpc_reportSetup:(NSDictionary *)arg1;
- (void)_rpc_reportConnectedApplicationList:(NSDictionary *)arg1;
- (void)_rpc_applicationSentData:(NSDictionary *)arg1;
- (void)_rpc_applicationSentListing:(NSDictionary *)arg1;
- (void)_rpc_applicationDisconnected:(NSDictionary *)arg1;
- (void)_rpc_applicationUpdated:(NSDictionary *)arg1;
- (void)_rpc_applicationConnected:(NSDictionary *)arg1;
@end
