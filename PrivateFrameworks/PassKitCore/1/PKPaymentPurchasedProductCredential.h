//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, PKPaymentSetupProduct, PKServiceProviderPurchase;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential
{
    PKPaymentSetupProduct *_product;
    NSString *_productIdentifier;
    PKServiceProviderPurchase *_purchase;
}

@property(readonly, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *statusDescription;
@property(readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property(readonly, copy, nonatomic) NSArray *metadata;
- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2;

@end

