//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>

@class HMFNetAddress, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue, _HMFCFHTTPServerConnectionDelegate;

@interface _HMFCFHTTPServerConnection : HMFObject <HMFLogging>
{
    id <_HMFCFHTTPServerConnectionDelegate> _delegate;
    HMFNetAddress *_address;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSMutableArray *_pendingRequests;
    NSMutableArray *_pendingRespones;
    struct _CFHTTPServerConnection *_internal;
}

+ (id)logCategory;
@property(readonly, nonatomic) struct _CFHTTPServerConnection *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) NSMutableArray *pendingRespones; // @synthesize pendingRespones=_pendingRespones;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) HMFNetAddress *address; // @synthesize address=_address;
@property __weak id <_HMFCFHTTPServerConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)_handleCompletedResponse:(struct _CFHTTPServerResponse *)arg1 error:(id)arg2;
- (void)sendResponse:(id)arg1;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3;
- (void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2;
- (void)handleRequest:(id)arg1 bodyReadStream:(struct __CFReadStream *)arg2 eventType:(unsigned long long)arg3;
- (void)_stopReadBody:(id)arg1;
- (void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2;
- (void)_handleRecievedRequestRef:(struct _CFHTTPServerRequest *)arg1;
- (void)close;
- (BOOL)open;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithConnectionRef:(struct _CFHTTPServerConnection *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

