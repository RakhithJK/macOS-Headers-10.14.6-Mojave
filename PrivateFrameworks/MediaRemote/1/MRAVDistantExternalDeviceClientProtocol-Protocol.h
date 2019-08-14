//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class MRAVDistantEndpoint, NSData, NSError, NSString;

@protocol MRAVDistantExternalDeviceClientProtocol <NSObject>
- (void)hostedExternalDeviceEndpointDidChange:(MRAVDistantEndpoint *)arg1;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(NSString *)arg2 forOutputDeviceWithIdentifier:(NSString *)arg3;
- (void)hostedExternalDeviceDidReceiveCustomData:(NSData *)arg1 withName:(NSString *)arg2;
- (void)hostedExternalDeviceNameDidChange:(NSString *)arg1;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(NSError *)arg2;

@optional
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forEndpointWithIdentifier:(NSString *)arg2 forOutputDeviceWithIdentifier:(NSString *)arg3;
@end
