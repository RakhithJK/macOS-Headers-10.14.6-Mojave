//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSOrderedSet, NUGLContext;

@interface NUGLPipeline : NUGLObject
{
    long long _buildStatus;
    NSError *_buildError;
    NUGLContext *_currentContext;
    NSMutableDictionary *_uniformValues;
    NSMutableDictionary *_uniformSamplers;
    NSMutableSet *_dirtyKeys;
    NSArray *_stages;
    NSDictionary *_uniforms;
    NSDictionary *_attributes;
    NSArray *_orderedAttributes;
    NSOrderedSet *_samplers;
}

@property(readonly, nonatomic) NSOrderedSet *samplers; // @synthesize samplers=_samplers;
@property(readonly, nonatomic) NSArray *orderedAttributes; // @synthesize orderedAttributes=_orderedAttributes;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSDictionary *uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, nonatomic) NSArray *stages; // @synthesize stages=_stages;
- (void).cxx_destruct;
- (void)_endDrawing:(id)arg1;
- (void)_beginDrawing:(id)arg1;
- (BOOL)_validate:(id)arg1;
- (void)_drawVertexArray:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)drawVertexArray:(id)arg1 range:(struct _NSRange)arg2 mode:(long long)arg3;
- (void)setSampler:(id)arg1 forUniform:(id)arg2;
- (id)samplerForUniform:(id)arg1;
- (void)setValue:(id)arg1 forUniform:(id)arg2;
- (id)valueForUniform:(id)arg1;
- (void)end:(id)arg1;
- (void)begin:(id)arg1;
- (void)run:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_build:(id)arg1;
- (BOOL)build:(id)arg1 error:(out id *)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)initWithStages:(id)arg1;
- (id)init;

@end

