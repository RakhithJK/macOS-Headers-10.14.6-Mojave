//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString, PKPayment, PKPaymentAuthorizationResult, PKPaymentClientUpdate, PKPaymentHostUpdate, PKRemoteDevice, PKRemotePaymentInstrument, PKRemotePaymentRequest;

@protocol PDContinuityPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)sendPaymentSetupRequest:(PKRemoteDevice *)arg1 appDisplayName:(NSString *)arg2 handler:(void (^)(NSError *))arg3;
- (void)fetchRemoteDevicesWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)canMakePaymentsWithRemoteDevicesWithHandler:(void (^)(BOOL, NSError *))arg1;
- (void)hasRemoteDevicesWithHandler:(void (^)(BOOL, NSError *))arg1;
- (void)cancelRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 handler:(void (^)(NSError *))arg2;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (void)requestInstrumentThumbnail:(PKRemotePaymentInstrument *)arg1 forRemoteDevice:(PKRemoteDevice *)arg2 size:(struct CGSize)arg3 handler:(void (^)(NSData *, NSError *))arg4;
- (void)sendPaymentResult:(PKPaymentAuthorizationResult *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPayment:(PKPayment *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPaymentClientUpdate:(PKPaymentClientUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendPaymentHostUpdate:(PKPaymentHostUpdate *)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
- (void)sendRemotePaymentRequest:(PKRemotePaymentRequest *)arg1 handler:(void (^)(NSError *))arg2;
- (void)updatePaymentDevicesWithHandler:(void (^)(NSError *))arg1;

@optional
- (void)noteAccountDeletedWithHandler:(void (^)(NSError *))arg1;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(PKRemotePaymentRequest *)arg2 handler:(void (^)(NSError *))arg3;
@end

