//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCProductLookup-Protocol.h>
#import <NewsCore/SKProductsRequestDelegate-Protocol.h>

@class NSString, SKProduct;
@protocol OS_dispatch_group;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate, FCProductLookup>
{
    NSObject<OS_dispatch_group> *_productRequestGroup;
    SKProduct *_product;
}

@property(retain, nonatomic) SKProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *productRequestGroup; // @synthesize productRequestGroup=_productRequestGroup;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

