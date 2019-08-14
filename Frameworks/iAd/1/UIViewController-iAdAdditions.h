//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (iAdAdditions)
+ (void)prepareInterstitialAds;
@property(readonly, nonatomic) BOOL shouldPresentInterstitialAd;
- (BOOL)requestInterstitialAdPresentation;
@property(readonly, nonatomic, getter=isDisplayingBannerAd) BOOL displayingBannerAd;
@property(readonly, nonatomic, getter=isPresentingFullScreenAd) BOOL presentingFullScreenAd;
@property(readonly, retain, nonatomic) UIView *originalContentView;
@property(nonatomic) BOOL canDisplayBannerAds;
@property(nonatomic) long long interstitialPresentationPolicy;
@end

