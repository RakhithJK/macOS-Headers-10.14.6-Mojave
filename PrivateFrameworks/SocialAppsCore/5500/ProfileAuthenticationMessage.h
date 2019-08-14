//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialAppsCore/ProfileMessage.h>

#import <SocialAppsCore/NSCopying-Protocol.h>

@class NSString;

@interface ProfileAuthenticationMessage : ProfileMessage <NSCopying>
{
    NSString *_username;
    NSString *_password;
    NSString *_responseProfileID;
    NSString *_responseAuthToken;
}

@property(copy) NSString *responseAuthorizationToken; // @synthesize responseAuthorizationToken=_responseAuthToken;
@property(copy) NSString *responseProfileID; // @synthesize responseProfileID=_responseProfileID;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)requiredKeys;
- (id)bagKey;
- (BOOL)payloadCanBeLogged;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
