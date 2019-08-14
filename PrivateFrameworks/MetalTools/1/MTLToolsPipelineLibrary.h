//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLPipelineLibrarySPI-Protocol.h>

@class MTLToolsPointerArray, NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache;

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>
{
    MTLToolsPointerArray *_pipelineStates;
    MTLToolsPointerArray *_computePipelineStates;
}

@property(readonly, nonatomic) MTLToolsPointerArray *computePipelineStates; // @synthesize computePipelineStates=_computePipelineStates;
@property(readonly, nonatomic) MTLToolsPointerArray *pipelineStates; // @synthesize pipelineStates=_pipelineStates;
@property(readonly, nonatomic) id <MTLPipelineCache> functionCache;
@property(readonly, nonatomic) id <MTLPipelineCache> pipelineCache;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
@property BOOL disableRunTimeCompilation;
@property(readonly) NSArray *pipelineNames;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;
- (void)acceptVisitor:(id)arg1;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

