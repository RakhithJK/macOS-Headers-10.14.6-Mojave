//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewPostProcessor-Protocol.h>

@class NSString;
@protocol SXActionComponentInteractionHandlerFactory, SXActionProvider, SXComponentInteractionHandlerManager;

@interface SXActionComponentViewPostProcessor : NSObject <SXComponentViewPostProcessor>
{
    id <SXActionProvider> _actionProvider;
    id <SXActionComponentInteractionHandlerFactory> _factory;
    id <SXComponentInteractionHandlerManager> _interactionHandlerManager;
}

@property(readonly, nonatomic) id <SXComponentInteractionHandlerManager> interactionHandlerManager; // @synthesize interactionHandlerManager=_interactionHandlerManager;
@property(readonly, nonatomic) id <SXActionComponentInteractionHandlerFactory> factory; // @synthesize factory=_factory;
@property(readonly, nonatomic) id <SXActionProvider> actionProvider; // @synthesize actionProvider=_actionProvider;
- (void).cxx_destruct;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)initWithActionProvider:(id)arg1 interactionHandlerFactory:(id)arg2 interactionHandlerManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

