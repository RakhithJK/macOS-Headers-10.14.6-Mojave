//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIFocusEnginePanGestureRecognizer;

@protocol _UIFocusEnginePanGestureTouchObserver <NSObject>
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchEndedAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchMovedToDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(_UIFocusEnginePanGestureRecognizer *)arg1 touchBeganAtDigitizerLocation:(struct CGPoint)arg2;
@end

