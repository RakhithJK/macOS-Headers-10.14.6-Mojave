//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol UAResumableActivitiesSysdiagnoseSupportProtocol <NSObject>
- (void)doCopyRecentActions:(NSDictionary *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doGetSysdiagnoseStringsIncludingPrivateData:(BOOL)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)doNOP:(NSString *)arg1 withCompletionHandler:(void (^)(NSString *, NSError *))arg2;
@end
