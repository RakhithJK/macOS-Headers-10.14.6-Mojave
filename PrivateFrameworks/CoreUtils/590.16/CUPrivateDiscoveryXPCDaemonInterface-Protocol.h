//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CUPrivateDiscoveryAdvertiser, CUPrivateDiscoveryBrowser;

@protocol CUPrivateDiscoveryXPCDaemonInterface
- (void)xpcPrivateDiscoveryBrowserActivate:(CUPrivateDiscoveryBrowser *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcPrivateDiscoveryAdvertiserActivate:(CUPrivateDiscoveryAdvertiser *)arg1 completion:(void (^)(NSError *))arg2;
@end

