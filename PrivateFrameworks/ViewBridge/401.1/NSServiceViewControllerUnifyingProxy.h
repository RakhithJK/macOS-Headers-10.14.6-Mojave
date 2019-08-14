//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@protocol NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSServiceViewControllerUnifyingProxy : NSProxy
{
    NSProxy<NSXPCProxyCreating> *_clientProxy;
    NSProxy<NSXPCProxyCreating> *_animationSyncProxy;
    struct os_unfair_lock_s _retainReleaseLock;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithClientProxy:(id)arg1 andAnimationSyncProxy:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;

@end

