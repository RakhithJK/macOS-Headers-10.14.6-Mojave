//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemAdministration/AdminAuthenticator.h>

@interface AdminDSAuthenticator : AdminAuthenticator
{
    BOOL _didClearTextAuthentication;
}

+ (id)sharedDSClearTextAuthenticator;
+ (id)sharedDSAuthenticator;
@property(readonly) BOOL didClearTextAuthentication; // @synthesize didClearTextAuthentication=_didClearTextAuthentication;
- (BOOL)authenticateUsingAuthorizationSync:(id)arg1;
- (void)deauthenticate;
- (void)authenticateUsingAuthorizationSync:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (void)authenticateUsingAuthorization:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (void)authenticateUsingAuthorization:(id)arg1;
- (void)finalize;
- (void)dealloc;

@end

