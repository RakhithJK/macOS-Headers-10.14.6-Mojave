//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

__attribute__((visibility("hidden")))
@interface RPDeviceContext : NSObject
{
    BOOL _reported;
    int _state;
    RPDevice *_device;
    RPLegacyDeviceDiscovery *_discovery;
    RPLegacySession *_session;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) RPLegacySession *session; // @synthesize session=_session;
@property(nonatomic) BOOL reported; // @synthesize reported=_reported;
@property(retain, nonatomic) RPLegacyDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) RPDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;
- (void)pairVerify;
- (void)invalidate;

@end

