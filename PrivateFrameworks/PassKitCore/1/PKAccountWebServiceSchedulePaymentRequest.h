//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

#import <PassKitCore/PKAccountWebServiceApplePayTrustProtocol-Protocol.h>

@class NSData, NSString, NSURL, PKAccountPaymentScheduleDetails, PKAccountScheduledPaymentList, PKAccountWebServiceCertificatesResponse, PKApplePayTrustHashResponse, PKPaymentDeviceMetadata;

@interface PKAccountWebServiceSchedulePaymentRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol>
{
    NSURL *baseURL;
    PKApplePayTrustHashResponse *hashResponse;
    NSData *_publicKeyHash;
    PKAccountScheduledPaymentList *_scheduledPayments;
    PKAccountPaymentScheduleDetails *_scheduleDetails;
    NSString *_accountIdentifier;
    PKAccountWebServiceCertificatesResponse *_certificatesResponse;
    PKPaymentDeviceMetadata *_deviceMetadata;
}

@property(retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // @synthesize certificatesResponse=_certificatesResponse;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) PKAccountPaymentScheduleDetails *scheduleDetails; // @synthesize scheduleDetails=_scheduleDetails;
@property(retain, nonatomic) PKAccountScheduledPaymentList *scheduledPayments; // @synthesize scheduledPayments=_scheduledPayments;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(retain, nonatomic) PKApplePayTrustHashResponse *hashResponse; // @synthesize hashResponse;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL;
- (void).cxx_destruct;
- (id)manifestHashWithReferenceIdentifier:(id)arg1;
- (id)endpointComponents;
- (Class)signatureResponseClass;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

