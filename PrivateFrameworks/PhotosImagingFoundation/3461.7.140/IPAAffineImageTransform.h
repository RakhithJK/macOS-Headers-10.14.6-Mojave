//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosImagingFoundation/IPAImageTransform.h>

__attribute__((visibility("hidden")))
@interface IPAAffineImageTransform : IPAImageTransform
{
    BOOL _canAlignToPixelsExactly;
    struct Matrix4d _matrix;
}

- (id).cxx_construct;
- (id)description;
- (BOOL)canAlignToPixelsExactly;
- (struct Vector2d)mapVector:(struct Vector2d)arg1;
- (id)inverseTransform;
- (struct Matrix4d)matrix;
- (id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 matrix:(const struct Matrix4d *)arg3 canAlignToPixelsExactly:(BOOL)arg4;

@end
