//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FrontBoard/FBSceneLayerHostView.h>

#import <FrontBoard/FBSceneMonitorDelegate-Protocol.h>

@class FBScene, FBSceneHostManager, FBSceneMonitor, NSString, UIView;
@protocol FBSceneHostView;

@interface FBExternalSceneLayerHostView : FBSceneLayerHostView <FBSceneMonitorDelegate>
{
    FBScene *_parentScene;
    FBScene *_targetScene;
    FBSceneMonitor *_monitor;
    FBSceneHostManager *_hostManager;
    NSString *_requester;
    NSString *_targetSceneID;
    UIView<FBSceneHostView> *_hostView;
}

@property(readonly, nonatomic) FBScene *targetScene; // @synthesize targetScene=_targetScene;
- (void).cxx_destruct;
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
- (void)_updateHostingState;
- (void)_updateTargetScene;
- (void)dealloc;
- (id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

