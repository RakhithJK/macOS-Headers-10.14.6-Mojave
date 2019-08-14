//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDFMMAccountInfo, FMNSXPCConnection;

@interface FMDFMMManager : NSObject
{
    struct AuthorizationOpaqueRef *_authRef;
    FMNSXPCConnection *_disableFMMConnection;
    FMDFMMAccountInfo *_cachedAccountInfo;
}

+ (id)sharedInstance;
@property(retain) FMDFMMAccountInfo *cachedAccountInfo; // @synthesize cachedAccountInfo=_cachedAccountInfo;
@property(retain, nonatomic) FMNSXPCConnection *disableFMMConnection; // @synthesize disableFMMConnection=_disableFMMConnection;
@property(nonatomic) struct AuthorizationOpaqueRef *authRef; // @synthesize authRef=_authRef;
- (void).cxx_destruct;
- (void)didReceiveLostModeExitAuthToken:(id)arg1;
- (BOOL)needsLostModeExitAuth;
- (void)initiateLostModeExitAuthWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldResumeCardsForUser:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_adminAuthDataForRight:(const char *)arg1;
- (void)_createAuthRight;
- (id)newErrorForCode:(int)arg1 message:(id)arg2;
- (id)_genericErrorForDisableContext:(unsigned long long)arg1;
- (void)_invalidateDisableFMMConnection;
- (void)_storeDisableFMMConnection:(id)arg1;
- (void)disableFMMUsingToken:(id)arg1 inContext:(unsigned long long)arg2 usingCallback:(CDUnknownBlockType)arg3;
- (void)clearFMMAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)retrieveFMMAccount:(id *)arg1;
- (id)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2;
- (id)removeFMMAccountWithUsername:(id)arg1;
- (id)addFMMAccount:(id)arg1;
- (BOOL)isFMMEnabled;
- (void)retrieveFMMAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFMMAccountWithUsername:(id)arg1 authRight:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeFMMAccountWithUsername:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFMMAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)dealloc;
- (id)init;

@end

