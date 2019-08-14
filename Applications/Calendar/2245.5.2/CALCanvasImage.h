//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CALCanvasItem.h"

@class NSImage;

@interface CALCanvasImage : CALCanvasItem
{
    NSImage *_image;
    double _aspectRatio;
    BOOL _keepAspectRatio;
    double _alpha;
}

+ (id)imageWithTagID:(id)arg1 position:(struct CGPoint)arg2 size:(struct CGSize)arg3 image:(id)arg4;
+ (id)imageWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 image:(id)arg3;
+ (id)imageWithName:(id)arg1;
- (void).cxx_destruct;
- (struct CGRect)bounds;
- (BOOL)isHitByPoint:(struct CGPoint)arg1;
- (void)draw;
- (void)drawShadow;
- (void)setAlpha:(double)arg1;
- (double)alpha;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)keepAspectRatio;
- (id)setKeepAspectRatio:(BOOL)arg1;
- (id)initWithTagID:(id)arg1 position:(struct CGPoint)arg2 size:(struct CGSize)arg3 image:(id)arg4 delegate:(id)arg5 shown:(BOOL)arg6 selectable:(BOOL)arg7 userData:(id)arg8;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 image:(id)arg3;

@end

