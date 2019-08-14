//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSData, NSDictionary, NSString, PKContact;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_quoteIdentifier;
    NSData *_paymentData;
    NSDictionary *_certificates;
    NSString *_recipientPhoneOrEmail;
    PKContact *_contact;
    NSString *_pushToken;
    NSData *_signedEnrollmentDataSignature;
}

+ (id)requestWithAuthorizedPeerPaymentQuote:(id)arg1;
@property(copy, nonatomic) NSData *signedEnrollmentDataSignature; // @synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) PKContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *recipientPhoneOrEmail; // @synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail;
@property(copy, nonatomic) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property(copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(copy, nonatomic) NSString *quoteIdentifier; // @synthesize quoteIdentifier=_quoteIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end
