//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CalUIOccurrence.h"

@class CalUILayerBackedView, NSDictionary, NSFont, NSImage, NSLayoutConstraint, NSString, NSTextField, NSView;
@protocol CalUIDotOccurrenceDelegate;

@interface CalUIDotOccurrence : CalUIOccurrence
{
    BOOL _startsInThisRow;
    BOOL _endsInThisRow;
    BOOL _implicitResizePending;
    BOOL _cachedIsMultiDayTimedEvent;
    BOOL _showsStartTime;
    BOOL _showsEndTime;
    BOOL _updateConstraintsPending;
    long long _startColumn;
    long long _endColumn;
    double _dotDiameter;
    double _occurrenceHeight;
    double _topInset;
    NSView *_leadingDayView;
    NSView *_trailingDayView;
    NSTextField *_titleField;
    NSTextField *_leftTimeField;
    NSTextField *_rightTimeField;
    NSLayoutConstraint *_multiDayTimedStartTimeConstraint;
    NSLayoutConstraint *_titleBottomInsetConstraint;
    NSLayoutConstraint *_titleLeftInsetConstraint;
    NSLayoutConstraint *_titleRightInsetConstraint;
    NSLayoutConstraint *_leftTimeFieldBottomSpacingConstraint;
    NSLayoutConstraint *_rightTimeFieldBottomSpacingConstraint;
    NSLayoutConstraint *_rightTimeFieldRightInsetConstraint;
    NSLayoutConstraint *_dotBottomInsetConstraint;
    NSLayoutConstraint *_dotVerticalCenteringConstraint;
    NSLayoutConstraint *_dotHeightConstraint;
    NSLayoutConstraint *_dotWidthConstraint;
    NSLayoutConstraint *_dotLeftInsetConstraint;
    NSString *_cachedStartTimeString;
    NSString *_cachedEndTimeString;
    CalUILayerBackedView *_dot;
    NSImage *_oldDotImage;
    NSImage *_oldBackgroundImage;
    NSDictionary *_views;
    NSDictionary *_metrics;
    NSFont *_fontForTitleField;
    NSFont *_fontForTimeFields;
}

