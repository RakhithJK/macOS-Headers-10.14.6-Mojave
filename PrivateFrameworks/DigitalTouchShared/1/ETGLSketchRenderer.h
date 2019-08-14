//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAOpenGLLayer, NSOpenGLContext;
@protocol ETGLSketchRendererDelegate;

@interface ETGLSketchRenderer : NSObject
{
    BOOL _useThisRendererOnlyForWarmup;
    BOOL _isDying;
    BOOL _renderingOffscreen;
    BOOL _useFastVerticalWisp;
    float _currentTimeClock;
    float _currentTimeIndex;
    int _vertexBufferCount;
    int _vertexBufferBegin;
    float _deathTime;
    float _lastBirth;
    unsigned int _shaderProgram;
    unsigned int _vboVertLineId;
    unsigned int _vaoLineID;
    unsigned int _viewRenderbuffer;
    unsigned int _viewFramebuffer;
    unsigned int _backingWidth;
    unsigned int _backingHeight;
    unsigned int _allocatedWidth;
    unsigned int _allocatedHeight;
    double _wispDelay;
    id <ETGLSketchRendererDelegate> _delegate;
    double _lineWidthScaleFactor;
    struct *_allVertices;
    unsigned long long _vertexCount;
    double _cometScaleFactor;
    NSOpenGLContext *_context;
    CAOpenGLLayer *_cachedLayer;
    CDUnknownBlockType _completionBlock;
    // Error parsing type: , name: _brushColorForInitialColor
    // Error parsing type: , name: _brushColorForFinalColor
}

+ (void)warmupShaders;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) CAOpenGLLayer *cachedLayer; // @synthesize cachedLayer=_cachedLayer;
@property(nonatomic) NSOpenGLContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned int allocatedHeight; // @synthesize allocatedHeight=_allocatedHeight;
@property(nonatomic) unsigned int allocatedWidth; // @synthesize allocatedWidth=_allocatedWidth;
@property(nonatomic) double cometScaleFactor; // @synthesize cometScaleFactor=_cometScaleFactor;
@property(nonatomic) unsigned int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(nonatomic) unsigned int backingWidth; // @synthesize backingWidth=_backingWidth;
@property(nonatomic) unsigned int viewFramebuffer; // @synthesize viewFramebuffer=_viewFramebuffer;
@property(nonatomic) unsigned int viewRenderbuffer; // @synthesize viewRenderbuffer=_viewRenderbuffer;
@property(nonatomic) unsigned int vaoLineID; // @synthesize vaoLineID=_vaoLineID;
@property(nonatomic) unsigned int vboVertLineId; // @synthesize vboVertLineId=_vboVertLineId;
@property(nonatomic) unsigned int shaderProgram; // @synthesize shaderProgram=_shaderProgram;
// Error parsing type for property brushColorForFinalColor:
// Property attributes: T,N,V_brushColorForFinalColor

// Error parsing type for property brushColorForInitialColor:
// Property attributes: T,N,V_brushColorForInitialColor

@property(nonatomic) float lastBirth; // @synthesize lastBirth=_lastBirth;
@property(nonatomic) float deathTime; // @synthesize deathTime=_deathTime;
@property(nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) int vertexBufferBegin; // @synthesize vertexBufferBegin=_vertexBufferBegin;
@property(nonatomic) int vertexBufferCount; // @synthesize vertexBufferCount=_vertexBufferCount;
@property(nonatomic) struct *allVertices; // @synthesize allVertices=_allVertices;
@property(nonatomic) BOOL useFastVerticalWisp; // @synthesize useFastVerticalWisp=_useFastVerticalWisp;
@property(nonatomic) double lineWidthScaleFactor; // @synthesize lineWidthScaleFactor=_lineWidthScaleFactor;
@property(nonatomic) BOOL renderingOffscreen; // @synthesize renderingOffscreen=_renderingOffscreen;
@property(nonatomic) __weak id <ETGLSketchRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double wispDelay; // @synthesize wispDelay=_wispDelay;
@property(nonatomic) BOOL isDying; // @synthesize isDying=_isDying;
@property(readonly, nonatomic) float currentTimeIndex; // @synthesize currentTimeIndex=_currentTimeIndex;
@property(readonly, nonatomic) float currentTimeClock; // @synthesize currentTimeClock=_currentTimeClock;
- (void).cxx_destruct;
- (void)render;
- (struct CGImage *)createRenderedFrameImageUsingAlpha:(BOOL)arg1;
- (void)_warmupShaders;
- (void)updateVertexBufferWithVertexCount:(unsigned long long)arg1;
-     // Error parsing type: v84@0:8^16Q2432^40Q4856f64Q68Q76, name: appendDualPointArray:length:controlPoint:alternatePoints:alternateLength:alternateControlPoint:unitSize:segmentIndex:segmentCount:
-     // Error parsing type: v32@0:8^16Q24, name: appendPointArray:length:
- (void)erase;
- (void)reset;
- (BOOL)resizeFromLayer:(id)arg1;
- (BOOL)resizeFromCachedLayer;
- (void)setupVAOs;
- (int)linkProgramWithVShader:(int)arg1 FShader:(int)arg2;
- (int)loadOneShaderOfType:(unsigned int)arg1 withCString:(const char *)arg2 length:(int)arg3;
- (void)setupShaders;
- (void)setupTexture;
- (void)setupFBOs;
-     // Error parsing type: v24@0:8^16, name: setFinalDrawingColor:
-     // Error parsing type: v24@0:8^16, name: setInitialDrawingColor:
- (void)updateGLWithCurrentTime;
- (void)updateGLWithTime:(float)arg1;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

