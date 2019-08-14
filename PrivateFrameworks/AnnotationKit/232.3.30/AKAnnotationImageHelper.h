//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAnnotationImageHelper : NSObject
{
}

+ (struct CGImage *)createImageOfAnnotation:(id)arg1 withScale:(double)arg2;
+ (void)_drawImageForSignature:(id)arg1 withFillColor:(id)arg2 scale:(double)arg3 pathOffset:(struct CGPoint)arg4 inContext:(struct CGContext *)arg5;
+ (id)imageOfSize:(struct CGSize)arg1 withFillColor:(id)arg2 forSignature:(id)arg3;
+ (void)_drawImageForPath:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
+ (id)imageOfSize:(struct CGSize)arg1 forPath:(id)arg2;
+ (void)_drawFilledShapeImageForAnnotation:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
+ (id)_imageOfSize:(struct CGSize)arg1 forAnnotation:(id)arg2 strokeWidth:(double)arg3 withFillColor:(BOOL)arg4;
+ (id)imageOfSize:(struct CGSize)arg1 forAnnotation:(id)arg2;
+ (id)imageOfSize:(struct CGSize)arg1 forAnnotationTag:(long long)arg2;
+ (id)imageForShapeTag:(long long)arg1;

@end

