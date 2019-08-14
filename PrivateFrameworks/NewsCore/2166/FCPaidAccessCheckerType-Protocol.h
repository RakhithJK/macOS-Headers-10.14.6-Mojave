//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@protocol FCBundleSubscriptionProviderType, FCChannelProviding, FCPurchaseProviderType;

@protocol FCPaidAccessCheckerType
@property(readonly, nonatomic) id <FCPurchaseProviderType> purchaseProvider;
@property(readonly, nonatomic) id <FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
- (void)prepareForUseWithCompletion:(void (^)(void))arg1;
- (BOOL)isPreparedForUse;
- (BOOL)canGetBundleSubscriptionToChannel:(id <FCChannelProviding>)arg1;
- (BOOL)canGetSubscriptionToChannel:(id <FCChannelProviding>)arg1;
- (BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id <FCChannelProviding>)arg3;
@end

