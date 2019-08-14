//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDragEvent, _UIDropSessionImpl, _UIInternalDraggingSessionDestination;
@protocol UIDragGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIDragGestureRecognizer : UIGestureRecognizer
{
    UIDragEvent *_dragEvent;
}

@property(readonly, nonatomic, getter=_dragEvent) __weak UIDragEvent *dragEvent; // @synthesize dragEvent=_dragEvent;
- (void).cxx_destruct;
- (struct CGPoint)locationInView:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)_shouldReceivePress:(id)arg1;
- (BOOL)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3;
- (BOOL)_shouldReceiveDragEvent:(id)arg1;
@property(readonly, nonatomic) _UIDropSessionImpl *dropSession;
@property(readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(nonatomic) __weak id <UIDragGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

