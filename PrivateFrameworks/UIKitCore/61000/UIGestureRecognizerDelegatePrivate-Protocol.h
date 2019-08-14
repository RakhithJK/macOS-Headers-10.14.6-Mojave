//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class UIGestureRecognizer, UIPress, UITouch;

@protocol UIGestureRecognizerDelegatePrivate <UIGestureRecognizerDelegate>

@optional
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 canBePreventedByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 canPreventGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceivePress:(UIPress *)arg2;
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)_gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)_gestureRecognizer:(UIGestureRecognizer *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

