//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFNetService, _HMFNetServiceMonitor;

@protocol _HMFNetServiceMonitorDelegate <NSObject>

@optional
- (void)monitor:(_HMFNetServiceMonitor *)arg1 didUpdateReachability:(BOOL)arg2;
- (void)monitor:(_HMFNetServiceMonitor *)arg1 didUpdateNetService:(HMFNetService *)arg2;
@end
