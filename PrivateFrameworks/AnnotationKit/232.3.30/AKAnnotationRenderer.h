//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKAnnotationRenderer : NSObject
{
}

+ (Class)_rendererClassForAnnotation:(id)arg1;
+ (void)_testRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (void)_transformContextToModelCoordinates:(struct CGContext *)arg1 forAnnotation:(id)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGPath *)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (struct CGRect)_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (struct CGRect)_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (BOOL)annotationShouldAvoidRedrawDuringLiveResize:(id)arg1;
+ (BOOL)pointIsOnInside:(struct CGPoint)arg1 ofAnnotation:(id)arg2;
+ (BOOL)pointIsOnBorder:(struct CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3;
+ (void)renderAnnotation:(id)arg1 intoContext:(struct CGContext *)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGPath *)newTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2;
+ (struct CGRect)rectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect)arg2;
+ (struct CGRect)textBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect)arg2 optionalText:(id)arg3;
+ (struct CGSize)draggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect)drawingBoundsOfAnnotation:(id)arg1;

@end

