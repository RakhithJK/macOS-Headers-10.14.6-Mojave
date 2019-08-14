//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXComponentHosting-Protocol.h>
#import <Silex/SXDragManagerDataSource-Protocol.h>

@class NSArray, NSString, SXDragManager;
@protocol SXMediaSharingPolicyProvider;

@interface SXContainerComponentView : SXComponentView <SXDragManagerDataSource, SXComponentHosting>
{
    NSArray *_componentViews;
    id <SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
    SXDragManager *_dragManager;
}

@property(retain, nonatomic) SXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(readonly, nonatomic) id <SXMediaSharingPolicyProvider> mediaSharingPolicyProvider; // @synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider;
@property(retain, nonatomic) NSArray *componentViews; // @synthesize componentViews=_componentViews;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)allowHierarchyRemoval;
- (BOOL)userInteractable;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (id)viewForDragManager:(id)arg1;
- (void)didApplyBehavior:(id)arg1;
- (void)animationDidFinish:(id)arg1;
- (void)animationDidStart:(id)arg1;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (BOOL)isTransitionable;
- (BOOL)transitionViewShouldFadeInContent;
- (id)transitionContentView;
- (BOOL)usesThumbnailWithImageIdentifier:(id)arg1;
- (struct CGRect)transitionContentFrame;
- (void)removeComponentView:(id)arg1;
- (void)addComponentView:(id)arg1;
- (id)componentViewsForRole:(int)arg1 recursive:(BOOL)arg2;
- (struct CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2;
- (id)contentViewForBehavior:(id)arg1;
- (void)presentComponentWithChanges:(CDStruct_74be42e1)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 mediaSharingPolicyProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
