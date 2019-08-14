//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableDictionary, RCOverlayBarLayer, RCUIConfiguration, UIButton;
@protocol RCWaveformSelectionOverlayDelegate;

@interface RCWaveformSelectionOverlay : UIView
{
    struct UIEdgeInsets _selectionAreaInsets;
    struct CGRect _selectionRect;
    RCOverlayBarLayer *_beginTimeSelection;
    RCOverlayBarLayer *_endTimeSelection;
    CALayer *_middleSelectionOverlay;
    CALayer *_corneredDimOverlayContainer;
    CALayer *_leftWaveformLightOverlay;
    CALayer *_rightWaveformLightOverlay;
    CALayer *_leftWaveformDimOverlay;
    CALayer *_rightWaveformDimOverlay;
    RCOverlayBarLayer *_currentTimeBar;
    RCOverlayBarLayer *_compactCurrentTimeBar;
    BOOL _beginTimeLayerOffsetForThumb;
    BOOL _endTimeLayerOffsetForThumb;
    BOOL _isRecording;
    NSMutableDictionary *_trackedTouches;
    double _requestedAnimatedLayoutDuration;
    BOOL _requestedNonAnimatedLayout;
    BOOL _sublayersCreated;
    BOOL _editingEnabled;
    BOOL _insertMode;
    BOOL _enablePlayBarTracking;
    BOOL _enableTimeTrackingInView;
    BOOL _barMatchesKnobRadius;
    BOOL _overviewTrimHandleStyle;
    BOOL _playBarOnly;
    BOOL _isOverView;
    id <RCWaveformSelectionOverlayDelegate> _delegate;
    double _selectedTimeRangeMinimumDuration;
    double _selectedTimeRangeMaximumDuration;
    double _assetCurrentTime;
    double _assetDuration;
    RCUIConfiguration *_UIConfiguration;
    double _axSegment;
    double _knobWidthMultiplier;
    double _playWidthMultiplier;
    long long _selectionMode;
    UIView *_selectionBackgroundView;
    double _trackedAssetCurrentTime;
    UIButton *_resetRegionButton;
    CDStruct_73a5d3ca _selectedTimeRange;
}

@property(retain, nonatomic) UIButton *resetRegionButton; // @synthesize resetRegionButton=_resetRegionButton;
@property(nonatomic) double trackedAssetCurrentTime; // @synthesize trackedAssetCurrentTime=_trackedAssetCurrentTime;
@property(nonatomic) __weak UIView *selectionBackgroundView; // @synthesize selectionBackgroundView=_selectionBackgroundView;
@property(nonatomic) long long selectionMode; // @synthesize selectionMode=_selectionMode;
@property(nonatomic) BOOL isOverView; // @synthesize isOverView=_isOverView;
@property(nonatomic) BOOL playBarOnly; // @synthesize playBarOnly=_playBarOnly;
@property(nonatomic) double playWidthMultiplier; // @synthesize playWidthMultiplier=_playWidthMultiplier;
@property(nonatomic) double knobWidthMultiplier; // @synthesize knobWidthMultiplier=_knobWidthMultiplier;
@property(nonatomic) BOOL overviewTrimHandleStyle; // @synthesize overviewTrimHandleStyle=_overviewTrimHandleStyle;
@property(nonatomic) BOOL barMatchesKnobRadius; // @synthesize barMatchesKnobRadius=_barMatchesKnobRadius;
@property(nonatomic) BOOL enableTimeTrackingInView; // @synthesize enableTimeTrackingInView=_enableTimeTrackingInView;
@property(nonatomic) BOOL enablePlayBarTracking; // @synthesize enablePlayBarTracking=_enablePlayBarTracking;
@property(nonatomic) BOOL insertMode; // @synthesize insertMode=_insertMode;
@property(nonatomic) BOOL isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic, getter=isEditingEnabled) BOOL editingEnabled; // @synthesize editingEnabled=_editingEnabled;
@property(nonatomic) double axSegment; // @synthesize axSegment=_axSegment;
@property(readonly, nonatomic) struct CGRect selectionRect; // @synthesize selectionRect=_selectionRect;
@property(copy, nonatomic) RCUIConfiguration *UIConfiguration; // @synthesize UIConfiguration=_UIConfiguration;
@property(nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(nonatomic) double assetCurrentTime; // @synthesize assetCurrentTime=_assetCurrentTime;
@property(nonatomic) double selectedTimeRangeMaximumDuration; // @synthesize selectedTimeRangeMaximumDuration=_selectedTimeRangeMaximumDuration;
@property(nonatomic) double selectedTimeRangeMinimumDuration; // @synthesize selectedTimeRangeMinimumDuration=_selectedTimeRangeMinimumDuration;
@property(readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) __weak id <RCWaveformSelectionOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_accessibilityIncreaseValue:(BOOL)arg1 bySegment:(double)arg2;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (BOOL)_axIsShowingSelectionBars;
- (struct CGRect)_alternateEndTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect)_endTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(char *)arg2;
- (BOOL)_shouldDisplayEndTimeText;
- (struct CGRect)_alternateBeginTimeRectWithSizedTextLayer:(id)arg1;
- (struct CGRect)_beginTimeRectWithSizedTextLayer:(id)arg1 isOffsetForThumb:(char *)arg2;
- (BOOL)_shouldOffsetSelectionBarTypeForThumb:(long long)arg1;
- (BOOL)_shouldDisplayBeginTimeText;
- (BOOL)__shouldDisplayEndTimeText;
- (BOOL)__shouldDisplayBeginTimeText;
- (id)_touchTrackingInfoForSelectionBarTye:(long long)arg1;
- (struct CGRect)_middleTimeRectWithFont:(id)arg1;
- (double)_minimumOverlayWidth;
- (double)_minimumOverlaySelectionWidth;
- (BOOL)_drawsSelectionForWidth:(double)arg1;
- (struct CGRect)_selectionRectForSelectedTimeRange:(CDStruct_73a5d3ca)arg1;
- (struct CGRect)_selectionHighlightBounds;
- (struct CGRect)_selectionBoundsIncludingKnobs;
- (struct CGRect)_selectionBoundsIncludingKnobsUsingMultiplier:(double)arg1;
- (double)_xAdjustmentAmount;
- (double)_effectiveSelectionWidth;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_clearStaleTouches;
- (void)_updateSelectedTimeRangeForTrackedTouchesAnimated:(BOOL)arg1;
- (BOOL)_beginTrackingSelectionBar:(id)arg1 selectionBarType:(long long)arg2 withTouch:(id)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitSelectionForPoint:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)_setWantsAnimatedLayoutDuration:(double)arg1;
- (void)_createSublayersIfNeeded;
- (void)_clearSublayers;
@property(readonly, nonatomic) long long endTimeIndicatorSelectionAffinity;
@property(readonly, nonatomic) long long beginTimeIndicatorSelectionAffinity;
@property(readonly, nonatomic) double currentTimeIndicatorCoordinate;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadSelectionOffsets;
- (void)resetSelectionButtonPressed;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)setSelectedTimeRange:(CDStruct_73a5d3ca)arg1 withAnimationDuration:(double)arg2;
- (void)setSelectionRect:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1 height:(double)arg2 selectionAreaInsets:(struct UIEdgeInsets)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

