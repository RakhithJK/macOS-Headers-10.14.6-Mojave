//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ModelIO/MDLComponent-Protocol.h>

@class MDLAnimatedScalarArray, NSArray;

@protocol MDLMorphDeformerComponent <MDLComponent>
@property(readonly, nonatomic) MDLAnimatedScalarArray *weights;
@property(readonly, nonatomic) NSArray *shapeSetTargetCounts;
@property(readonly, nonatomic) NSArray *shapeSetTargetWeights;
@property(readonly, nonatomic) NSArray *targetShapes;
@end

