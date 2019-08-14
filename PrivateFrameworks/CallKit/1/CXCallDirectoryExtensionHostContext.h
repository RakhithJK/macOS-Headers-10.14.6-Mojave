//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <CallKit/CXCallDirectoryProviderHostProtocol-Protocol.h>

@class NSObject, NSString;
@protocol CXCallDirectoryProviderHostProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallDirectoryExtensionHostContext : NSExtensionContext <CXCallDirectoryProviderHostProtocol>
{
    id <CXCallDirectoryProviderHostProtocol> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CXCallDirectoryProviderHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)completeRequestWithReply:(CDUnknownBlockType)arg1;
- (oneway void)removeAllIdentificationEntriesWithReply:(CDUnknownBlockType)arg1;
- (oneway void)removeIdentificationEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)addIdentificationEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)removeAllBlockingEntriesWithReply:(CDUnknownBlockType)arg1;
- (oneway void)removeBlockingEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)addBlockingEntriesWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)isIncrementalLoadingAllowed:(CDUnknownBlockType)arg1;
- (void)requestFailedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)activate;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

