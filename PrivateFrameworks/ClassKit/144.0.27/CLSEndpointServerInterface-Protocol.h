//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ClassKit/CLSDataServerInterface-Protocol.h>
#import <ClassKit/CLSUtilityServerInterface-Protocol.h>

@class NSString;

@protocol CLSEndpointServerInterface <CLSDataServerInterface, CLSUtilityServerInterface>
- (oneway void)remote_accountChanged;
- (oneway void)remote_deleteAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (oneway void)remote_setOverrideBundleIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (oneway void)remote_listAppsWithCompletion:(void (^)(id, id, NSError *))arg1;
@end

