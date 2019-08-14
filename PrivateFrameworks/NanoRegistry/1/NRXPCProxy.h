//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NRNSXPCConnectionProtocol, NRXPCProxyDelegate;

@interface NRXPCProxy : NSObject
{
    id <NRXPCProxyDelegate> _delegate;
    unsigned int _entitlementBitmask;
    BOOL _invalidated;
    BOOL _monitorClientForSuspension;
    NSString *_appPath;
    id _target;
    id <NRNSXPCConnectionProtocol> _connection;
}

+ (BOOL)requireAnEntitlement;
+ (id)entitlements;
+ (id)clientRemoteObjectInterface;
+ (id)clientExportedInterface;
+ (id)serverRemoteObjectInterface;
+ (id)serverExportedInterface;
+ (id)machServiceName;
@property(nonatomic) BOOL monitorClientForSuspension; // @synthesize monitorClientForSuspension=_monitorClientForSuspension;
@property(readonly, nonatomic) id <NRNSXPCConnectionProtocol> connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
- (void).cxx_destruct;
- (void)_invalidate;
@property(readonly, nonatomic) id remoteObjectProxy;
- (BOOL)hasEntitlements;
- (BOOL)hasEntitlement:(id)arg1;
@property(readonly, nonatomic) NSString *appPath; // @synthesize appPath=_appPath;
@property(readonly, nonatomic) int pid;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 xpcTarget:(id)arg3 entitlementBitmask:(unsigned int)arg4;

@end

