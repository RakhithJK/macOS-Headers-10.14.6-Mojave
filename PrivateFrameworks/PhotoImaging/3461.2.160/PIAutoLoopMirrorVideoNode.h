//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoImaging/PIAutoLoopVideoNode.h>

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode
{
}

- (id)_evaluateAudioMix:(out id *)arg1;
- (BOOL)requiresAudioMix;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (BOOL)requiresVideoComposition;
- (id)_evaluateVideo:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (CDStruct_1b6d18a9)_conformTime:(CDStruct_1b6d18a9)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;

@end

