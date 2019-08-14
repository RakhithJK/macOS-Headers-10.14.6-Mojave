//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBrightness/NSXPCListenerDelegate-Protocol.h>

@class BLControl, NSMutableDictionary, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate>
{
    BLControl *bl;
    CDUnknownBlockType _callback;
    float _cachedSlider;
    NSXPCListener *_listener;
    NSMutableDictionary *_clients;
    NSMutableDictionary *_clientsProps;
    NSMutableDictionary *_ownedProps;
}

- (void)undoOwnedPropertiesForClient:(id)arg1;
- (void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAlsSupported;
- (id)copyPropertyForKey:(id)arg1 client:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)setNotificationProperties:(id)arg1 forClient:(id)arg2;
- (id)init;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (void)destroyServer;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (void)clientConnectedWithExpObj:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

