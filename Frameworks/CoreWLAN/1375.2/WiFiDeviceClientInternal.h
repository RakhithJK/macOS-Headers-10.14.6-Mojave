//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CWInterface, NSString, WiFiManagerClientInternal;

__attribute__((visibility("hidden")))
@interface WiFiDeviceClientInternal : NSObject
{
    NSString *_interfaceName;
    WiFiManagerClientInternal *_internalClient;
    struct WiFiDeviceClientInternalCallbacks _callbacks;
}

@property(readonly) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(readonly) WiFiManagerClientInternal *internalClient; // @synthesize internalClient=_internalClient;
- (void)dealloc;
- (id)initWithClient:(id)arg1 interfaceName:(id)arg2;
@property struct WiFiDeviceClientInternalCallbacks *callbacks; // @dynamic callbacks;
@property(readonly) CWInterface *interface; // @dynamic interface;

@end

