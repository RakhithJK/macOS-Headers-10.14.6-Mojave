//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NCNotificationCenterMenu-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface NCMenuConnection : NSObject <NSXPCListenerDelegate, NCNotificationCenterMenu>
{
    NSXPCListener *_listener;
}

- (void).cxx_destruct;
- (void)ncMenuDNDToggle;
- (void)ncMenuMouseUp;
- (void)ncMenuMouseDown;
- (void)ncMenugetInitialState:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
