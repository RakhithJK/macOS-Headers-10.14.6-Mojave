//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData, _SFECPublicKey;

@interface _SFIESCiphertext : _SFCiphertext
{
    id _iesCiphertextInternal;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSData *authenticationCode;
@property(readonly) _SFECPublicKey *ephemeralSenderPublicKey;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3;

@end

