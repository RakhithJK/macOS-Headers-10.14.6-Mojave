//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CalUIOccurrenceContainerController.h"

@class CalUIDayCanvasController, CalUIDayLayerView, CalUIViewController;

@interface CalUIDayLayerController : CalUIOccurrenceContainerController
{
    BOOL _drawsBackground;
    CalUIViewController *_viewController;
    CalUIDayCanvasController *_canvasController;
}

+ (void)initialize;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property(nonatomic) __weak CalUIDayCanvasController *canvasController; // @synthesize canvasController=_canvasController;
@property(nonatomic) __weak CalUIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)uiOccurrences;
- (void)invalidateAccessibilityRepresentations;
- (void)hideTravelTimeValueChanged;
- (void)setTimeIndicatorPosition:(double)arg1;
- (void)setTimeIndicatorHidden:(BOOL)arg1;
- (long long)minutesForYValue:(double)arg1;
- (long long)minutesForOffset:(double)arg1;
- (void)clearEphemeralOccurrences;
- (void)updateOffscreenOccurrences;
- (void)colorDidChangeForCalendar:(id)arg1;
- (void)setWorkdayEndMinute:(long long)arg1;
- (void)setWorkDayStartMinute:(long long)arg1;
- (id)anyOccurrenceForEventOccID:(id)arg1;
- (id)proposedOccurrenceForEventOccID:(id)arg1;
- (id)ephemeralOccurrenceForEventOccID:(id)arg1;
- (id)uiOccForEventOccurrenceID:(id)arg1;
- (void)selectionStateChangedForEventOccurrenceIDs:(id)arg1;
- (void)searchUpdated;
- (void)rebuildStrings;
- (void)layoutOccurrences;
- (void)removeOccurrence:(id)arg1;
- (id)addEphemeralOccurrenceWithEvent:(id)arg1;
- (void)promoteEphemeralOccurrence:(id)arg1;
- (id)addBoxOccurrenceWithEvent:(id)arg1;
- (void)updateAppearance;
- (long long)allDaynessOfDisplayedEvents;
- (void)setRepresentedObject:(id)arg1;
@property(readonly) __weak CalUIDayLayerView *dayView;
- (id)dayLayerView;
- (void)loadView;
- (void)dealloc;

@end

