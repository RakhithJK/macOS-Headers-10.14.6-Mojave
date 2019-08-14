//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, ECModalEventCapture, NSMapTable, NSMutableArray;
@protocol ECModalEventHandler;

@interface ECModalEventControllerHandler : NSObject
{
    id <ECModalEventHandler> _handler;
    ECModalEventCapture *_mouseDownCapture;
    ECModalEventCapture *_mouseMovedCapture;
    ECModalEventCapture *_dragMovedCapture;
    NSMutableArray *_mouseEnterCaptures;
    NSMutableArray *_mouseDragEnterCaptures;
    NSMutableArray *_dragEnterCaptures;
    CALayer *_mouseDownHitLayer;
    CALayer *_captureLayer;
    NSMutableArray *_mouseUpCompletionBlocks;
    NSMapTable *_preObservers;
    NSMapTable *_postObservers;
    unsigned int _mouseWasDragged:1;
    unsigned int _suppressDraggedEnterExits:1;
    unsigned int _usingMouseHysteresis:1;
    struct CGPoint _hysteresisMouseLocation;
    long long _lastStage;
}

@property(nonatomic) long long lastStage; // @synthesize lastStage=_lastStage;
@property(retain, nonatomic) CALayer *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(nonatomic) BOOL suppressDraggedEnterExits; // @synthesize suppressDraggedEnterExits=_suppressDraggedEnterExits;
@property(nonatomic) BOOL mouseWasDragged; // @synthesize mouseWasDragged=_mouseWasDragged;
@property(retain, nonatomic) CALayer *mouseDownHitLayer; // @synthesize mouseDownHitLayer=_mouseDownHitLayer;
@property(retain, nonatomic) ECModalEventCapture *dragMovedCapture; // @synthesize dragMovedCapture=_dragMovedCapture;
@property(retain, nonatomic) ECModalEventCapture *mouseMovedCapture; // @synthesize mouseMovedCapture=_mouseMovedCapture;
@property(retain, nonatomic) ECModalEventCapture *mouseDownCapture; // @synthesize mouseDownCapture=_mouseDownCapture;
@property(readonly, nonatomic) id <ECModalEventHandler> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)handlePostEventObservers:(id)arg1;
- (void)handlePreEventObservers:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)observeEvent:(long long)arg1 atStage:(unsigned long long)arg2 usingSession:(id)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)dragMovedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2 inLayer:(id)arg3 topLayer:(id)arg4 handler:(id)arg5 window:(id)arg6;
- (void)mouseDraggedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2 inLayer:(id)arg3 topLayer:(id)arg4 handler:(id)arg5 window:(id)arg6;
- (void)mouseMovedAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2 inLayer:(id)arg3 topLayer:(id)arg4 handler:(id)arg5 window:(id)arg6;
- (void)addCompletionBlockOnMouseUp:(CDUnknownBlockType)arg1;
- (void)exitDragEnterCaptures;
- (void)exitEnterCaptures;
- (void)performMouseUpBlocksWithEvent:(id)arg1;
- (id)initWithHandler:(id)arg1 usingMouseHysteresis:(BOOL)arg2;

@end

