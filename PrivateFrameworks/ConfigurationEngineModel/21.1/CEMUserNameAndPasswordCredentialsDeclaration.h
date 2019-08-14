//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase
{
    NSString *_payloadUserName;
    NSString *_payloadPassword;
}

+ (id)buildRequiredOnlyWithUserName:(id)arg1 withPassword:(id)arg2;
+ (id)buildWithUserName:(id)arg1 withPassword:(id)arg2;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUserName; // @synthesize payloadUserName=_payloadUserName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

