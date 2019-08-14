//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class CIImage;

@interface NUCISourceNode : NUSourceNode
{
    CIImage *_image;
    long long _orientation;
}

- (void).cxx_destruct;
- (id)_evaluateImageProperties:(out id *)arg1;
- (CDStruct_912cb5d2)pixelSize;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateImage:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (BOOL)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (id)initWithSettings:(id)arg1;
- (id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3;
- (id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3;

@end

