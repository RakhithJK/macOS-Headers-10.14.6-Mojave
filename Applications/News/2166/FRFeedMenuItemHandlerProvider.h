//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCSubscriptionObserving-Protocol.h"
#import "TUMenuBarItemHandlerProviding-Protocol.h"

@class FCFeedDescriptor, FCSubscriptionController, NSString, UIViewController;

@interface FRFeedMenuItemHandlerProvider : NSObject <FCSubscriptionObserving, TUMenuBarItemHandlerProviding>
{
    UIViewController *_activeViewController;
    FCFeedDescriptor *_feed;
    FCSubscriptionController *_subscriptionController;
}

@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
@property(readonly, nonatomic) __weak UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
- (void).cxx_destruct;
- (id)blockHandler;
- (id)followHandler;
- (id)menuItemHandlers;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;
- (void)dealloc;
- (id)initWithFeedDescriptor:(id)arg1 viewController:(id)arg2 subscriptionController:(id)arg3 readingHistory:(id)arg4 personalizationData:(id)arg5 analyticsController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

