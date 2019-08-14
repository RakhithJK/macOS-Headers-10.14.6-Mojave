//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentActivationResponse : PKPaymentWebServiceResponse
{
    NSString *_stepIdentifier;
    NSString *_previousStepIdentifier;
    long long _verificationStatus;
    NSDictionary *_requiredVerificationFieldData;
    NSArray *_verificationChannels;
    NSURL *_passURL;
}

+ (id)responseWithData:(id)arg1 forPass:(id)arg2;
@property(readonly, copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(copy, nonatomic) NSArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;
@property(readonly, copy, nonatomic) NSDictionary *requiredVerificationFieldData; // @synthesize requiredVerificationFieldData=_requiredVerificationFieldData;
@property(nonatomic) long long verificationStatus; // @synthesize verificationStatus=_verificationStatus;
@property(readonly, copy, nonatomic) NSString *previousStepIdentifier; // @synthesize previousStepIdentifier=_previousStepIdentifier;
@property(readonly, copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 forPass:(id)arg2;

@end

