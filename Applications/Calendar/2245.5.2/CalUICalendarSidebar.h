//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CalUICalendarListDataSourceDelegate-Protocol.h"
#import "CalUIMiniMonthViewDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class CALMainController, CalUICalendarListDataSource, CalUICalendarListViewController, NSMutableArray, NSMutableDictionary, NSScrollView, NSSplitView, NSString, NSView;

@interface CalUICalendarSidebar : NSViewController <CalUICalendarListDataSourceDelegate, NSSplitViewDelegate, CalUIMiniMonthViewDelegate>
{
    BOOL _splitViewIsLiveResizing;
    BOOL _ignoreSplitViewResize;
    BOOL _setupComplete;
    BOOL _shouldImmediatelyLoadDeferredUI;
    BOOL _showWeekNumbers;
    CalUICalendarListViewController *_calendarListViewController;
    CALMainController *_mainController;
    NSSplitView *_calendarListSplitView;
    NSScrollView *_calendarListScrollView;
    NSView *_miniMonthContainerView;
    NSMutableArray *_miniMonthViews;
    CalUICalendarListDataSource *_calendarListDataSource;
    long long _firstDayOfWeek;
    NSMutableDictionary *_subviewFrames;
}

@property(retain) NSMutableDictionary *subviewFrames; // @synthesize subviewFrames=_subviewFrames;
@property BOOL showWeekNumbers; // @synthesize showWeekNumbers=_showWeekNumbers;
@property long long firstDayOfWeek; // @synthesize firstDayOfWeek=_firstDayOfWeek;
@property(retain) CalUICalendarListDataSource *calendarListDataSource; // @synthesize calendarListDataSource=_calendarListDataSource;
@property BOOL shouldImmediatelyLoadDeferredUI; // @synthesize shouldImmediatelyLoadDeferredUI=_shouldImmediatelyLoadDeferredUI;
@property BOOL setupComplete; // @synthesize setupComplete=_setupComplete;
@property BOOL ignoreSplitViewResize; // @synthesize ignoreSplitViewResize=_ignoreSplitViewResize;
@property BOOL splitViewIsLiveResizing; // @synthesize splitViewIsLiveResizing=_splitViewIsLiveResizing;
@property(retain) NSMutableArray *miniMonthViews; // @synthesize miniMonthViews=_miniMonthViews;
@property(retain) NSView *miniMonthContainerView; // @synthesize miniMonthContainerView=_miniMonthContainerView;
@property(retain) NSScrollView *calendarListScrollView; // @synthesize calendarListScrollView=_calendarListScrollView;
@property(retain) NSSplitView *calendarListSplitView; // @synthesize calendarListSplitView=_calendarListSplitView;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
@property(retain) CalUICalendarListViewController *calendarListViewController; // @synthesize calendarListViewController=_calendarListViewController;
- (void).cxx_destruct;
- (id)delegateAccountUIDForListController:(id)arg1;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)miniMonthViewDidMoveBackOneMonth:(id)arg1;
- (void)miniMonthViewDidMoveForwardOneMonth:(id)arg1;
- (id)firstDayOfMonthContainingDate:(id)arg1;
- (long long)daysInMonthContainingDate:(id)arg1;
- (void)saveChangesToEvent:(id)arg1;
- (void)selectDate:(id)arg1;
- (void)showDate:(id)arg1;
- (id)activeDate;
- (id)calendar;
- (id)outlineView;
- (id)activeViewController;
- (id)calendarViewsController;
- (void)_removeCalendarListFromHierarchy;
- (void)_addCalendarListToHierarchy;
- (void)_updateFormatterForMiniMonth:(id)arg1;
- (double)_maximumDividerHeight;
- (double)_minimumHeightForOutlineView;
- (void)_constrainMiniMonthViews;
- (void)_layoutMiniMonthViewsWithNumberOfMonths:(long long)arg1;
- (void)_layoutMiniMonthViews;
- (id)_miniMonthWithFrame:(struct CGRect)arg1 date:(id)arg2;
- (void)updateSizesForMiniMonth:(id)arg1;
- (void)_removeAllMiniMonthViews;
- (void)_finishedLiveResize;
- (void)_startedLiveResize;
- (void)saveMiniMonthCount;
- (void)sidebarDidToggleOpen:(BOOL)arg1;
- (void)sidebarWillToggleOpen:(BOOL)arg1;
- (void)dateTimeFormatChanged;
- (void)dayChanged:(id)arg1;
- (void)refresh;
- (void)cleanup;
- (void)prepareForAnimatedOpening;
- (void)deferredInitialUILoad;
- (void)setup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithMainController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

