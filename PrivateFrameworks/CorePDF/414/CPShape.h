//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CorePDF/CPGraphicObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

__attribute__((visibility("hidden")))
@interface CPShape : CPGraphicObject <CPDisposable>
{
    long long mcid;
    unsigned int pdfObjectID;
    struct CGPath *path;
    BOOL isUprightRectangle;
    int windingRule;
    double lineWidth;
    double miterLimit;
    int lineCap;
    int lineJoin;
    struct CGColor *fillColor;
    struct CGColor *strokeColor;
    struct CGPDFObject *fillObject;
    struct CGPDFObject *strokeObject;
    struct CGAffineTransform paintTransform;
    BOOL boundsComputed;
    BOOL renderedBoundsComputed;
}

- (unsigned int)pathElementCount;
- (void)makeLineFromVertex:(struct CGPoint)arg1 toVertex:(struct CGPoint)arg2;
- (id)string;
- (void)addShape:(id)arg1;
- (BOOL)canCombineWith:(id)arg1;
- (BOOL)isVisible;
- (BOOL)isStrokeFor:(id)arg1;
- (BOOL)hasSamePathAs:(id)arg1;
- (void)setPaintTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)paintTransform;
- (void)setLineJoin:(int)arg1;
- (int)lineJoin;
- (void)setLineCap:(int)arg1;
- (int)lineCap;
- (void)setMiterLimit:(double)arg1;
- (double)miterLimit;
- (void)setLineWidth:(double)arg1;
- (double)lineWidth;
- (BOOL)hasStroke;
- (void)setStrokeObject:(struct CGPDFObject *)arg1;
- (struct CGPDFObject *)strokeObject;
- (void)setStrokeColor:(struct CGColor *)arg1;
- (struct CGColor *)strokeColor;
- (BOOL)hasFill;
- (void)setFillObject:(struct CGPDFObject *)arg1;
- (struct CGPDFObject *)fillObject;
- (void)setFillColor:(struct CGColor *)arg1;
- (struct CGColor *)fillColor;
- (void)setWindingRule:(int)arg1;
- (int)windingRule;
- (long long)zOrder;
- (void)accept:(id)arg1;
- (id)attributes;
- (BOOL)isUprightRectangle;
- (struct CGRect)innerBounds;
- (void)recomputeRenderedBounds;
- (struct CGRect)renderedBounds;
- (void)setPath:(struct CGPath *)arg1;
- (struct CGPath *)path;
- (void)setPdfObjectID:(unsigned int)arg1;
- (unsigned int)pdfObjectID;
- (long long)mcid;
- (void)recomputeBounds;
- (struct CGRect)bounds;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)init;
- (id)initWithPDFShape:(struct CPPDFShape *)arg1;

@end
