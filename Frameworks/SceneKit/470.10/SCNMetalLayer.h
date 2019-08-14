//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAMetalLayer.h>

#import <SceneKit/SCNSceneRenderer-Protocol.h>
#import <SceneKit/SCNTechniqueSupport-Protocol.h>

@class AVAudioEngine, AVAudioEnvironmentNode, NSString, SCNDisplayLink, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNTechnique, SKScene;
@protocol MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder, SCNSceneRendererDelegate;

@interface SCNMetalLayer : CAMetalLayer <SCNSceneRenderer, SCNTechniqueSupport>
{
    SCNJitterer *_jitterer;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    SCNDisplayLink *_displayLink;
    long long _preferredFramePerSeconds;
    double _lastUpdate;
    double _lastRenderedTime;
    BOOL _drawForJittering;
    BOOL _rendersIntoMaterial;
    BOOL _syncTimeWithCoreAnimation;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_kvoKeysForwardedToRenderer;
@property(nonatomic) BOOL syncTimeWithCoreAnimation; // @synthesize syncTimeWithCoreAnimation=_syncTimeWithCoreAnimation;
- (id)_authoringEnvironment;
- (void)set_showsAuthoringEnvironment:(BOOL)arg1;
- (BOOL)_showsAuthoringEnvironment;
@property(nonatomic) unsigned long long debugOptions;
- (void)pause;
- (void)stop;
- (void)play;
@property(nonatomic) unsigned long long antialiasingMode;
@property(nonatomic, getter=isJitteringEnabled) BOOL jitteringEnabled;
- (BOOL)_supportsJitteringSyncRedraw;
- (BOOL)_canJitter;
- (void)_cancelJitterRedisplay;
- (void)_jitterRedisplayWithContext:(struct _CGLContextObject *)arg1;
- (BOOL)scn_inLiveResize;
- (id)contentLayer;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_drawAtTime:(double)arg1;
- (void)SCN_displayLinkCallback:(double)arg1;
- (void)display;
- (void)setNeedsDisplay;
- (id)scn_backingLayer;
- (id)layer;
@property(readonly, nonatomic) void *context;
- (struct _CGLContextObject *)CGLContext;
- (BOOL)_isGLLayerBacked;
@property(copy, nonatomic) SCNTechnique *technique;
@property(retain, nonatomic) SCNNode *audioListener;
@property(readonly, nonatomic) AVAudioEnvironmentNode *audioEnvironmentNode;
@property(readonly, nonatomic) AVAudioEngine *audioEngine;
@property(readonly, nonatomic) unsigned long long stencilPixelFormat;
@property(readonly, nonatomic) unsigned long long depthPixelFormat;
@property(readonly, nonatomic) unsigned long long colorPixelFormat;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLRenderCommandEncoder> currentRenderCommandEncoder;
- (id)currentRenderPassDescriptor;
@property(retain, nonatomic) SKScene *overlaySKScene;
@property(nonatomic) BOOL loops;
@property(getter=isPlaying) BOOL playing;
- (void)stop:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
@property(nonatomic) double sceneTime;
@property(nonatomic) double currentTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long renderingAPI;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
@property(nonatomic) __weak id <SCNSceneRendererDelegate> delegate;
- (struct SCNVector3)unprojectPoint:(struct SCNVector3)arg1;
- (struct SCNVector3)projectPoint:(struct SCNVector3)arg1;
- (void)projectPoints:(struct SCNVector3 *)arg1 count:(unsigned long long)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)prepareObject:(id)arg1 shouldAbortBlock:(CDUnknownBlockType)arg2;
- (id)nodesInsideFrustumWithPointOfView:(id)arg1;
- (BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 options:(id)arg2;
- (struct SCNVector4)_viewport;
- (void)setRendersIntoMaterial:(BOOL)arg1;
- (BOOL)rendersIntoMaterial;
@property(nonatomic) BOOL autoenablesDefaultLighting;
@property(readonly, copy) NSString *description;
- (id)pointOfCulling;
- (void)setPointOfCulling:(id)arg1;
@property(retain, nonatomic) SCNNode *pointOfView;
- (void)resumeDisplayLink;
- (void)pauseDisplayLink;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (long long)preferredFramesPerSecond;
- (BOOL)_checkAndUpdateDisplayLinkStateIfNeeded;
- (id)displayLink;
@property(nonatomic) BOOL showsStatistics;
- (id)rendererOptions;
- (BOOL)canDrawConcurrently;
- (void)dealloc;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

