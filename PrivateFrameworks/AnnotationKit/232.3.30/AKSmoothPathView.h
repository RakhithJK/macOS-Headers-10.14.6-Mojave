//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AKBitmapFIFO, AKController, CHBoxcarFilterPointFIFO, CHPointStrokeFIFO, CHQuadCurvePointFIFO, NSColor;
@protocol AKSmoothPathViewDelegate;

@interface AKSmoothPathView : NSView
{
    double _cachedEffectiveStrokeWidthInModel;
    double _cachedModelToViewScale;
    BOOL _prestrokedOutputMode;
    BOOL _hasShadow;
    BOOL _applyModelBaseScaleFactorToStroke;
    BOOL _startedTouchDrawing;
    BOOL _isAddingPointWithoutSmoothing;
    BOOL _disableSingleDotSpecialCase;
    AKController *_controller;
    id <AKSmoothPathViewDelegate> _delegate;
    NSColor *_strokeColor;
    double _strokeWidth;
    double _shadowRadiusInModel;
    double _shadowRadiusInView;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    CHPointStrokeFIFO *_strokeFIFO;
    CHBoxcarFilterPointFIFO *_smoothingFIFO;
    CHQuadCurvePointFIFO *_interpolatingFIFO;
    AKBitmapFIFO *_bitmapFifo;
    double _currentWeight;
    double _singleDotCurrentSize;
    struct CGRect _singleDotRect;
}

+ (id)newSmoothPathViewForCurrentPlatformWithController:(id)arg1;
@property double singleDotCurrentSize; // @synthesize singleDotCurrentSize=_singleDotCurrentSize;
@property BOOL disableSingleDotSpecialCase; // @synthesize disableSingleDotSpecialCase=_disableSingleDotSpecialCase;
@property double currentWeight; // @synthesize currentWeight=_currentWeight;
@property(retain, nonatomic) AKBitmapFIFO *bitmapFifo; // @synthesize bitmapFifo=_bitmapFifo;
@property(retain, nonatomic) CHQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) CHBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) CHPointStrokeFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(nonatomic) double maxThickness; // @synthesize maxThickness=_maxThickness;
@property(nonatomic) double minThickness; // @synthesize minThickness=_minThickness;
@property(nonatomic) double maxPressure; // @synthesize maxPressure=_maxPressure;
@property(nonatomic) double minPressure; // @synthesize minPressure=_minPressure;
@property double cachedModelToViewScale; // @synthesize cachedModelToViewScale=_cachedModelToViewScale;
@property double shadowRadiusInView; // @synthesize shadowRadiusInView=_shadowRadiusInView;
@property double shadowRadiusInModel; // @synthesize shadowRadiusInModel=_shadowRadiusInModel;
@property struct CGRect singleDotRect; // @synthesize singleDotRect=_singleDotRect;
@property BOOL isAddingPointWithoutSmoothing; // @synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing;
@property(nonatomic) BOOL startedTouchDrawing; // @synthesize startedTouchDrawing=_startedTouchDrawing;
@property BOOL applyModelBaseScaleFactorToStroke; // @synthesize applyModelBaseScaleFactorToStroke=_applyModelBaseScaleFactorToStroke;
@property(nonatomic) BOOL hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) BOOL prestrokedOutputMode; // @synthesize prestrokedOutputMode=_prestrokedOutputMode;
@property(retain) id <AKSmoothPathViewDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)_updateInterpolatingFifoLineWidth;
- (double)_windowBackingScaleFactor;
-     // Error parsing type: 24@0:8@16, name: _pointForRecognizer:
- (double)_convertValueFromModelToSelf:(double)arg1;
- (double)_effectiveStrokeWidthInModel;
- (void)_updateShadowRadiusInView;
- (void)_setupShadowInContext:(struct CGContext *)arg1;
- (struct CGContext *)_getPlatformCGContext;
- (void)_clear;
- (double)weightForValue:(double)arg1;
- (void)handleDragAction:(id)arg1;
- (BOOL)_catchUpAccumulatedTouchesForRecognizer:(id)arg1;
- (void)handleTapAction:(id)arg1;
- (void)handleForwardedEvent:(id)arg1;
- (void)terminateStroke;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)startStroke;
- (void)drawRect:(struct CGRect)arg1;
- (id)drawing;
- (BOOL)isOpaque;
- (void)callDelegate;
- (void)updateInterpolatingFifoUnitScale;
- (void)_setupFilterChainWithBitmapFifo:(BOOL)arg1;
- (void)teardown;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithController:(id)arg1;

@end

