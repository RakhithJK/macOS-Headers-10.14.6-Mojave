//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface AMSAuthenticateOptions : NSObject <NSCopying>
{
    unsigned long long _authenticationType;
    BOOL _allowServerDialogs;
    BOOL _canMakeAccountActive;
    BOOL _allowSecondaryCredentialSource;
    BOOL _remoteProxyAuthentication;
    NSDictionary *_createAccountQueryParams;
    NSString *_defaultButtonString;
    NSString *_logKey;
    id _presentingViewController;
    NSString *_promptTitle;
    NSString *_proxyAppBundleID;
    NSString *_proxyAppName;
    NSString *_reason;
    NSString *_userAgent;
    unsigned long long _credentialSource;
    NSString *_mediaType;
}

@property(readonly, getter=isRemoteProxyAuthentication) BOOL remoteProxyAuthentication; // @synthesize remoteProxyAuthentication=_remoteProxyAuthentication;
@property(retain) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property BOOL allowSecondaryCredentialSource; // @synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource;
@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) NSString *reason; // @synthesize reason=_reason;
@property(retain) NSString *proxyAppName; // @synthesize proxyAppName=_proxyAppName;
@property(retain) NSString *proxyAppBundleID; // @synthesize proxyAppBundleID=_proxyAppBundleID;
@property(retain) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
@property(retain) id presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property(retain) NSDictionary *createAccountQueryParams; // @synthesize createAccountQueryParams=_createAccountQueryParams;
@property BOOL canMakeAccountActive; // @synthesize canMakeAccountActive=_canMakeAccountActive;
@property BOOL allowServerDialogs; // @synthesize allowServerDialogs=_allowServerDialogs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property unsigned long long authenticationType;
@property(readonly) NSDictionary *optionsDictionaryForRemoteProxyAuthentication;
- (id)optionsDictionary;
@property(readonly) BOOL allowSilentAuthentication;
- (id)initWithOptionsDictionary:(id)arg1;
- (id)init;

@end

