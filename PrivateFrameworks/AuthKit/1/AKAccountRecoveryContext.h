//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAppleIDAuthenticationContext, NSString, NSURL;

@interface AKAccountRecoveryContext : NSObject <NSSecureCoding>
{
    BOOL _supportsMasterKeyRecovery;
    NSString *_encodedRecoveryIdentityToken;
    NSString *_encodedRecoveryPET;
    NSURL *_recoveryContinuationURL;
    AKAppleIDAuthenticationContext *_authContext;
}

+ (BOOL)supportsSecureCoding;
+ (id)recoveryContextWithServerInfo:(id)arg1;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // @synthesize authContext=_authContext;
@property(copy, nonatomic) NSURL *recoveryContinuationURL; // @synthesize recoveryContinuationURL=_recoveryContinuationURL;
@property(copy, nonatomic) NSString *encodedRecoveryPET; // @synthesize encodedRecoveryPET=_encodedRecoveryPET;
@property(copy, nonatomic) NSString *encodedRecoveryIdentityToken; // @synthesize encodedRecoveryIdentityToken=_encodedRecoveryIdentityToken;
@property(nonatomic) BOOL supportsMasterKeyRecovery; // @synthesize supportsMasterKeyRecovery=_supportsMasterKeyRecovery;
- (void).cxx_destruct;
- (BOOL)isValid;
@property(readonly, nonatomic) NSString *decodedRecoveryPETString;
@property(readonly, nonatomic) NSString *decodedRecoveryIdentityTokenString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

