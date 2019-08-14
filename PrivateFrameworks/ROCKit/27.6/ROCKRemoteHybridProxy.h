//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ROCKit/ROCKRemoteProxy.h>

#import <ROCKit/ROCKMemoizable-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue, ROCKMemoizable;

__attribute__((visibility("hidden")))
@interface ROCKRemoteHybridProxy : ROCKRemoteProxy <ROCKMemoizable>
{
    id <ROCKMemoizable> _memoizedInstance;
}

+ (id)remoteProxyWithSessionManager:(id)arg1 xpcDictionary:(id)arg2;
@property(retain, nonatomic) id <ROCKMemoizable> memoizedInstance; // @synthesize memoizedInstance=_memoizedInstance;
- (void).cxx_destruct;
- (id)initWithSessionManager:(id)arg1 xpcDictionary:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *memoizableSerializerQueue;
@property(readonly) Class superclass;

@end

