//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedSubscriptionManager, NSSet;
@protocol FCTagProviding;

@protocol FRFeedSubscriptionManagerDelegate <NSObject>
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 showHudForTag:(id <FCTagProviding>)arg2 style:(long long)arg3 dismissalBlock:(void (^)(BOOL))arg4;
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 showNotificationPromptForTag:(id <FCTagProviding>)arg2 completion:(void (^)(void))arg3;
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 updateHeartForTags:(NSSet *)arg2 isMuteHeart:(BOOL)arg3 withState:(BOOL)arg4 animationStyle:(long long)arg5 animationCompletionBlock:(void (^)(BOOL))arg6;

@optional
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 deleteSectionForTags:(NSSet *)arg2;
@end

