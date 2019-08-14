//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSProtocolChecker, NSString;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject
{
    id _internal;
}

+ (void)initialize;
+ (void)_unregisterIMLocalObject:(id)arg1;
+ (void)_registerIMLocalObject:(id)arg1;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)arg1;
+ (void)_setExceptionHandlingDisabled:(BOOL)arg1;
+ (id)_imLocalObjectQueue;
- (id)description;
- (void)invalidate;
@property(retain, nonatomic) NSArray *whitelistedClasses;
@property(readonly, nonatomic) BOOL isValid;
- (BOOL)isValidSelector:(SEL)arg1;
- (void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3;
- (void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2;
- (void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2;
- (void)_enqueueInvocation:(id)arg1;
- (void)_popInvocation;
- (id)_peekInvocation;
- (void)_noteNewInvocation;
- (void)_handleNewInvocations;
- (BOOL)handleInvocation:(id)arg1;
- (BOOL)_handleInvocation:(id)arg1;
- (void)_handleInvocationForSendMessage:(id)arg1;
- (id)_currentMessageContext;
@property(retain, nonatomic) NSString *processName;
- (void)setPortName:(id)arg1;
@property(readonly, nonatomic) NSString *portName;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)_systemShutdown:(id)arg1;
- (void)terminated;
- (void)_portDidBecomeInvalid;
- (void)_portInterrupted;
- (void)_cancelHandlerCompleted;
- (void)dealloc;
- (void)_clearPort:(BOOL)arg1 signalRunLoopIfNeeded:(BOOL)arg2;
- (void)_clearPort:(BOOL)arg1;
@property(readonly, nonatomic) NSProtocolChecker *protocolChecker;
@property(nonatomic) id target;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 offMainThread:(BOOL)arg5;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end

