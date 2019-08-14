//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDSFoundation/IDSMPIdentity.h>

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@interface IDSMPFullLegacyIdentity : IDSMPIdentity <NSSecureCoding>
{
}

+ (struct _SecMPPublicIdentity *)_copyPublicIdentityFromFullIdentity:(struct _SecMPFullIdentity *)arg1 error:(id *)arg2;
+ (struct _SecMPFullIdentity *)_createFullIdentityWithError:(id *)arg1;
+ (struct _SecMPFullIdentity *)_createFullIdentityFromData:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)identityWithError:(id *)arg1;
+ (id)identityWithData:(id)arg1 error:(id *)arg2;
- (id)dataRepresentationWithError:(id *)arg1;
- (BOOL)purgeFromKeychain:(id *)arg1;
- (id)verifyAndExposeData:(id)arg1 withSigner:(id)arg2 error:(id *)arg3;
- (id)publicIdentityWithError:(id *)arg1;
@property(readonly, nonatomic) struct _SecMPFullIdentity *fullIdentity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFullIdentity:(struct _SecMPFullIdentity *)arg1;

@end

