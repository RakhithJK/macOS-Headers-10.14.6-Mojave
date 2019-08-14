//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iAd/AdAnalyzable-Protocol.h>
#import <iAd/NSObject-Protocol.h>

@class ADLayoutOptions, ADMRAIDAction, NSError, NSString, UIView, UIViewController;

@protocol ADAdRecipient <NSObject, AdAnalyzable>
@property(nonatomic) long long lastErrorCode;
@property(nonatomic) BOOL reUsed;
@property(nonatomic) BOOL displayed;
@property(nonatomic) int slotPosition;
@property(nonatomic) int screenfuls;
@property(copy, nonatomic) NSString *adResponseId;
@property(readonly, nonatomic) UIViewController *presentingViewController;
@property(readonly, nonatomic) UIView *adSpaceView;
@property(readonly, nonatomic) long long options;
@property(retain, nonatomic) ADLayoutOptions *layoutOptions;
@property(readonly, nonatomic) int internalAdType;
- (void)adlibManagedVideoAdDidToggleToMute:(_Bool)arg1;
- (void)adlibManagedVideoAdDidTapVideo;
- (void)adlibManagedVideoAdDidTapForMoreInfo;
- (void)adlibManagedVideoAdDidCompletePlay:(int)arg1;
- (void)adlibManagedVideoAdDidPausePlay;
- (void)adlibManagedVideoAdDidResumePlay;
- (void)adlibManagedVideoAdDidImpress;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint)arg1;
- (void)resumeBannerMedia;
- (void)pauseBannerMedia;
- (void)storyboardViewControllerDidPresent;
- (void)privacyButtonWasTapped;
- (void)serverStoryboardDidTransitionOut;
- (void)serverBannerViewDidFailToReceiveAdWithError:(NSError *)arg1;
- (void)serverBannerViewDidLoad;
- (void)serverBannerViewWillLoad;

@optional
- (void)creativeControllerViewWasTappedAtPoint:(struct CGPoint)arg1 withMRAIDAction:(ADMRAIDAction *)arg2;
- (void)setViewSizeInPortrait:(struct CGSize)arg1 inLandscape:(struct CGSize)arg2;
@end

