//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "HUItemManagerContainer-Protocol.h"

@class HUQuickControlPresentationCoordinator, UIViewController;
@protocol HUQuickControlPresentationHost;

@protocol HUQuickControlPresentationHost <HUItemManagerContainer>
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 didEndQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
- (void)childViewController:(UIViewController<HUQuickControlPresentationHost> *)arg1 willBeginQuickControlsPresentation:(HUQuickControlPresentationCoordinator *)arg2;
@end

