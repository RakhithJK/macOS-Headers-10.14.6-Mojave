//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction
{
    PKPaymentTransaction *_relatedTopUpFundingSourceWithdrawlTransaction;
    PKPaymentTransaction *_relatedTopUpPeerPaymentAccountDepositTransaction;
}

@property(readonly, nonatomic) PKPaymentTransaction *relatedTopUpPeerPaymentAccountDepositTransaction; // @synthesize relatedTopUpPeerPaymentAccountDepositTransaction=_relatedTopUpPeerPaymentAccountDepositTransaction;
@property(readonly, nonatomic) PKPaymentTransaction *relatedTopUpFundingSourceWithdrawlTransaction; // @synthesize relatedTopUpFundingSourceWithdrawlTransaction=_relatedTopUpFundingSourceWithdrawlTransaction;
- (void).cxx_destruct;
- (id)eventType;
- (BOOL)isEqualToActivityEvent:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(BOOL)arg4;

@end

