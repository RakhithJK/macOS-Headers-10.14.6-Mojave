//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterFoundation/GKLinkedAccountsService-Protocol.h>

@protocol GKLinkedAccountsServicePrivate <GKLinkedAccountsService>
- (oneway void)notifyAvailableExternalServicesWithHandler:(void (^)(BOOL, NSError *))arg1;
- (oneway void)getAuthTokenForExternalService:(BOOL)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)availableExternalServicesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)disconnectExternalService:(BOOL)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)connectExternalService:(BOOL)arg1 handler:(void (^)(NSError *))arg2;
@end
