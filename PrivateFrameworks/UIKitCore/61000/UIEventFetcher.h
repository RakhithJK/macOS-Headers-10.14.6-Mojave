//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, _UIDisplayLink;
@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject
{
    NSMutableArray *_incomingHIDEvents;
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop *_cfRunLoop;
    struct __CFRunLoopSource *_triggerHandOffEventsRunLoopSource;
    CDUnknownBlockType _receiveBlock;
    CDUnknownBlockType _addToFilteredEventsBlock;
    CDUnknownBlockType _gameControllerEventFilterGenerator;
    CDUnknownBlockType _watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    _UIDisplayLink *_displayLink;
    long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    long long _countOfDigitizerEventsReceivedInPreviousFrame;
    BOOL _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    double _lastImportantEventTimestamp;
    double _lastSignalTimestamp;
    double _estimatedDisplayLinkDrift;
    long long _lastSignalType;
    BOOL _needsSignalOnDisplayLink;
    id <UIEventFetcherSink> _eventFetcherSink;
    double _commitTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    double _latestMoveDragEventTimestamp;
    double _latestMoveDragEventResendTimestamp;
}

@property(nonatomic) double latestMoveDragEventResendTimestamp; // @synthesize latestMoveDragEventResendTimestamp=_latestMoveDragEventResendTimestamp;
@property(nonatomic) double latestMoveDragEventTimestamp; // @synthesize latestMoveDragEventTimestamp=_latestMoveDragEventTimestamp;
@property(retain, nonatomic) NSMutableDictionary *latestMoveDragEventsBySessionID; // @synthesize latestMoveDragEventsBySessionID=_latestMoveDragEventsBySessionID;
@property(nonatomic) double commitTimeForTouchEvents; // @synthesize commitTimeForTouchEvents=_commitTimeForTouchEvents;
@property(nonatomic) BOOL needsSignalOnDisplayLink; // @synthesize needsSignalOnDisplayLink=_needsSignalOnDisplayLink;
@property(retain, nonatomic) id <UIEventFetcherSink> eventFetcherSink; // @synthesize eventFetcherSink=_eventFetcherSink;
- (void).cxx_destruct;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDGameControllerEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2;
- (void)filterEvents;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent *)arg1;
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_pullHIDEvents;
- (void)setupThreadAndRun;
- (void)threadMain;
- (void)displayLinkDidFire:(id)arg1;
- (void)setupForRunLoop:(id)arg1;
- (void)_setupFilterChain;
- (void)_removeHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_addHIDEventFilter:(CDUnknownBlockType)arg1;
- (id)init;

@end

