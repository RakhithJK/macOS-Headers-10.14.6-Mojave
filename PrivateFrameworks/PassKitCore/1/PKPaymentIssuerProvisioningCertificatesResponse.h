//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse
{
    NSArray *_certificates;
    NSData *_nonce;
    NSData *_publicKeyHash;
    NSData *_nonceSignature;
}

@property(copy, nonatomic) NSData *nonceSignature; // @synthesize nonceSignature=_nonceSignature;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

