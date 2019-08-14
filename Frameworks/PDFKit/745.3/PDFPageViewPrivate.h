//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSMutableArray, PDFAnnotation, PDFPage, PDFPageLayer, PDFPageLayerEffect, PDFRenderingProperties, UIImage, UIView;
@protocol PDFPageLayerGeometryInterface;

__attribute__((visibility("hidden")))
@interface PDFPageViewPrivate : NSObject
{
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    PDFPageLayer *pageLayer;
    PDFPageLayerEffect *searchLayer;
    PDFPageLayerEffect *selectionLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeWidgetAnnotation;
    UIView *activeWidgetControl;
    NSMutableArray *pageSignatures;
    CALayer *backgroundLayer;
    UIImage *backgroundImage;
    int backgroundQuality;
    unsigned long long visibilityDelegateIndex;
    BOOL isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize bookmarkSize;
}

- (void).cxx_destruct;

@end

