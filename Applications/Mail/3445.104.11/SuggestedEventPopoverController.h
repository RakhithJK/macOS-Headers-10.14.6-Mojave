//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "EKViewWindowController-Protocol.h"

@class CalUIDayViewGadgetController, EKEventViewController, NSArray, NSLayoutConstraint, NSStackView, NSString, NSView, SGRealtimeEvent, SuggestedEventDayViewAppearanceDelegate;
@protocol CalUIDayViewGadgetAppearanceDelegate, SuggestedEventPopoverControllerDelegate;

@interface SuggestedEventPopoverController : NSViewController <EKViewWindowController>
{
    EKEventViewController *_eventViewController;
    EKEventViewController *_detailedViewController;
    CalUIDayViewGadgetController *_dayViewGadgetController;
    id <CalUIDayViewGadgetAppearanceDelegate> _dayViewAppearanceDelegate;
    NSLayoutConstraint *_detailsWidthConstraint;
    NSLayoutConstraint *_eventHeaderHeightConstraint;
    BOOL _showingDetails;
    BOOL _isNewEvent;
    NSArray *_realtimeEvents;
    id <SuggestedEventPopoverControllerDelegate> _delegate;
    NSStackView *_summaryStackView;
    NSView *_divider;
    NSView *_eventClipView;
    NSView *_summaryNavigationView;
    NSView *_detailNavigationView;
    NSView *_detailsContainer;
    NSView *_detailsDivider;
    NSLayoutConstraint *_stackWidthInitialConstraint;
    NSStackView *_detailsStackView;
    NSLayoutConstraint *_stackWidthFixedConstraint;
    unsigned long long _currentEventIndex;
}

+ (double)_detailsAnimationDuration;
+ (id)keyPathsForValuesAffectingHasMultipleEvents;
+ (id)keyPathsForValuesAffectingHasNextEvent;
+ (id)keyPathsForValuesAffectingHasPreviousEvent;
+ (id)keyPathsForValuesAffectingPagingTitle;
@property(nonatomic) unsigned long long currentEventIndex; // @synthesize currentEventIndex=_currentEventIndex;
@property(retain, nonatomic) NSLayoutConstraint *stackWidthFixedConstraint; // @synthesize stackWidthFixedConstraint=_stackWidthFixedConstraint;
@property(nonatomic) BOOL isNewEvent; // @synthesize isNewEvent=_isNewEvent;
@property(nonatomic) BOOL showingDetails; // @synthesize showingDetails=_showingDetails;
@property(nonatomic) __weak NSStackView *detailsStackView; // @synthesize detailsStackView=_detailsStackView;
@property(retain, nonatomic) NSLayoutConstraint *stackWidthInitialConstraint; // @synthesize stackWidthInitialConstraint=_stackWidthInitialConstraint;
@property(nonatomic) __weak NSView *detailsDivider; // @synthesize detailsDivider=_detailsDivider;
@property(retain, nonatomic) NSView *detailsContainer; // @synthesize detailsContainer=_detailsContainer;
@property(nonatomic) __weak NSView *detailNavigationView; // @synthesize detailNavigationView=_detailNavigationView;
@property(nonatomic) __weak NSView *summaryNavigationView; // @synthesize summaryNavigationView=_summaryNavigationView;
@property(nonatomic) __weak NSView *eventClipView; // @synthesize eventClipView=_eventClipView;
@property(nonatomic) __weak NSView *divider; // @synthesize divider=_divider;
@property(nonatomic) __weak NSStackView *summaryStackView; // @synthesize summaryStackView=_summaryStackView;
@property(nonatomic) __weak id <SuggestedEventPopoverControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *realtimeEvents; // @synthesize realtimeEvents=_realtimeEvents;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutConstraint *eventHeaderHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *detailsWidthConstraint;
- (void)didCommitItem;
- (void)didSaveItem;
- (void)_cleanupEventViewController;
- (void)viewDidDisappear;
- (void)_updateDayViewGadgetEvent;
- (void)viewWillAppear;
- (void)_collapseDetails;
- (void)_expandDetails;
- (void)toggleShowDetails:(id)arg1;
- (void)ignoreEvent:(id)arg1;
- (void)commitEvent:(id)arg1;
- (void)dismissController:(id)arg1;
- (void)selectNextEvent:(id)arg1;
- (void)selectPreviousEvent:(id)arg1;
@property(readonly, nonatomic) BOOL hasMultipleEvents;
@property(readonly, nonatomic) BOOL hasNextEvent;
@property(readonly, nonatomic) BOOL hasPreviousEvent;
@property(readonly, nonatomic) NSString *pagingTitle;
- (void)viewDidLoad;
- (void)_updateCurrentEventIndex;
@property(retain) SGRealtimeEvent *representedObject;
@property(readonly, nonatomic) SuggestedEventDayViewAppearanceDelegate *dayViewAppearanceDelegate;
@property(readonly, nonatomic) CalUIDayViewGadgetController *dayViewGadgetController;
- (id)_detailedViewControllerSettings;
@property(readonly, nonatomic) EKEventViewController *detailedViewController;
- (id)_eventViewControllerSettings;
@property(readonly, nonatomic) EKEventViewController *eventViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
