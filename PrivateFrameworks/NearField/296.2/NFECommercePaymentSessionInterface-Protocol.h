//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFSessionInterface-Protocol.h>

@class NFECommercePaymentRequest, NSData;

@protocol NFECommercePaymentSessionInterface <NFSessionInterface>
- (oneway void)performECommercePayment:(NSData *)arg1 request:(NFECommercePaymentRequest *)arg2 callback:(void (^)(NFECommercePaymentResponse *, NSError *))arg3;
- (oneway void)getApplets:(void (^)(NSArray *, NSError *))arg1;
@end

