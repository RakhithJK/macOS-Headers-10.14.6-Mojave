//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <MetalKit/CALayerDelegate-Protocol.h>
#import <MetalKit/NSCoding-Protocol.h>

@class CAMetalLayer, MTKOffscreenDrawable, MTLRenderPassDescriptor, NSObject, NSString;
@protocol CAMetalDrawable, MTKViewDelegate, MTLDevice, MTLTexture, OS_dispatch_source;

@interface MTKView : NSView <NSCoding, CALayerDelegate>
{
    CAMetalLayer *_metalLayer;
    long long _frameInterval;
    BOOL _sizeDirty;
    struct CGSize _drawableScaleFactor;
    struct __CVDisplayLink *_displayLink;
    unsigned long long _currentInterval;
    NSObject<OS_dispatch_source> *_displaySource;
    id <CAMetalDrawable> _currentDrawable;
    CDUnknownFunctionPointerType _drawRectSubIMP;
    BOOL _subClassOverridesDrawRect;
    BOOL _deviceReset;
    id <MTLTexture> _depthStencilTexture;
    id <MTLTexture> _multisampleColorTexture;
    BOOL _framebufferOnly;
    unsigned long long _drawableAttachmentIndex;
    long long _nominalFramesPerSecond;
    long long _maxValidAttachmentIndex;
    unsigned long long _colorPixelFormats[8];
    id <MTLTexture> _multisampleColorTextures[8];
    id <MTLTexture> _colorTextures[8];
    MTKOffscreenDrawable *_offscreenSwapChain[3];
    unsigned long long _drawableIdx;
    int _renderAttachmentDirtyState;
    unsigned long long _terminateAfterFrame;
    unsigned long long _terminateAfterSeconds;
    unsigned long long _measureAfterFrame;
    unsigned long long _measureAfterSeconds;
    unsigned long long _dumpFrameAtFrame;
    unsigned long long _dumpFrameAtSeconds;
    NSString *_dumpPath;
    BOOL _dumpFirstFrame;
    BOOL _drawOffscreen;
    double _startTime;
    unsigned int _frameNum;
    BOOL _enableSetNeedsDisplay;
    BOOL _autoResizeDrawable;
    BOOL _paused;
    unsigned int _clearStencil;
    id <MTKViewDelegate> _delegate;
    id <MTLDevice> _device;
    unsigned long long _depthStencilPixelFormat;
    unsigned long long _sampleCount;
    double _clearDepth;
    long long _preferredFramesPerSecond;
    struct CGSize _drawableSize;
    CDStruct_3ead2808 _clearColor;
}

+ (Class)layerClass;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) struct CGSize drawableSize; // @synthesize drawableSize=_drawableSize;
@property(nonatomic) BOOL autoResizeDrawable; // @synthesize autoResizeDrawable=_autoResizeDrawable;
@property(nonatomic) BOOL enableSetNeedsDisplay; // @synthesize enableSetNeedsDisplay=_enableSetNeedsDisplay;
@property(nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property(nonatomic) unsigned int clearStencil; // @synthesize clearStencil=_clearStencil;
@property(nonatomic) double clearDepth; // @synthesize clearDepth=_clearDepth;
@property(nonatomic) CDStruct_3ead2808 clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long depthStencilPixelFormat; // @synthesize depthStencilPixelFormat=_depthStencilPixelFormat;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(nonatomic) __weak id <MTKViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)convertSizeToBacking:(struct CGSize)arg1;
- (struct CGSize)convertSizeFromBacking:(struct CGSize)arg1;
- (struct CGPoint)convertPointToBacking:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromBacking:(struct CGPoint)arg1;
@property(nonatomic) BOOL presentsWithTransaction;
@property(nonatomic) BOOL framebufferOnly;
- (void)viewDidChangeBackingProperties;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_resizeMetalLayerDrawable;
- (void)_resizeDrawable;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)displayLayer:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)_updateToNativeScale;
- (struct CGSize)_pixelSizeFromPointSize:(struct CGSize)arg1;
- (void)draw;
@property(readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
- (void)releaseDrawables;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)_createCVDisplayLink;
- (long long)_calculateRefeshesPerSecond;
- (void)setNominalFramesPerSecond:(long long)arg1;
- (long long)nominalFramesPerSecond;
@property(readonly, nonatomic) id <CAMetalDrawable> currentDrawable; // @synthesize currentDrawable=_currentDrawable;
@property(readonly, nonatomic) id <MTLTexture> multisampleColorTexture;
- (const id *)colorTextures;
- (const id *)multisampleColorTextures;
@property(readonly, nonatomic) id <MTLTexture> depthStencilTexture;
- (void)_windowWillClose:(id)arg1;
- (unsigned long long)drawableAttachmentIndex;
- (void)setDrawableAttachmentIndex:(unsigned long long)arg1;
@property(nonatomic) unsigned long long colorPixelFormat;
@property(nonatomic) struct CGColorSpace *colorspace;
- (void)setColorPixelFormat:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)_dumpFrameImageWithFilename:(id)arg1;
- (void)_dumpFramerate:(double)arg1 withFilename:(id)arg2;
- (BOOL)exportToTargaAtLocation:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 size:(unsigned long long)arg4 bytes:(void *)arg5;
- (void)getEnvironmentSettings;
- (void)__initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

