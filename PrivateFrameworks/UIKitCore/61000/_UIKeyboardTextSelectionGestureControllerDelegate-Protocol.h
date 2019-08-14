//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;

@optional
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (void)didEndGesture;
- (void)willBeginGesture;
- (BOOL)hasMarkedText;
- (BOOL)transitionInProgress;
@end

