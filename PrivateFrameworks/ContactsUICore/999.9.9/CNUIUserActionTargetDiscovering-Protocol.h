//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNFuture, CNObservable, NSArray, NSString;
@protocol CNSchedulerProvider;

@protocol CNUIUserActionTargetDiscovering <NSObject>
- (CNFuture *)thirdPartyTargetsForBundleIdentifier:(NSString *)arg1;
- (CNFuture *)thirdPartyTargetsForActionTypes:(NSArray *)arg1;
- (CNObservable *)targetsForActionType:(NSString *)arg1;
- (CNObservable *)observableForTargetsChangedForActionType:(NSString *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
@end

