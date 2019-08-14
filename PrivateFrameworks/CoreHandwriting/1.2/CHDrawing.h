//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>

@interface CHDrawing : NSObject <NSCopying>
{
    struct CJKChar _drawing;
}

+ (id)sortedArrayForPointIndices:(id)arg1;
@property(nonatomic) struct CJKChar drawing; // @synthesize drawing=_drawing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (set_6c38b8e1)computeDelayedStrokesUsingMinimumDrawingSize:(struct CGSize)arg1;
- (struct CGRect)boundingBoxForDrawingSegmentFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)appendSegment:(id)arg1 fromDrawing:(id)arg2;
- (id)findSubStrokeSegmentationPointsExcludingStrokes:(set_6c38b8e1)arg1;
- (id)filterPointsWithProximity:(double)arg1 fixedPoints:(id)arg2 points:(id)arg3;
- (id)findLocalYMaximaWithWindowSize:(unsigned long long)arg1 excludingStrokes:(set_6c38b8e1)arg2;
- (id)initialSegmentationPointIndicesForDrawing;
- (void)setLineHeight:(double)arg1;
- (vector_eb9481f9)strokeIndicesSortedByMinXCoordinate;
- (id)spatiallyResampledWithDistance:(double)arg1;
- (id)sortedDrawingUsingMinXCoordinate;
- (Matrix_273a43f8)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1 drawingAlgorithm:(int)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1;
- (id)xyRepresentation;
- (struct _NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1;
- (BOOL)isPrefixForDrawing:(id)arg1;
- (void)clear;
- (void)endStroke;
- (void)addPoint:(struct CGPoint)arg1;
- (struct CGRect)bounds;
- (struct CGRect)strokeBoundsAtIndex:(unsigned long long)arg1;
- (BOOL)containsStrokeLessThanSize:(struct CGSize)arg1;
- (unsigned long long)strokeCount;
- (struct CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;
- (unsigned long long)pointCount;
- (id)initWithContentsOfFile:(id)arg1;

@end

