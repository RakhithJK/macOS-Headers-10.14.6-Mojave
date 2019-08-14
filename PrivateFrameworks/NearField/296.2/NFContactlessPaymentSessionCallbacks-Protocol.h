//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFContactlessSessionCallbacks-Protocol.h>

@class NFContactlessPaymentEndEvent, NFContactlessPaymentStartEvent, NSArray, NSDictionary, NSString;

@protocol NFContactlessPaymentSessionCallbacks <NFContactlessSessionCallbacks>
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(NSDictionary *)arg1;
- (void)didEndTransaction:(NFContactlessPaymentEndEvent *)arg1;
- (void)didStartTransaction:(NFContactlessPaymentStartEvent *)arg1;
- (void)didExpireTransactionForApplet:(NSString *)arg1;
- (void)didReceiveButtonPressForApplet:(NSString *)arg1;

@optional
- (void)didReceiveActivityTimeout:(NSString *)arg1;
- (void)didExpressModeStateChange:(unsigned int)arg1 withObject:(NSString *)arg2;
- (void)didReceivePendingServerRequest;
- (void)didPerformValueAddedServiceTransactions:(NSArray *)arg1;
- (void)didSelectValueAddedService:(BOOL)arg1;
@end
