//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class FCPurchaseLookupRecordSource, NSArray;

@interface FCPurchaseLookupFetchOperation : FCFetchOperation
{
    NSArray *_purchaseIDs;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
}

@property(retain, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource; // @synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource;
@property(retain, nonatomic) NSArray *purchaseIDs; // @synthesize purchaseIDs=_purchaseIDs;
- (void).cxx_destruct;
- (id)processFetchedResults:(id)arg1;
- (id)_prefixedPurchasedIDs:(id)arg1;
- (void)performOperation;
- (id)initWithPurchaseIDs:(id)arg1 purchaseLookupRecordSource:(id)arg2;
- (id)init;

@end

