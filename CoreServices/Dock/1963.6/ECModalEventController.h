//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol ECModalEventHandler;

@interface ECModalEventController : NSObject
{
    unsigned int _cid;
    struct __CFRunLoopSource *_source;
    NSMutableArray *_eventHandlers;
    BOOL _dragging;
}

+ (unsigned long long)modifierKeyState;
+ (BOOL)optionKeyDown;
+ (BOOL)shiftKeyDown;
+ (id)sharedController;
@property(nonatomic) BOOL dragging; // @synthesize dragging=_dragging;
- (void).cxx_destruct;
- (id)_dispatchAction:(SEL)arg1 delegateAction:(SEL)arg2 forEvent:(id)arg3 withEventCapture:(id)arg4 topLayer:(id)arg5 hitTestLayer:(id)arg6 handler:(id)arg7;
- (void)_handleEvents:(void *)arg1;
- (int)handleDrag:(struct OpaqueCoreDrag *)arg1 type:(long long)arg2 windows:(const id *)arg3 topLayers:(const id *)arg4 windowCount:(unsigned int)arg5;
- (void)handleEvent:(id)arg1 windows:(const id *)arg2 topLayers:(const id *)arg3 windowCount:(unsigned long long)arg4;
- (void)test:(id *)arg1 count:(unsigned int)arg2;
- (void)removeObserver:(id)arg1 forSession:(id)arg2;
- (id)observeEvent:(long long)arg1 atStage:(unsigned long long)arg2 usingSession:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)addCompletionBlockOnMouseUp:(CDUnknownBlockType)arg1;
- (void)setLayerForCapture:(id)arg1;
- (void)removeHandler:(id)arg1;
- (void)addHandler:(id)arg1 externalEventSource:(BOOL)arg2 usingMouseHysteresis:(BOOL)arg3;
@property(readonly, nonatomic) BOOL coreDragging; // @dynamic coreDragging;
@property(readonly, nonatomic) id <ECModalEventHandler> currentHandler; // @dynamic currentHandler;
@property(nonatomic) BOOL suppressDraggedEnterExits; // @dynamic suppressDraggedEnterExits;
- (id)init;

@end

