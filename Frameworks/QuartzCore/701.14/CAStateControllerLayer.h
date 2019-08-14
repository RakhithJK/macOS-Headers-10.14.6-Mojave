//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface CAStateControllerLayer : NSObject
{
    CALayer *_layer;
    CAState *_currentState;
    CAStateControllerUndo *_undoStack;
    NSMutableArray *_transitions;
    NSTimer *_nextTimer;
    CAState *_nextState;
    float _nextSpeed;
}

@property(readonly) CAStateControllerUndo *undoStack; // @synthesize undoStack=_undoStack;
@property(retain, nonatomic) CAState *currentState; // @synthesize currentState=_currentState;
@property(readonly) CALayer *layer; // @synthesize layer=_layer;
- (void)dealloc;
- (void)invalidate;
- (void)removeTransition:(id)arg1;
- (void)addTransition:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end

