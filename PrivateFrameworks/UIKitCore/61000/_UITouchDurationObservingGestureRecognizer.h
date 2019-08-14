//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface _UITouchDurationObservingGestureRecognizer : UIGestureRecognizer
{
    double _allowableMovement;
    CADisplayLink *_displayLink;
    double _touchStartTimestamp;
    struct CGPoint _originalCentroid;
}

@property(nonatomic) struct CGPoint originalCentroid; // @synthesize originalCentroid=_originalCentroid;
@property(nonatomic) double touchStartTimestamp; // @synthesize touchStartTimestamp=_touchStartTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
- (void).cxx_destruct;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)_displayLinkDidFire:(id)arg1;
@property(readonly, nonatomic) double touchDuration;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

