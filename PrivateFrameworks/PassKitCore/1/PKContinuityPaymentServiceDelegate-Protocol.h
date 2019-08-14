//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, PKPayment, PKPaymentAuthorizationResult, PKPaymentClientUpdate, PKPaymentHostUpdate, PKRemotePaymentRequest;

@protocol PKContinuityPaymentServiceDelegate <NSObject>

@optional
- (void)didReceiveCancellationForRemotePaymentRequest:(PKRemotePaymentRequest *)arg1;
- (void)didReceivePaymentResult:(PKPaymentAuthorizationResult *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceivePaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2;
- (void)didReceiveUpdatedPaymentDevices:(NSArray *)arg1;
@end

