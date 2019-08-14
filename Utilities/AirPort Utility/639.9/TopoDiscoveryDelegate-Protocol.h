//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDictionary, NSString, TopoAirPortDeviceNode, TopoNode;

@protocol TopoDiscoveryDelegate

@optional
- (void)topologyRemoteAirPortNodeWasRemoved:(TopoAirPortDeviceNode *)arg1 fromConfigureOther:(BOOL)arg2;
- (void)topologyRemoteAirPortNodeWasAdded:(TopoAirPortDeviceNode *)arg1 fromConfigureOther:(BOOL)arg2;
- (void)topologyUnconfiguredAirPortNodeWasRemoved:(TopoAirPortDeviceNode *)arg1 unconfiguredNodes:(NSDictionary *)arg2;
- (void)topologyUnconfiguredAirPortNodeWasAdded:(TopoAirPortDeviceNode *)arg1 unconfiguredNodes:(NSDictionary *)arg2;
- (void)topologyNoDevicesFoundYet;
- (void)topologyNetworkInterfaceRemoved:(NSString *)arg1;
- (void)topologyNetworkInterfaceAdded:(NSString *)arg1 displayName:(NSString *)arg2;
- (void)topologyDestroyEntireTree;
- (void)topologyNodeWillBeDeleted:(TopoNode *)arg1 treeRoot:(TopoNode *)arg2;
- (void)topologyNodeHasGoneMissing:(TopoNode *)arg1 treeRoot:(TopoNode *)arg2;
- (void)topologyNodeWasChanged:(TopoNode *)arg1 treeRoot:(TopoNode *)arg2;
- (void)topologyNodeHadReadError:(TopoNode *)arg1 status:(int)arg2;
- (void)topologyNodeHadWriteError:(TopoNode *)arg1 status:(int)arg2;
- (void)topologyNodeHadTaskError:(TopoNode *)arg1 taskCode:(unsigned int)arg2 status:(int)arg3;
- (BOOL)topologyOkToRunDiscovery;
- (void)topologyNodeDiscoveryComplete:(TopoNode *)arg1;
- (void)topologyNodeWasAdded:(TopoNode *)arg1 treeRoot:(TopoNode *)arg2;
@end

