//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDate, NSDecimalNumber;

@interface PKCreditAccountBalanceSummary : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_openingDate;
    NSDate *_closingDate;
    NSDecimalNumber *_purchases;
    NSDecimalNumber *_pendingPurchases;
    NSDecimalNumber *_balanceTransfers;
    NSDecimalNumber *_interestCharged;
    NSDecimalNumber *_feesCharged;
    NSDecimalNumber *_paymentsAndCredits;
    NSDecimalNumber *_payments;
    NSDecimalNumber *_credits;
    NSDecimalNumber *_rewardsEarned;
    NSDecimalNumber *_rewardsRedeemed;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDecimalNumber *rewardsRedeemed; // @synthesize rewardsRedeemed=_rewardsRedeemed;
@property(copy, nonatomic) NSDecimalNumber *rewardsEarned; // @synthesize rewardsEarned=_rewardsEarned;
@property(copy, nonatomic) NSDecimalNumber *credits; // @synthesize credits=_credits;
@property(copy, nonatomic) NSDecimalNumber *payments; // @synthesize payments=_payments;
@property(copy, nonatomic) NSDecimalNumber *paymentsAndCredits; // @synthesize paymentsAndCredits=_paymentsAndCredits;
@property(copy, nonatomic) NSDecimalNumber *feesCharged; // @synthesize feesCharged=_feesCharged;
@property(copy, nonatomic) NSDecimalNumber *interestCharged; // @synthesize interestCharged=_interestCharged;
@property(copy, nonatomic) NSDecimalNumber *balanceTransfers; // @synthesize balanceTransfers=_balanceTransfers;
@property(copy, nonatomic) NSDecimalNumber *pendingPurchases; // @synthesize pendingPurchases=_pendingPurchases;
@property(copy, nonatomic) NSDecimalNumber *purchases; // @synthesize purchases=_purchases;
@property(copy, nonatomic) NSDate *closingDate; // @synthesize closingDate=_closingDate;
@property(copy, nonatomic) NSDate *openingDate; // @synthesize openingDate=_openingDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

