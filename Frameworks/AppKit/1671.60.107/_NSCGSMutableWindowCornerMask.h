//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCGSMutableWindowCornerMask.h>

__attribute__((visibility("hidden")))
@interface _NSCGSMutableWindowCornerMask : NSCGSMutableWindowCornerMask
{
    struct CGImage *_image;
    double _imageScale;
    struct CGRect _center;
}

- (void)setCenter:(struct CGRect)arg1;
- (struct CGRect)center;
- (void)setImageScale:(double)arg1;
- (double)imageScale;
- (void)setImage:(struct CGImage *)arg1;
- (struct CGImage *)image;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

