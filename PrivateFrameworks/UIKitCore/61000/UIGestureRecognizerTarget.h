//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIGestureRecognizerTarget : NSObject
{
    id _target;
    SEL _action;
}

+ (id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)description;
- (void)_sendActionWithGestureRecognizer:(id)arg1;
- (BOOL)isEqualToTarget:(id)arg1 action:(SEL)arg2;

@end
