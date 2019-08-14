//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDebugLayoutOptionsObserving-Protocol.h>
#import <Silex/SXFormatInteractor-Protocol.h>
#import <Silex/SXLayoutCoordinatorDelegate-Protocol.h>
#import <Silex/SXPresentationAttributesObserver-Protocol.h>
#import <Silex/SXSubscriptionStatusObserving-Protocol.h>

@class NSString;
@protocol SXDebugLayoutOptionsProviding, SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXPresentationAttributesProvider, SXPresentationEnvironment, SXSubscriptionStatusProviding;

@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXFormatInteractor>
{
    BOOL _requestedContentHiding;
    id <SXFormatInteractorDelegate> _delegate;
    id <SXLayoutCoordinator> _layoutCoordinator;
    id <SXLayoutOptionsFactory> _layoutOptionsFactory;
    id <SXPresentationAttributesProvider> _presentationAttributesProvider;
    id <SXSubscriptionStatusProviding> _subscriptionStatusProvider;
    id <SXPresentationEnvironment> _presentationEnvironment;
    id <SXDebugLayoutOptionsProviding> _debugLayoutOptionsProvider;
}

@property(nonatomic) BOOL requestedContentHiding; // @synthesize requestedContentHiding=_requestedContentHiding;
@property(readonly, nonatomic) id <SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider; // @synthesize debugLayoutOptionsProvider=_debugLayoutOptionsProvider;
@property(nonatomic) __weak id <SXPresentationEnvironment> presentationEnvironment; // @synthesize presentationEnvironment=_presentationEnvironment;
@property(readonly, nonatomic) id <SXSubscriptionStatusProviding> subscriptionStatusProvider; // @synthesize subscriptionStatusProvider=_subscriptionStatusProvider;
@property(readonly, nonatomic) id <SXPresentationAttributesProvider> presentationAttributesProvider; // @synthesize presentationAttributesProvider=_presentationAttributesProvider;
@property(readonly, nonatomic) id <SXLayoutOptionsFactory> layoutOptionsFactory; // @synthesize layoutOptionsFactory=_layoutOptionsFactory;
@property(readonly, nonatomic) id <SXLayoutCoordinator> layoutCoordinator; // @synthesize layoutCoordinator=_layoutCoordinator;
@property(nonatomic) __weak id <SXFormatInteractorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)debugLayoutOptionsDidChange:(id)arg1;
- (void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2;
- (void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2;
- (void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2;
- (void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2;
- (void)updateWithPresentationEnvironment:(id)arg1;
- (id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

