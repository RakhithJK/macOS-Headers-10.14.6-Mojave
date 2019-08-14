//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <CalendarUI/CalUIDayViewGadgetDataSource-Protocol.h>

@class CalUIDayViewGadget, EKEventStore, NSArray, NSDate, NSObject, NSSet, NSString;
@protocol CalUIDayViewGadgetAppearanceDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CalUIDayViewGadgetController : NSViewController <CalUIDayViewGadgetDataSource>
{
    CalUIDayViewGadget *_view;
    EKEventStore *_eventStore;
    NSArray *_internalPreviewEvents;
    NSArray *_timedEvents;
    NSArray *_allDayEvents;
    NSObject<OS_dispatch_queue> *_loadEventsSerialQueue;
    NSDate *_dayOfInterest;
    NSDate *_lastRefresh;
    CDUnknownBlockType _mouseDownBlock;
    NSSet *_disabledCalendars;
    NSDate *_startOfDay;
    NSDate *_endOfDay;
    CalUIDayViewGadget *_dayViewGadget;
    NSArray *_dedupedPreviewEvents;
    id <CalUIDayViewGadgetAppearanceDelegate> _appearanceDelegate;
}

+ (id)controllerWithAppearanceDelegate:(id)arg1 mouseDownBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) __weak id <CalUIDayViewGadgetAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(retain) NSArray *dedupedPreviewEvents; // @synthesize dedupedPreviewEvents=_dedupedPreviewEvents;
@property(retain) CalUIDayViewGadget *dayViewGadget; // @synthesize dayViewGadget=_dayViewGadget;
@property(retain) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(readonly, nonatomic) NSDate *endOfDay; // @synthesize endOfDay=_endOfDay;
@property(readonly, nonatomic) NSDate *startOfDay; // @synthesize startOfDay=_startOfDay;
@property(retain) NSSet *disabledCalendars; // @synthesize disabledCalendars=_disabledCalendars;
@property(nonatomic) __weak CDUnknownBlockType mouseDownBlock; // @synthesize mouseDownBlock=_mouseDownBlock;
@property(retain) NSDate *lastRefresh; // @synthesize lastRefresh=_lastRefresh;
@property(retain, nonatomic) NSDate *dayOfInterest; // @synthesize dayOfInterest=_dayOfInterest;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *timedEvents;
- (void)setTimedEvents:(id)arg1;
@property(readonly, nonatomic) NSArray *allDayEvents;
- (void)setAllDayEvents:(id)arg1;
@property(retain) NSArray *internalPreviewEvents;
- (id)previewEvents;
- (BOOL)isPreviewEvent:(id)arg1;
- (void)setPreviewEvents:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (void)sizeChanged;
- (void)setupWithAppearanceDelegate:(id)arg1 mouseDownBlock:(CDUnknownBlockType)arg2;
- (void)setupWithAppearanceDelegate:(id)arg1;
- (void)loadEventsWithPreviewEvents:(id)arg1;
- (void)localeChanged:(id)arg1;
- (void)calendarsChangedNotification;
- (void)disabledCalendarsChanged:(id)arg1;
- (void)calendarChanged:(id)arg1;
- (void)refreshAsync;
- (void)refreshShouldForceDisplay:(BOOL)arg1;
- (void)prepareForLoadingEvents;
@property(readonly) BOOL eventStoreAccessGranted;
@property(readonly) NSObject<OS_dispatch_group> *eventStoreReadyGroup;
- (id)initWithEventStore:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

