//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSString *outputDeviceUID;
@property(readonly, nonatomic) NSString *endpointUID;
@property(readonly, nonatomic) unsigned int capabilities;
- (id)initWithCapabilities:(unsigned int)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;

@end
