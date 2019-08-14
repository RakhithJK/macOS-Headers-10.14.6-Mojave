//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSUUID;

@interface PKPeerPaymentSubmitDeviceScoreIdentifiersRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_paymentIdentifier;
    NSUUID *_requestDeviceScoreIdentifier;
    NSUUID *_sendDeviceScoreIdentifier;
}

@property(copy, nonatomic) NSUUID *sendDeviceScoreIdentifier; // @synthesize sendDeviceScoreIdentifier=_sendDeviceScoreIdentifier;
@property(copy, nonatomic) NSUUID *requestDeviceScoreIdentifier; // @synthesize requestDeviceScoreIdentifier=_requestDeviceScoreIdentifier;
@property(copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

