//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemWebDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceLimitAdTracking;
    NSNumber *_payloadSafariAllowAutoFill;
    NSNumber *_payloadSafariForceFraudWarning;
    NSNumber *_payloadSafariAllowJavaScript;
    NSNumber *_payloadSafariAllowPopups;
    NSNumber *_payloadSafariAcceptCookies;
    NSNumber *_payloadForceAuthenticationBeforeAutoFill;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withForceLimitAdTracking:(id)arg2 withSafariAllowAutoFill:(id)arg3 withSafariForceFraudWarning:(id)arg4 withSafariAllowJavaScript:(id)arg5 withSafariAllowPopups:(id)arg6 withSafariAcceptCookies:(id)arg7 withForceAuthenticationBeforeAutoFill:(id)arg8;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadForceAuthenticationBeforeAutoFill; // @synthesize payloadForceAuthenticationBeforeAutoFill=_payloadForceAuthenticationBeforeAutoFill;
@property(copy, nonatomic) NSNumber *payloadSafariAcceptCookies; // @synthesize payloadSafariAcceptCookies=_payloadSafariAcceptCookies;
@property(copy, nonatomic) NSNumber *payloadSafariAllowPopups; // @synthesize payloadSafariAllowPopups=_payloadSafariAllowPopups;
@property(copy, nonatomic) NSNumber *payloadSafariAllowJavaScript; // @synthesize payloadSafariAllowJavaScript=_payloadSafariAllowJavaScript;
@property(copy, nonatomic) NSNumber *payloadSafariForceFraudWarning; // @synthesize payloadSafariForceFraudWarning=_payloadSafariForceFraudWarning;
@property(copy, nonatomic) NSNumber *payloadSafariAllowAutoFill; // @synthesize payloadSafariAllowAutoFill=_payloadSafariAllowAutoFill;
@property(copy, nonatomic) NSNumber *payloadForceLimitAdTracking; // @synthesize payloadForceLimitAdTracking=_payloadForceLimitAdTracking;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
