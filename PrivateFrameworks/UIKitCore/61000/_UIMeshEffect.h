//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class CAMeshTransform;

@interface _UIMeshEffect : UIVisualEffect
{
    CAMeshTransform *_meshTransform;
    CAMeshTransform *_identityMeshTransform;
    BOOL _underlayMesh;
}

+ (id)_underlayMeshEffectZoom:(double)arg1;
+ (id)meshEffectZoom:(double)arg1;
- (void).cxx_destruct;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)_viewEntry;

@end

