//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext, NSDictionary, NSNumber, NSString, TKToken;
@protocol OS_dispatch_queue, OS_xpc_object, TKTokenSessionDelegate, TKTokenSessionPrivateDelegate;

@interface TKTokenSession : NSObject
{
    NSObject<OS_xpc_object> *_clientConnection;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_xpc_object> *_event;
    id _inputParameter2;
    TKToken *_token;
    id <TKTokenSessionDelegate> _delegate;
    LAContext *_LAContext;
    NSDictionary *_parameters;
    NSNumber *_callerPID;
}

@property(readonly) NSObject<OS_xpc_object> *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(retain) NSNumber *callerPID; // @synthesize callerPID=_callerPID;
@property(retain) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain) LAContext *LAContext; // @synthesize LAContext=_LAContext;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property __weak id <TKTokenSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) TKToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
- (void)terminate;
- (BOOL)handleOperation:(long long)arg1 auditToken:(CDStruct_6ad76789)arg2 event:(id)arg3 reply:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly) id inputParameter2;
- (BOOL)handleCopyIdentitiesEvent:(id)arg1 reply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)handleCopyItemsEvent:(id)arg1 reply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)handleControlEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)handleDeleteObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)handleUpdateObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 attributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)handleCreateObjectEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)completeReply:(id)arg1 objectID:(id)arg2 attributes:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)handlePerformOperationEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)handleReadDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)handleGetPublicKeyEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)handleGetObjectAccessControlEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)handleEvaluateAccessControlEvent:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 reply:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)evaluateAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 retry:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 auditToken:(CDStruct_6ad76789)arg3 reply:(CDUnknownBlockType)arg4;
- (void)auditAuthOperation:(id)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(BOOL)arg3 error:(id)arg4;
- (void)evaluateAuthOperation:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)endRequest;
- (BOOL)beginRequest:(long long)arg1 error:(id *)arg2;
- (void)controlWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateObject:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)createObjectWithAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getPublicKeyDataOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getDataOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getAccessControlOfObject:(id)arg1 reply:(CDUnknownBlockType)arg2;
@property(readonly) id <TKTokenSessionPrivateDelegate> privateDelegate;
- (void)assignClientConnection:(id)arg1;
- (id)initWithToken:(id)arg1;

@end

