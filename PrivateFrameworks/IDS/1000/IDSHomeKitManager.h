//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSString, _IDSGenericCompletionHandler;

@interface IDSHomeKitManager : NSObject <IDSDaemonListenerProtocol>
{
    _IDSGenericCompletionHandler *_getServiceUserIDsCompletion;
    _IDSGenericCompletionHandler *_getAdminAccessTokensCompletion;
    _IDSGenericCompletionHandler *_getConsentTokensCompletion;
    _IDSGenericCompletionHandler *_getUserAccessTokensCompletion;
    _IDSGenericCompletionHandler *_refreshUserAccessTokensCompletion;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)refreshUserAccessTokens:(id)arg1 error:(id)arg2;
- (void)userAccessTokens:(id)arg1 error:(id)arg2;
- (void)consentTokens:(id)arg1 error:(id)arg2;
- (void)adminAccessTokens:(id)arg1 error:(id)arg2;
- (void)serviceUserIDs:(id)arg1 error:(id)arg2;
- (void)refreshUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 accessoryRequests:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)getUserAccessTokensWithServiceUserID:(id)arg1 userID:(id)arg2 userHandle:(id)arg3 accessoryRequests:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 queue:(id)arg6;
- (void)getConsentTokensWithServiceUserID:(id)arg1 accessoryIDs:(id)arg2 adminID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)getAdminAccessTokensWithWithServiceUserID:(id)arg1 accessoryID:(id)arg2 pairingToken:(id)arg3 completionBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (void)getServiceUserIDsWithCompletionBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

