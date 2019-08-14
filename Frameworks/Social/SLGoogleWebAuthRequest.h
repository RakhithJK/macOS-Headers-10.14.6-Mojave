//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/SLWebAuthRequest-Protocol.h>

@class NSString;

@interface SLGoogleWebAuthRequest : NSObject <SLWebAuthRequest>
{
}

+ (id)authCodeFromRedirectURL:(id)arg1;
+ (id)authCodeFromWebPageTitle:(id)arg1;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)urlRequestForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+ (id)requestForURL:(id)arg1;
+ (id)_parametersForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 codeChallenge:(id)arg5;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5 codeChallenge:(id)arg6;
+ (id)urlForClientID:(id)arg1 redirectURI:(id)arg2 scope:(id)arg3 username:(id)arg4 authRequestURL:(id)arg5;
+ (void)clearCookiesFromStorage:(id)arg1 authRequestURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

