//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXAutoloopVideoTask.h>

@class PXAutoloopVideoRecipe;

@interface PXAutoloopVideoProcessTask : PXAutoloopVideoTask
{
    BOOL _shouldExtractGateFeatures;
    PXAutoloopVideoRecipe *_outputRecipe;
}

@property(nonatomic) BOOL shouldExtractGateFeatures; // @synthesize shouldExtractGateFeatures=_shouldExtractGateFeatures;
@property(retain) PXAutoloopVideoRecipe *outputRecipe; // @synthesize outputRecipe=_outputRecipe;
- (void).cxx_destruct;
- (void)performTaskWithInput:(id)arg1;

@end

