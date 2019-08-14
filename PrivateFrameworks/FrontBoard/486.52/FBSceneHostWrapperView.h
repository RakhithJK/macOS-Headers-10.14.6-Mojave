//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>
#import <FrontBoard/FBSceneHostView-Protocol.h>
#import <FrontBoard/FBSceneLayerHostContainerViewDataSource-Protocol.h>
#import <FrontBoard/FBSceneLayerManagerObserver-Protocol.h>
#import <FrontBoard/_FBSceneGeometryObserver-Protocol.h>

@class FBScene, FBSceneHostManager, FBSceneLayerHostContainerView, FBSceneLayerManager, NSMapTable, NSMutableSet, NSSet, NSString, UIColor;
@protocol FBSceneHostViewDelegate;

@interface FBSceneHostWrapperView : UIView <_FBSceneGeometryObserver, FBSceneLayerManagerObserver, FBSceneLayerHostContainerViewDataSource, BSDescriptionProviding, FBSceneHostView>
{
    FBScene *_scene;
    NSString *_requester;
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_manager;
    FBSceneLayerHostContainerView *_hostContainerView;
    NSMapTable *_layerAlphaMapTable;
    NSMutableSet *_hiddenLayers;
    unsigned long long _appearanceStyle;
    BOOL _usingDefaultClippingDisabled;
    BOOL _usingDefaultHostViewTransform;
    UIColor *_backgroundColorWhileNotHosting;
    UIColor *_backgroundColorWhileHosting;
    unsigned long long _hostedLayerTypes;
    BOOL _usingDefaultLayerTypes;
    unsigned long long _renderingMode;
    BOOL _usingDefaultRenderingMode;
    NSString *_minificationFilterName;
    BOOL _usingDefaultMinificationFilterName;
    BOOL _clippingDisabled;
    id <FBSceneHostViewDelegate> _delegate;
    struct CGAffineTransform _hostViewTransform;
}

@property(readonly, copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(nonatomic) struct CGAffineTransform hostViewTransform; // @synthesize hostViewTransform=_hostViewTransform;
@property(nonatomic, getter=isClippingDisabled) BOOL clippingDisabled; // @synthesize clippingDisabled=_clippingDisabled;
@property(copy, nonatomic) NSString *minificationFilterName; // @synthesize minificationFilterName=_minificationFilterName;
@property(nonatomic) unsigned long long renderingMode; // @synthesize renderingMode=_renderingMode;
@property(nonatomic) unsigned long long hostedLayerTypes; // @synthesize hostedLayerTypes=_hostedLayerTypes;
@property(nonatomic) unsigned long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property(nonatomic) id <FBSceneHostViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *hiddenLayers; // @synthesize hiddenLayers=_hiddenLayers;
@property(retain, nonatomic) FBSceneLayerHostContainerView *hostContainerView; // @synthesize hostContainerView=_hostContainerView;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (id)layerMinificationFilterNameForHostContainerView:(id)arg1;
- (unsigned long long)contextHostRenderingModeForHostContainerView:(id)arg1;
- (double)hostContainerView:(id)arg1 alphaForLayer:(id)arg2;
- (id)layersForHostContainerView:(id)arg1;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (id)window;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
@property(readonly, nonatomic) NSSet *hostingDisabledLayers;
@property(retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor *backgroundColorWhileHosting;
@property(readonly, nonatomic) double level;
@property(readonly, nonatomic) struct CGRect referenceFrame;
@property(readonly, nonatomic, getter=isHosting) BOOL hosting;
- (void)_updateFrameAndTransform;
- (void)_setAppearanceStyle:(unsigned long long)arg1 force:(BOOL)arg2;
- (id)_stringForAppearanceStyle;
- (void)_toggleBackgroundColorIfNecessary;
- (id)_backgroundColorWhileNotHosting;
- (id)_backgroundColorWhileHosting;
- (void)_hostingStatusChanged;
- (BOOL)_isReallyHosting;
- (void)invalidate;
- (void)setDefaultMinificationFilterName:(id)arg1;
- (void)setDefaultRenderingMode:(unsigned long long)arg1;
- (void)setDefaultHostedLayerTypes:(unsigned long long)arg1;
- (void)setDefaultHostViewTransform:(struct CGAffineTransform)arg1;
- (void)setDefaultClippingDisabled:(BOOL)arg1;
- (void)setLayer:(id)arg1 hidden:(BOOL)arg2;
- (void)setLayer:(id)arg1 alpha:(double)arg2;
- (void)updateBackgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithScene:(id)arg1 requester:(id)arg2;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

