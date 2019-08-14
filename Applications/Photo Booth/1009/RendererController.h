//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class BackdropsRenderer, NSCountedSet, NSMutableDictionary, NSString, PBRenderer, QCImageTextureBuffer, QCOpenGLContext;

@interface RendererController : NSObject <NSCacheDelegate>
{
    QCOpenGLContext *_renderingContext;
    PBRenderer *_normalRenderer;
    BackdropsRenderer *_backdropsRenderer;
    NSMutableDictionary *_rendererCache;
    NSMutableDictionary *_imageCache;
    NSMutableDictionary *_renderers;
    struct OpaqueVTPixelTransferSession *_transferSession;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct __CVPixelBufferPool *_previewPixelBufferPool;
    PBRenderer *_currentRenderer;
    NSCountedSet *_renderList;
    BOOL _previewRenderingPaused;
    BOOL _renderResolutionDependantEffectsFullSize;
    BOOL _shouldRecordCurrentRenderer;
    BOOL _receivedFirstFrame;
    struct __IOSurface *_IOSurfaceInUse;
    struct __CVOpenGLTextureCache *_inputTextureCache;
    unsigned int _fullPreviewFBO;
    unsigned int _fullTextureName;
    struct CGSize _fullTextureSize;
    unsigned int _miniPreviewFBO;
    unsigned int _miniTextureName;
    struct CGSize _miniTextureSize;
    BOOL _enableFullPreviewGPUScale;
    BOOL _enableMiniPreviewGPUScale;
    BOOL _enableCVTextureCache;
    BOOL _bypassQCForNoEffect;
    struct CGSize _maxRenderingSize;
    unsigned int _YUVProgramID;
    QCImageTextureBuffer *_leftGlowMask;
    QCImageTextureBuffer *_rightGlowMask;
}

+ (id)sharedRendererController;
+ (id)normalComposition;
+ (id)minSupportedModelsForReflections;
+ (void)initialize;
@property BOOL previewRenderingPaused; // @synthesize previewRenderingPaused=_previewRenderingPaused;
@property(readonly) QCOpenGLContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property(readonly) PBRenderer *normalRenderer; // @synthesize normalRenderer=_normalRenderer;
- (void).cxx_destruct;
@property BOOL bypassQCForNoEffect;
- (BOOL)enableCVTextureCache;
- (void)setEnableCVTextureCache:(BOOL)arg1;
- (BOOL)enableFullPreviewsGPUScale;
- (void)setEnableFullPreviewsGPUScale:(BOOL)arg1;
- (BOOL)enableMiniPreviewsGPUScale;
- (void)setEnableMiniPreviewsGPUScale:(BOOL)arg1;
- (void)setMaxRenderingSize:(struct CGSize)arg1;
- (BOOL)runningOnFastGPU;
- (void)adjustGPUScaleSettings;
- (BOOL)hardwareModelSupportsReflections;
- (id)rightGlowMask;
- (id)leftGlowMask;
- (id)createTextureBufferForImageNamed:(id)arg1;
- (id)imageForInputFrame:(struct __CVBuffer *)arg1 renderMode:(int)arg2;
- (void)updateFBOTextureForMode:(int)arg1 size:(struct CGSize)arg2 fbo:(unsigned int *)arg3 textureName:(unsigned int *)arg4;
- (void)newBackdropsFrame:(struct __CVBuffer *)arg1 atTime:(double)arg2;
- (void)stopBackdrops;
- (void)startBackdrops;
- (void)setImage:(id)arg1 forIdentifier:(id)arg2;
- (id)imageForIdentifier:(id)arg1;
- (void)removeFromRenderList:(id)arg1;
- (void)addToRenderList:(id)arg1;
- (void)newFrame:(struct __CVBuffer *)arg1 elapsedTime:(double)arg2;
- (BOOL)receivedFirstFrame;
- (id)previewFrameForInputFrame:(struct __CVBuffer *)arg1;
- (id)fullFrameForInputFrame:(struct __CVBuffer *)arg1;
- (struct CGSize)previewSizeForInputFrame:(struct __CVBuffer *)arg1;
- (struct CGSize)fullSizeForInputFrame:(struct __CVBuffer *)arg1;
- (struct CGSize)fullSizeForInputSize:(struct CGSize)arg1;
- (id)_renderImagesForIdentifier:(id)arg1 atTime:(double)arg2 recordFrame:(struct __CVBuffer *)arg3;
- (id)renderImagesForIdentifier:(id)arg1 atTime:(double)arg2;
- (id)rendererForIdentifier:(id)arg1;
- (id)rendererForExistingIdentifier:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
@property BOOL recording;
@property(retain) PBRenderer *currentRenderer;
@property(readonly) __weak BackdropsRenderer *backdropsRenderer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

