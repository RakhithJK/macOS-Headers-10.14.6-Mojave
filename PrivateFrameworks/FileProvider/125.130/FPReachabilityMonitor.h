//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPReachabilityMonitor : NSObject
{
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability *_reachabilityRef;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedReachabilityMonitor;
+ (BOOL)isNetworkReachableForFlags:(unsigned int)arg1;
@property(nonatomic) unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isNetworkReachableForBundle:(id)arg1;
- (void)dealloc;
- (id)init;

@end
