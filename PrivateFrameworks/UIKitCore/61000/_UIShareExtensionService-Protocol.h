//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UISUIActivityViewControllerConfiguration;

@protocol _UIShareExtensionService <NSObject>
- (void)_closeWithCompletion:(void (^)(void))arg1;
- (void)setIsLoadingActivityItemProviders:(BOOL)arg1;
- (void)_viewControllerWasDismissed;
- (void)setPresentedContextUsesDiscreteDismissButton:(BOOL)arg1;
- (void)cleanupWithSelectedActivityType:(NSString *)arg1;
- (void)setOtherActivityViewPresented:(BOOL)arg1;
- (void)setNeedsRequestingSharedItemsWithSharedItemsAvailable:(BOOL)arg1;
- (void)performHostInitiatedActivityWithActivityType:(NSString *)arg1 executionEnvironment:(long long)arg2;
- (void)setActivityViewControllerConfiguration:(UISUIActivityViewControllerConfiguration *)arg1;
- (void)displayInitialUI;
@end

