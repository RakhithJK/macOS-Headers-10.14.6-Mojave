//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRCroppingSprite, MRImage, MRTextRenderer;

@interface MREffectSnapshotTitle : MREffect
{
    MRTextRenderer *mTextRenderer0;
    MRImage *mImage0;
    MRCroppingSprite *mTextSprite0;
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (id)init;
- (void)_unload;
- (long long)_maxLinesForTextElement:(id)arg1;
- (struct CGSize)_maxSizeForTextElement:(id)arg1;
- (void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;

@end

