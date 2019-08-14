//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NURenderTagNode : NURenderNode
{
    NSString *_name;
}

+ (BOOL)validateName:(id)arg1 error:(out id *)arg2;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)descriptionSubClassHook;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(BOOL)arg2;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
@property(retain) NURenderNode *input;
- (id)initWithInput:(id)arg1 name:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

