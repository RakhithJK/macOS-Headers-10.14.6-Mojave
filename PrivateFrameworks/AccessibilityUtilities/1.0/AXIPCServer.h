//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXIPCServerClientRegistrationDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface AXIPCServer : NSObject <AXIPCServerClientRegistrationDelegate>
{
    CDUnknownBlockType _defaultHandler;
    struct __CFRunLoopSource *_serverRunLoopSource;
    unsigned int _serverPort;
    NSMutableDictionary *_validSecurityTokens;
    NSMutableSet *_connectedClients;
    CDUnknownBlockType _clientInvalidationHandler;
    NSMutableDictionary *_entitlements;
    unsigned int _assignedServerPort;
    unsigned int _customQueueSize;
    BOOL _running;
    BOOL _perPidService;
    NSString *_serviceName;
    NSMutableDictionary *_handlers;
}

@property(nonatomic) BOOL perPidService; // @synthesize perPidService=_perPidService;
@property(readonly, nonatomic) unsigned int machPort; // @synthesize machPort=_serverPort;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
- (void).cxx_destruct;
- (id)_clientIdentificationForAuditToken:(CDStruct_4c969caf)arg1;
- (BOOL)_handleErrorWithMessage:(id)arg1 outError:(id *)arg2;
- (void)_handleIncomingMessage:(id)arg1 securityToken:(CDStruct_52eb0d21)arg2 auditToken:(CDStruct_4c969caf)arg3 clientPort:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleClientRegistration:(id)arg1;
- (void)serverClientRegistrationInvalidated:(id)arg1;
- (void)_startServerThread;
- (void)_applyCustomQueueSize;
- (void)_handleClientInvalidation:(unsigned int)arg1;
- (void)setQueueSize:(unsigned int)arg1;
- (BOOL)__slowpath__clientWithAuditToken:(CDStruct_4c969caf)arg1 hasRequiredEntitlementFromSet:(id)arg2;
- (BOOL)_clientWithPort:(unsigned int)arg1 auditToken:(CDStruct_4c969caf)arg2 hasAnyEntitlementRequiredForMessage:(id)arg3;
- (void)removePossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)addPossibleRequiredEntitlement:(id)arg1 forMessageWithKey:(int)arg2;
- (void)removeAllHandlersForTarget:(id)arg1;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 forKey:(int)arg4 possibleRequiredEntitlements:(id)arg5;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3 possibleRequiredEntitlements:(id)arg4;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 async:(BOOL)arg3 forKey:(int)arg4;
- (void)setHandlerWithTarget:(id)arg1 selector:(SEL)arg2 forKey:(int)arg3;
- (void)_addPossibleRequiredEntitlementsToMessageWithKey:(int)arg1 first:(id)arg2 vothers:(struct __va_list_tag [1])arg3;
- (void)_registerContext:(id)arg1 forKey:(int)arg2;
- (void)removeHandlerForKey:(int)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1 forKey:(int)arg2;
- (BOOL)stopServerWithError:(id *)arg1;
- (BOOL)startServerWithError:(id *)arg1;
@property(copy, nonatomic) CDUnknownBlockType clientInvalidationCallback;
@property(copy, nonatomic) CDUnknownBlockType defaultHandler;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPort:(unsigned int)arg1 serviceRunLoopSource:(struct __CFRunLoopSource *)arg2;
- (id)initWithServiceName:(id)arg1 perPidService:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

