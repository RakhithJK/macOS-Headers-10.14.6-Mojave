//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol KernelExtensionPolicyAPI
- (void)copyPendingApprovalsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)copyCurrentPolicyWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)removeMDMPayload:(NSString *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)installMDMPayload:(NSString *)arg1 withTeams:(NSArray *)arg2 andExtensions:(NSDictionary *)arg3 withReply:(void (^)(BOOL, NSError *))arg4;
- (void)setUserApprovalAllowed:(BOOL)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)updatePolicyItems:(NSArray *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)teamIdentifierIsAllowed:(NSString *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)canLoadKernelExtensionInCache:(NSString *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
- (void)canLoadKernelExtension:(NSString *)arg1 withReply:(void (^)(BOOL, NSError *))arg2;
@end

