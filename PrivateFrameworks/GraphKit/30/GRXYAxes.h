//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GraphKit/GRAxes.h>

#import <GraphKit/NSCoding-Protocol.h>
#import <GraphKit/NSCopying-Protocol.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary;

@interface GRXYAxes : GRAxes <NSCoding, NSCopying>
{
    struct CGSize _maxXUnrotatedSize;
    struct CGSize _maxYUnrotatedSize;
    struct CGSize _reserved5;
    long long _reserved6;
    long long _reserved7;
    BOOL _customXLabels;
    BOOL _customYLabels;
    double _maxXLabelWidth;
    double _maxXLabelHeight;
    double _maxYLabelWidth;
    double _maxYLabelHeight;
    NSMapTable *_fastStringImageSizeCache;
    NSMutableDictionary *_labelTextAttributes;
    NSMutableDictionary *_XTitleTextAttributes;
    NSMutableDictionary *_YTitleTextAttributes;
    NSMapTable *_fastStringTypographicSizeCache;
    BOOL _reserved9;
    BOOL _hideXLabels;
    BOOL _hideYLabels;
    NSMutableArray *_zoomHistory;
}

+ (void)initialize;
- (struct CGPoint)locationForXValue:(double)arg1 yValue:(double)arg2;
- (double)yValueAtPoint:(struct CGPoint)arg1;
- (double)xValueAtPoint:(struct CGPoint)arg1;
- (double)valueAtPoint:(struct CGPoint)arg1 forAxis:(unsigned short)arg2;
- (double)yPixelValue;
- (double)xPixelValue;
- (double)pixelValueForAxis:(unsigned short)arg1;
- (BOOL)selectPoint:(struct CGPoint)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)clickPoint:(struct CGPoint)arg1;
- (BOOL)_autoscale;
- (BOOL)_zoomOut;
- (BOOL)_zoomInRect:(struct CGRect)arg1;
- (id)_yTitleTextAttributes;
- (id)_xTitleTextAttributes;
- (id)_labelTextAttributes;
- (void)drawYGridRect:(struct CGRect)arg1;
- (void)drawYAxisRect:(struct CGRect)arg1;
- (void)drawXGridRect:(struct CGRect)arg1;
- (void)drawXAxisRect:(struct CGRect)arg1;
- (void)drawAxesRect:(struct CGRect)arg1;
- (void)drawAxisRect:(struct CGRect)arg1 forAxis:(unsigned short)arg2;
- (void)drawGridRect:(struct CGRect)arg1;
- (void)drawGridRect:(struct CGRect)arg1 forAxis:(unsigned short)arg2;
- (void)drawLegendSampleInRect:(struct CGRect)arg1 forDataSet:(unsigned long long)arg2 withHighlight:(BOOL)arg3;
- (BOOL)computeLayout;
- (id)legendLabels;
- (struct CGRect)_adjustedPlotRect;
- (void)setDelegate:(id)arg1;
- (BOOL)computeYMajorMinorUnits;
- (BOOL)computeXMajorMinorUnits;
- (BOOL)computeUnitsForAxis:(unsigned short)arg1;
- (void)_extraMarginSpaceLeft:(double *)arg1 right:(double *)arg2 top:(double *)arg3 bottom:(double *)arg4;
- (void)setCanvasRect:(struct CGRect)arg1;
- (void)_updateTextProperties;
- (void)dataSet:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)chart:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)didSetProperty:(id)arg1 forKey:(id)arg2 replacingOldValue:(id)arg3 andShouldReload:(char *)arg4 andRelayout:(char *)arg5 andRedisplay:(char *)arg6;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

