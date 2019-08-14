//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface BCOAuth2Parameters : NSObject <NSSecureCoding>
{
    NSString *_clientIdentifier;
    NSString *_clientSecret;
    NSArray *_scope;
    NSString *_state;
    NSString *_responseType;
    NSString *_responseEncryptionKey;
    NSURL *_authorizationURL;
    NSURL *_accessTokenURL;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSURL *accessTokenURL; // @synthesize accessTokenURL=_accessTokenURL;
@property(retain, nonatomic) NSURL *authorizationURL; // @synthesize authorizationURL=_authorizationURL;
@property(retain, nonatomic) NSString *responseEncryptionKey; // @synthesize responseEncryptionKey=_responseEncryptionKey;
@property(retain, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)tokenExchangeURLWith:(id)arg1;
- (id)authenticationSessionURL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

