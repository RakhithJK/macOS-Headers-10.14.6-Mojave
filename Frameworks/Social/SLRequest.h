//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL, OACredential, SLService;

@interface SLRequest : NSObject
{
    ACAccount *_account;
    OACredential *_OAuthCredential;
    long long _requestMethod;
    NSURL *_url;
    NSMutableDictionary *_parameters;
    NSMutableArray *_multiParts;
    NSString *_multiPartBoundary;
    int _callingPID;
    NSString *_applicationID;
    NSString *_contentType;
    NSData *_payload;
    unsigned long long _networkServiceType;
    SLService *_service;
    struct OpaqueCFHTTPCookieStorage *_privateCookieStorage;
}

+ (id)requestForServiceType:(id)arg1 requestMethod:(long long)arg2 URL:(id)arg3 parameters:(id)arg4;
@property(readonly, nonatomic) long long requestMethod; // @synthesize requestMethod=_requestMethod;
@property(readonly, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (void).cxx_destruct;
- (unsigned long long)networkServiceType;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setPayload:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)performJSONRequestWithHandler:(CDUnknownBlockType)arg1;
- (void)performJSONRequestWithHandler:(CDUnknownBlockType)arg1 retryCount:(int)arg2;
- (id)_commandName;
- (BOOL)_shouldRetryAfterCount:(int)arg1 delay:(float *)arg2;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)dictionaryRepresentationForJSONSerialization;
- (id)preparedURLRequest;
- (id)_HTTPMethodName;
- (id)_preparedURL;
- (BOOL)shouldIncludeParameterString;
- (BOOL)_requiresAuthorization;
- (id)_parameterString;
- (void)_addAuthenticationParameters:(id)arg1;
- (BOOL)_shouldAppendTencentWeiboParametersToRequest;
- (BOOL)_shouldAppendLinkedInChildAccessTokenToRequest;
- (id)_allParameters;
- (void)_appendCoreSig1Signature;
- (void)setApplicationID:(id)arg1;
- (int)callingPID;
- (void)setCallingPID:(int)arg1;
- (id)OAuthCredential;
- (void)setOAuthCredential:(id)arg1;
@property(retain, nonatomic) ACAccount *account;
- (id)completeMultiParts;
- (id)multiPartBodyData;
- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 filename:(id)arg4;
- (void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3;
- (void)addMultiPart:(id)arg1;
- (id)multiParts;
- (void)setMultiPartBoundary:(id)arg1;
- (id)multiPartBoundary;
- (id)_urlEncodedString:(id)arg1;
- (id)parameterForKey:(id)arg1;
- (void)removeParameterForKey:(id)arg1;
- (void)setParameterValue:(id)arg1 forKey:(id)arg2;
- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4;
- (id)init;

@end

