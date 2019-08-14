//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKCurrencyAmount, PKPeerPaymentAccount, PKPeerPaymentPassDetailsResponse;

@interface PKPeerPaymentCredential : PKPaymentCredential
{
    NSString *_pendingPaymentSenderName;
    PKPeerPaymentAccount *_account;
    PKPeerPaymentPassDetailsResponse *_passDetailsResponse;
    PKCurrencyAmount *_amount;
    unsigned long long _state;
    NSString *_pendingPaymentSenderAddress;
}

@property(copy, nonatomic) NSString *pendingPaymentSenderAddress; // @synthesize pendingPaymentSenderAddress=_pendingPaymentSenderAddress;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) PKCurrencyAmount *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse; // @synthesize passDetailsResponse=_passDetailsResponse;
@property(readonly, nonatomic) PKPeerPaymentAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pendingPaymentSenderName;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
- (id)longDescription;
- (unsigned long long)hash;
- (BOOL)_isEqualToCredential:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPeerPaymentAccount:(id)arg1;

@end

