//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Slideshows/MREffect.h>

@class MRImageProvider;

@interface MREffectHangingPicturesBackgroundStars : MREffect
{
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
        float _field10;
        float _field11;
        float _field12;
    } *mStars;
    float *mStarsVertices;
    float *mStarsTexCoords;
    float *mStarsAttributes;
    MRImageProvider *mBackgroundImageProvider;
    MRImageProvider *mStarImageProvider;
}

+ (void)initialize;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_initStars;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)_cleanup;
- (id)initWithEffectID:(id)arg1;
- (void)_unload;

@end

