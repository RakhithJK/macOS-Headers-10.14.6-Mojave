//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, RPPeopleDiscovery;

@protocol RPPeopleXPCDaemonInterface
- (void)xpcPeopleDiscoveryUpdate:(RPPeopleDiscovery *)arg1;
- (void)xpcPeopleDiscoveryActivate:(RPPeopleDiscovery *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)xpcPeopleRemoveAppleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcPeopleAddAppleID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
@end

