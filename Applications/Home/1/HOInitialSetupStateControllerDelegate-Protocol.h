//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HOInitialSetupStateController, NAFuture, UIViewController;
@protocol HUPreloadableViewController;

@protocol HOInitialSetupStateControllerDelegate <NSObject>
- (NAFuture *)stateController:(HOInitialSetupStateController *)arg1 dismissViewController:(UIViewController<HUPreloadableViewController> *)arg2 forState:(unsigned long long)arg3;
- (NAFuture *)stateController:(HOInitialSetupStateController *)arg1 presentViewController:(UIViewController<HUPreloadableViewController> *)arg2 forState:(unsigned long long)arg3;
@end