+ (id)interestedDragTypes;
+ (void)initialize;
@property(retain) NSFont *fontForTimeFields; // @synthesize fontForTimeFields=_fontForTimeFields;
@property(retain) NSFont *fontForTitleField; // @synthesize fontForTitleField=_fontForTitleField;
@property BOOL updateConstraintsPending; // @synthesize updateConstraintsPending=_updateConstraintsPending;
@property BOOL showsEndTime; // @synthesize showsEndTime=_showsEndTime;
@property BOOL showsStartTime; // @synthesize showsStartTime=_showsStartTime;
@property(retain) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain) NSDictionary *views; // @synthesize views=_views;
@property(retain) NSImage *oldBackgroundImage; // @synthesize oldBackgroundImage=_oldBackgroundImage;
@property(retain) NSImage *oldDotImage; // @synthesize oldDotImage=_oldDotImage;
@property(retain) CalUILayerBackedView *dot; // @synthesize dot=_dot;
@property BOOL cachedIsMultiDayTimedEvent; // @synthesize cachedIsMultiDayTimedEvent=_cachedIsMultiDayTimedEvent;
@property(retain) NSString *cachedEndTimeString; // @synthesize cachedEndTimeString=_cachedEndTimeString;
@property(retain) NSString *cachedStartTimeString; // @synthesize cachedStartTimeString=_cachedStartTimeString;
@property(retain) NSLayoutConstraint *dotLeftInsetConstraint; // @synthesize dotLeftInsetConstraint=_dotLeftInsetConstraint;
@property(retain) NSLayoutConstraint *dotWidthConstraint; // @synthesize dotWidthConstraint=_dotWidthConstraint;
@property(retain) NSLayoutConstraint *dotHeightConstraint; // @synthesize dotHeightConstraint=_dotHeightConstraint;
@property(retain) NSLayoutConstraint *dotVerticalCenteringConstraint; // @synthesize dotVerticalCenteringConstraint=_dotVerticalCenteringConstraint;
@property(retain) NSLayoutConstraint *dotBottomInsetConstraint; // @synthesize dotBottomInsetConstraint=_dotBottomInsetConstraint;
@property(retain) NSLayoutConstraint *rightTimeFieldRightInsetConstraint; // @synthesize rightTimeFieldRightInsetConstraint=_rightTimeFieldRightInsetConstraint;
@property(retain) NSLayoutConstraint *rightTimeFieldBottomSpacingConstraint; // @synthesize rightTimeFieldBottomSpacingConstraint=_rightTimeFieldBottomSpacingConstraint;
@property(retain) NSLayoutConstraint *leftTimeFieldBottomSpacingConstraint; // @synthesize leftTimeFieldBottomSpacingConstraint=_leftTimeFieldBottomSpacingConstraint;
@property(retain) NSLayoutConstraint *titleRightInsetConstraint; // @synthesize titleRightInsetConstraint=_titleRightInsetConstraint;
@property(retain) NSLayoutConstraint *titleLeftInsetConstraint; // @synthesize titleLeftInsetConstraint=_titleLeftInsetConstraint;
@property(retain) NSLayoutConstraint *titleBottomInsetConstraint; // @synthesize titleBottomInsetConstraint=_titleBottomInsetConstraint;
@property(retain) NSLayoutConstraint *multiDayTimedStartTimeConstraint; // @synthesize multiDayTimedStartTimeConstraint=_multiDayTimedStartTimeConstraint;
@property(retain) NSTextField *rightTimeField; // @synthesize rightTimeField=_rightTimeField;
@property(retain) NSTextField *leftTimeField; // @synthesize leftTimeField=_leftTimeField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
@property __weak NSView *trailingDayView; // @synthesize trailingDayView=_trailingDayView;
@property __weak NSView *leadingDayView; // @synthesize leadingDayView=_leadingDayView;
@property double topInset; // @synthesize topInset=_topInset;
@property double occurrenceHeight; // @synthesize occurrenceHeight=_occurrenceHeight;
@property double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
@property BOOL implicitResizePending; // @synthesize implicitResizePending=_implicitResizePending;
@property long long endColumn; // @synthesize endColumn=_endColumn;
@property long long startColumn; // @synthesize startColumn=_startColumn;
@property BOOL endsInThisRow; // @synthesize endsInThisRow=_endsInThisRow;
@property BOOL startsInThisRow; // @synthesize startsInThisRow=_startsInThisRow;
- (void).cxx_destruct;
- (void)updateTitleBottomInsetConstant;
- (void)updateBottomConstraintSpacingForTimeFields;
- (void)updateRightConstraintsForTimeFields;
- (void)setFont:(id)arg1;
- (id)realHitTest:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDragged:(id)arg1;
- (id)newDesiredTrackingAreas;
- (BOOL)resizesHorizontally;
- (BOOL)isMultiDayTimedEvent;
- (long long)compare:(id)arg1;
- (struct CGPoint)offsetForDragImage:(id)arg1;
- (id)imageForInternalDragOperation;
- (struct CGRect)inspectorTargetRectInScreenCoordinates;
- (id)viewController;
- (void)readyForDisplay;
- (void)layout;
- (void)updateMultiDayTimedStartTimeConstraint;
- (void)initializeLayoutForTimeFieldsIfNeeded;
- (void)updateConstraints;
- (void)setNeedsUpdateFieldConstraints:(BOOL)arg1;
- (BOOL)shouldUseLeftTimeFieldForStartTime;
- (id)stringForEventTime:(id)arg1 inEventTimeZone:(BOOL)arg2;
- (void)updateTimeText;
- (void)updateTitleText;
- (void)timeFieldVisibilitySettingDidChange;
- (void)updateShowsTime;
- (void)refreshAppearance;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)updateFontForTextAttributes;
- (id)timeAttributes;
- (id)titleAttributes;
- (BOOL)hasNonStandardDotIcon;
- (void)updateDotVerticalConstraintsConstant;
- (void)updateDotVerticalConstraints;
- (BOOL)updateWithEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 container:(id)arg2 delegate:(id)arg3 viewController:(id)arg4;

// Remaining properties
@property(nonatomic) __weak id <CalUIDotOccurrenceDelegate> delegate; // @dynamic delegate;

@end

