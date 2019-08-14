//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <CalendarUI/CUIKSingleDayTimelineGeometryDelegate-Protocol.h>
#import <CalendarUI/CUIKSingleDayTimelineLayoutScreenUtils-Protocol.h>
#import <CalendarUI/CalUIBoxOccurrenceContentDelegate-Protocol.h>

@class CalUIDayViewAllDayView, CalUIDayViewGadgetController, CalUIDayViewTimeLineView, HourLabel, NSArray, NSColor, NSDate, NSDateFormatter, NSLayoutConstraint, NSString, NSTextField, NSTimer;
@protocol CalUIDayViewGadgetAppearanceDelegate, CalUIDayViewGadgetDataSource;

@interface CalUIDayViewGadget : NSView <CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils, CalUIBoxOccurrenceContentDelegate>
{
    BOOL _allTimedEventsHaveFinished;
    CalUIDayViewGadgetController *_controller;
    id <CalUIDayViewGadgetDataSource> _dataSource;
    id <CalUIDayViewGadgetAppearanceDelegate> _appearanceDelegate;
    NSDate *_displayEnd;
    NSArray *_dayViewOccurrences;
    NSArray *_dayViewGridLines;
    NSArray *_dayViewGridLabels;
    NSDate *_nextRefreshDate;
    NSDate *_displayStart;
    NSDateFormatter *_dateFormatter;
    NSColor *_transparentColor;
    NSTimer *_refreshTimer;
    NSTimer *_nowLineTimer;
    NSView *_nowLine;
    NSView *_nowCircle;
    HourLabel *_nowLabel;
    NSTextField *_noEventsLabel;
    double _viewHeightInPixels;
    double _allDayViewHeight;
    CalUIDayViewAllDayView *_allDayView;
    CalUIDayViewTimeLineView *_timelineView;
    NSLayoutConstraint *_timeLineHeightConstraint;
    NSLayoutConstraint *_allDaySeparatorHeightConstraint;
    struct CGRect _displayedRect;
}

@property(retain, nonatomic) NSLayoutConstraint *allDaySeparatorHeightConstraint; // @synthesize allDaySeparatorHeightConstraint=_allDaySeparatorHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *timeLineHeightConstraint; // @synthesize timeLineHeightConstraint=_timeLineHeightConstraint;
@property(retain, nonatomic) CalUIDayViewTimeLineView *timelineView; // @synthesize timelineView=_timelineView;
@property(retain, nonatomic) CalUIDayViewAllDayView *allDayView; // @synthesize allDayView=_allDayView;
@property(readonly, nonatomic) double allDayViewHeight; // @synthesize allDayViewHeight=_allDayViewHeight;
@property(readonly, nonatomic) double viewHeightInPixels; // @synthesize viewHeightInPixels=_viewHeightInPixels;
@property(retain, nonatomic) NSTextField *noEventsLabel; // @synthesize noEventsLabel=_noEventsLabel;
@property(retain, nonatomic) HourLabel *nowLabel; // @synthesize nowLabel=_nowLabel;
@property(retain, nonatomic) NSView *nowCircle; // @synthesize nowCircle=_nowCircle;
@property(retain, nonatomic) NSView *nowLine; // @synthesize nowLine=_nowLine;
@property(nonatomic) BOOL allTimedEventsHaveFinished; // @synthesize allTimedEventsHaveFinished=_allTimedEventsHaveFinished;
@property(nonatomic) struct CGRect displayedRect; // @synthesize displayedRect=_displayedRect;
@property(retain, nonatomic) NSTimer *nowLineTimer; // @synthesize nowLineTimer=_nowLineTimer;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(readonly, nonatomic) NSColor *transparentColor; // @synthesize transparentColor=_transparentColor;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSDate *displayStart; // @synthesize displayStart=_displayStart;
@property(retain, nonatomic) NSDate *nextRefreshDate; // @synthesize nextRefreshDate=_nextRefreshDate;
@property(retain, nonatomic) NSArray *dayViewGridLabels; // @synthesize dayViewGridLabels=_dayViewGridLabels;
@property(retain, nonatomic) NSArray *dayViewGridLines; // @synthesize dayViewGridLines=_dayViewGridLines;
@property(retain, nonatomic) NSArray *dayViewOccurrences; // @synthesize dayViewOccurrences=_dayViewOccurrences;
@property(retain, nonatomic) NSDate *displayEnd; // @synthesize displayEnd=_displayEnd;
@property(retain, nonatomic) id <CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic) __weak id <CalUIDayViewGadgetDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (BOOL)shouldShowNewDotForOccurrence:(id)arg1;
- (BOOL)occurrenceWantsTentativeAppearance:(id)arg1;
- (BOOL)_isPreviewEvent:(id)arg1;
- (BOOL)shouldAlwaysShowColorBar;
- (BOOL)shouldOccurrenceShowTravelTime:(id)arg1;
- (id)titleFont;
- (id)locationFont;
- (BOOL)shouldShowTime;
- (long long)backgroundStyle;
- (id)dayGridView;
- (double)yValueInDayGridForDate:(id)arg1;
- (id)fontForEventOccurrencesWithWeight:(int)arg1;
- (double)RoundToScreenScale:(double)arg1;
- (double)RoundToScreenScaleForFloat:(double)arg1;
- (struct CGRect)RoundRectToScreenScaleForRect:(struct CGRect)arg1;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
- (double)barToBarHorizontalDistanceIncludingBarWidth;
@property(readonly, nonatomic) double timeWidth;
- (BOOL)shouldReverseLayoutDirection;
@property(readonly, nonatomic) BOOL originIsUpperLeft;
@property(readonly, nonatomic) double topPadding;
@property(readonly, nonatomic) double hourHeight;
- (id)endOfDay;
- (id)startOfDay;
- (void)_updateDateFormatterWithFormat:(id)arg1;
- (struct CGPoint)pointForHourLabel:(id)arg1;
- (void)_scheduleNowIndicatorUpdate;
- (void)_scheduleRefreshAfterDate:(id)arg1;
- (BOOL)_liesOnHour:(id)arg1;
- (BOOL)_isHourTooCloseToNow:(id)arg1;
- (id)_addMarginToDate:(id)arg1 shouldSearchBackward:(BOOL)arg2;
- (void)_calculateDisplayBounds;
- (void)_setDisplayTimesForNoEvents;
- (void)_hideNowIndicator:(BOOL)arg1;
- (void)_updateNowIndicator;
- (double)_hourLineWidth;
- (double)_hourLinesXPos;
- (void)_updateNoEventsLabel;
- (double)viewHeightInPoints;
@property(readonly, nonatomic) double viewHeightInSeconds;
@property(readonly, nonatomic) BOOL hasEventsToShow;
- (void)dataChanged;
- (BOOL)_shouldAllDayEventsShowColorBar;
- (BOOL)_shouldDisplayPreviewEventsAsTentative;
- (BOOL)_shouldDisplayCurrentTime;
- (BOOL)_isHourHeightFixed;
- (BOOL)_shouldAlwaysDrawAllDayArea;
- (id)_allDaySeparatorColor;
- (double)_allDaySeparatorHeight;
- (BOOL)_shouldDrawAllDaySeparator;
- (BOOL)_shouldDisplayEvent:(id)arg1 forTime:(id)arg2;
- (long long)_displayType;
@property(nonatomic) __weak CalUIDayViewGadgetController *controller; // @synthesize controller=_controller;
- (void)layout;
- (BOOL)isFlipped;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) double timelineViewHeight;
- (BOOL)wantsLayer;
- (void)alignAllDayLabelToFirstOccurrence;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 appearanceDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

