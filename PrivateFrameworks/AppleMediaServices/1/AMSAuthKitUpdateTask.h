//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AKAppleIDAuthenticationDelegate-Protocol.h>

@class ACAccount, ACDAccountStore, AMSAuthenticateOptions, NSString;

@interface AMSAuthKitUpdateTask : AMSTask <AKAppleIDAuthenticationDelegate>
{
    ACAccount *_account;
    ACDAccountStore *_accountStore;
    AMSAuthenticateOptions *_options;
}

+ (id)_createAuthenticationController;
+ (id)_createAuthenticationContextForAccount:(id)arg1 options:(id)arg2;
@property(retain) AMSAuthenticateOptions *options; // @synthesize options=_options;
@property(retain) ACDAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)_performAuthKitUpdateByPromptingUserForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateUsingSecondaryPasswordForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateUsingRawPasswordForAccount:(id)arg1 options:(id)arg2;
- (id)_performAuthKitUpdateSilentlyForAccount:(id)arg1 options:(id)arg2;
- (id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)performAuthKitUpdate;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
