//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUMobileDevice, CUMobileDeviceDiscovery;

__attribute__((visibility("hidden")))
@interface CUMobileDeviceMonitorContext : NSObject
{
    CUMobileDevice *_device;
    CUMobileDeviceDiscovery *_discovery;
}

@property(retain, nonatomic) CUMobileDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) CUMobileDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;

@end

