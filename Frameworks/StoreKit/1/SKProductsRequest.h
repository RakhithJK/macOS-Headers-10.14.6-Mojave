//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

- (void).cxx_destruct;
- (id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)_handleReply:(id)arg1;
- (void)_start;
- (id)initWithProductIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <SKProductsRequestDelegate> delegate; // @dynamic delegate;

@end

