//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ExchangeOAuthRequest : NSObject
{
}

+ (id)authCodeFromURL:(id)arg1;
+ (BOOL)urlPageWillContainAuthorizationCode:(id)arg1;
+ (id)requestForURL:(id)arg1;
+ (id)urlForOAuthURI:(id)arg1 clientID:(id)arg2 redirectURI:(id)arg3 scope:(id)arg4 username:(id)arg5 resource:(id)arg6;

@end

