//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencePanes/NSAdminPrefAuthenticator-Protocol.h>

@class NSMutableArray, NSString;

@interface NSAdminMultiAuthenticator : NSObject <NSAdminPrefAuthenticator>
{
    NSMutableArray *mAuthenticators;
}

+ (id)multiAuthenticator;
- (void).cxx_destruct;
- (void)authenticateUsingAuthorization:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (BOOL)isAuthenticated;
- (void)deauthenticate;
- (void)authenticateUsingAuthorization:(id)arg1;
- (void)removeAuthenticator:(id)arg1;
- (void)addAuthenticator:(id)arg1;
- (BOOL)wantsClearTextAuthentication;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

