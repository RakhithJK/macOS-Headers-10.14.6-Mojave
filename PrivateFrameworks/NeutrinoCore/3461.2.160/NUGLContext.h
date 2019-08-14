//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSString, NSThread, NUGLObjectPool, NUGLPipeline, NUGLVertexArray;

@interface NUGLContext : NSObject
{
    NSMutableDictionary *_state;
    NSMapTable *_bindings;
    NSThread *_thread;
    struct Context *_gl;
    NUGLVertexArray *_unitQuad;
    NUGLPipeline *_textureDrawingPipeline;
    NUGLObjectPool *_sharedObjectPool;
    NUGLObjectPool *_privateObjectPool;
}

+ (void)deleteVertexArray:(id)arg1;
+ (void)deletePipeline:(id)arg1;
+ (void)deleteProgram:(id)arg1;
+ (id)addLineNumbersToLines:(id)arg1;
+ (void)splitSource:(id)arg1 intoLines:(id)arg2;
+ (id)sourceWithLineNumbersFromSourceArray:(id)arg1;
+ (void)deleteShader:(id)arg1;
+ (void)deleteBuffer:(id)arg1;
+ (void)deleteTexture:(id)arg1;
+ (unsigned int)_textureType:(id)arg1;
+ (void)deleteRenderbuffer:(id)arg1;
+ (void)deleteFramebuffer:(id)arg1;
+ (void)executeOnDevice:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)execute:(CDUnknownBlockType)arg1;
+ (id)sharedContext;
+ (id)enumString:(unsigned int)arg1;
+ (id)errorString:(unsigned int)arg1;
@property(readonly, nonatomic) NUGLObjectPool *privateObjectPool; // @synthesize privateObjectPool=_privateObjectPool;
@property(readonly, nonatomic) NUGLObjectPool *sharedObjectPool; // @synthesize sharedObjectPool=_sharedObjectPool;
- (void).cxx_destruct;
- (void)_purgeObjectsOfType:(unsigned int)arg1 fromPool:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_purgeObjectPool:(id)arg1;
- (void)purgeObjectPool:(id)arg1;
- (void)drawVertexArray:(unsigned int)arg1 range:(struct _NSRange)arg2;
- (void)setVertexArrayAttribute:(id)arg1 atIndex:(unsigned long long)arg2 offset:(int)arg3 stride:(int)arg4;
- (void)disableVertexArrayAtIndex:(unsigned long long)arg1;
- (void)enableVertexArrayAtIndex:(unsigned long long)arg1;
- (void)unbindVertexArray:(id)arg1;
- (void)bindVertexArray:(id)arg1;
- (void)_deleteVertexArray:(unsigned int)arg1;
- (unsigned int)_generateVertexArray:(id)arg1;
- (void)generateVertexArray:(id)arg1;
- (BOOL)validatePipeline:(id)arg1 error:(out id *)arg2;
- (void)removeProgram:(id)arg1 fromPipeline:(id)arg2;
- (void)addProgram:(id)arg1 toPipeline:(id)arg2;
- (void)unbindPipeline:(id)arg1;
- (void)bindPipeline:(id)arg1;
- (void)_deletePipeline:(unsigned int)arg1;
- (unsigned int)_generatePipeline:(id)arg1;
- (void)generatePipeline:(id)arg1;
- (void)setProgramUniform:(id)arg1 location:(int)arg2 value:(id)arg3;
- (void)setProgramUniform:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)getProgramAttributes:(id)arg1;
- (id)getProgramUniforms:(id)arg1;
- (BOOL)linkProgram:(id)arg1 error:(out id *)arg2;
- (void)_deleteProgram:(unsigned int)arg1;
- (unsigned int)_generateProgram:(id)arg1;
- (void)generateProgram:(id)arg1;
- (BOOL)compileShader:(id)arg1 error:(out id *)arg2;
- (void)_deleteShader:(unsigned int)arg1;
- (unsigned int)_generateShader:(unsigned int)arg1 pool:(id)arg2;
- (void)generateShader:(id)arg1;
- (void)unmapBuffer:(id)arg1;
- (void *)mapBuffer:(id)arg1 range:(struct _NSRange)arg2 options:(unsigned int)arg3;
- (void)allocateBufferStorage:(id)arg1;
- (void)unbindBuffer:(id)arg1;
- (void)bindBuffer:(id)arg1;
- (void)_deleteBuffer:(unsigned int)arg1;
- (unsigned int)_generateBuffer:(id)arg1;
- (void)generateBuffer:(id)arg1;
- (int)_pixelRowLengthFromBuffer:(id)arg1 alignment:(int)arg2;
- (int)_pixelAlignmentFromBuffer:(id)arg1;
- (void)copyRect:(CDStruct_996ac03c)arg1 intoBuffer:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3;
- (void)copyRect:(CDStruct_996ac03c)arg1 intoTexture:(id)arg2 atPoint:(CDStruct_912cb5d2)arg3;
- (void)updateTexture:(id)arg1 inRect:(CDStruct_996ac03c)arg2 fromBuffer:(id)arg3 atPoint:(CDStruct_912cb5d2)arg4;
- (void)detachTexture:(id)arg1 fromFramebuffer:(id)arg2 attachment:(unsigned int)arg3;
- (void)attachTexture:(id)arg1 toFramebuffer:(id)arg2 attachment:(unsigned int)arg3;
- (id)_pixelFormatForInternalFormat:(unsigned int)arg1;
- (int)_internalTextureFormatForPixelFormat:(id)arg1 format:(unsigned int *)arg2 type:(unsigned int *)arg3;
- (int)_internalTextureFormatForPixelFormat:(id)arg1;
- (void)setTextureStorageFromIOSurface:(id)arg1;
- (void)setTextureStorageSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)_setActiveTextureUnit:(unsigned int)arg1;
- (unsigned int)_activeTextureUnit;
- (void)unbindSampler:(id)arg1 atIndex:(unsigned int)arg2;
- (void)bindSampler:(id)arg1 atIndex:(unsigned int)arg2;
- (void)unbindTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)bindTexture:(id)arg1 atIndex:(unsigned int)arg2;
- (void)unbindTexture:(id)arg1;
- (void)bindTexture:(id)arg1;
- (void)_deleteTexture:(unsigned int)arg1;
- (unsigned int)_generateTexture:(id)arg1 ofType:(unsigned int)arg2;
- (void)generateTexture:(id)arg1;
- (id)renderbufferStorageFormat;
- (CDStruct_912cb5d2)renderbufferStorageSize;
- (void)detachRenderbuffer:(id)arg1 fromFramebuffer:(id)arg2 attachment:(unsigned int)arg3;
- (void)attachRenderbuffer:(id)arg1 toFramebuffer:(id)arg2 attachment:(unsigned int)arg3;
- (unsigned int)_renderbufferFormatForPixelFormat:(id)arg1;
- (void)setRenderbufferStorageSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (void)unbindRenderbuffer:(id)arg1;
- (void)bindRenderbuffer:(id)arg1;
- (void)_deleteRenderbuffer:(unsigned int)arg1;
- (unsigned int)_generateRenderbuffer:(id)arg1;
- (void)generateRenderbuffer:(id)arg1;
- (BOOL)checkFramebufferComplete:(id)arg1;
- (void)unbindFramebuffer:(id)arg1;
- (void)bindFramebuffer:(id)arg1;
- (void)_deleteFramebuffer:(unsigned int)arg1;
- (unsigned int)_generateFramebuffer:(id)arg1;
- (void)generateFramebuffer:(id)arg1;
- (id)description;
@property(nonatomic) long long virtualScreen;
- (id)simpleQuadVertexArray;
- (id)simpleTextureDrawingPipeline;
- (void)drawTexture:(id)arg1 inRect:(CDStruct_996ac03c)arg2 atPoint:(CDStruct_912cb5d2)arg3;
- (void)drawTexture:(id)arg1 fromRect:(CDStruct_996ac03c)arg2 toRect:(CDStruct_996ac03c)arg3;
- (void)clearWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setViewport:(CDStruct_996ac03c)arg1;
- (id)_unbindObject:(id)arg1 target:(unsigned int)arg2;
- (unsigned int)_bindingForObject:(id)arg1;
- (void)_bindObject:(id)arg1 target:(unsigned int)arg2;
- (id)_popObject:(id)arg1 forState:(unsigned int)arg2;
- (id)_currentObjectForState:(unsigned int)arg1;
- (id)_pushObject:(id)arg1 forState:(unsigned int)arg2;
@property(readonly, nonatomic) NSArray *extensions;
@property(readonly, nonatomic) NSString *versionString;
@property(readonly, nonatomic) NSString *rendererString;
@property(readonly, nonatomic) NSString *vendorString;
- (BOOL)isCurrent;
- (void)execute:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) struct _CGLContextObject *CGLContext;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

