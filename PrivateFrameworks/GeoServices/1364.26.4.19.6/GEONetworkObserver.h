//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GEONetworkObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
    unsigned int _networkReachability;
    struct __SCNetworkReachability *_networkReach;
    BOOL _initialized;
    BOOL _networkNotified;
    BOOL _networkReachable;
}

+ (id)sharedNetworkObserver;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (BOOL)isCellConnection;
- (void)removeNetworkReachableObserver:(id)arg1;
- (void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2;
- (BOOL)isConnectionRequired;
- (BOOL)isNetworkReachable;
- (void)initializeIfNecessary;
- (void)_networkReachableCallBack:(unsigned int)arg1;
- (void)_networkObserversInitialize;
- (void)dealloc;
- (id)init;

@end

