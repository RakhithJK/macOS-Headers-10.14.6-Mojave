//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FRAnalyticsReferral, NSString;

@interface FRPurchaseContext : NSObject <NSCopying>
{
    BOOL _fromSubscriptionOnlyArticle;
    BOOL _arrivedFromAd;
    long long _subscriptionConversionPointType;
    NSString *_sourceChannelID;
    NSString *_articleID;
    NSString *_sectionID;
    NSString *_qToken;
    FRAnalyticsReferral *_referral;
    NSString *_purchaseSessionID;
    long long _parentFeedType;
}

+ (id)purchaseContextFromNPPurchaseContext:(id)arg1;
+ (id)purchaseContextWithSourceChannelID:(id)arg1 articleID:(id)arg2 sectionID:(id)arg3 purchaseSessionID:(id)arg4 subscriptionConversionPointType:(long long)arg5 qToken:(id)arg6 parentFeedType:(long long)arg7 arrivedFromAd:(BOOL)arg8 referral:(id)arg9;
+ (id)purchaseContextWithSourceChannelID:(id)arg1 articleID:(id)arg2 sectionID:(id)arg3 subscriptionConversionPointType:(long long)arg4 qToken:(id)arg5 parentFeedType:(long long)arg6 fromSubscriptionAd:(BOOL)arg7 referral:(id)arg8;
@property(nonatomic) BOOL arrivedFromAd; // @synthesize arrivedFromAd=_arrivedFromAd;
@property(nonatomic) BOOL fromSubscriptionOnlyArticle; // @synthesize fromSubscriptionOnlyArticle=_fromSubscriptionOnlyArticle;
@property(nonatomic) long long parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(copy, nonatomic) NSString *purchaseSessionID; // @synthesize purchaseSessionID=_purchaseSessionID;
@property(retain, nonatomic) FRAnalyticsReferral *referral; // @synthesize referral=_referral;
@property(copy, nonatomic) NSString *qToken; // @synthesize qToken=_qToken;
@property(copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(copy, nonatomic) NSString *sourceChannelID; // @synthesize sourceChannelID=_sourceChannelID;
@property(nonatomic) long long subscriptionConversionPointType; // @synthesize subscriptionConversionPointType=_subscriptionConversionPointType;
- (void).cxx_destruct;
- (id)subscriptionConversionPointTypeInString;
- (id)bridgedPurchaseContextWithPurchase:(id)arg1 webAccessOptIn:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetPurchaseSession;

@end

