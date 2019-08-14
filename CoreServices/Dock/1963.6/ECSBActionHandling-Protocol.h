//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ECEvent;

@protocol ECSBActionHandling <NSObject>
- (void)performRemoveActionForItem:(id)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;
- (void)performActionForItem:(id)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;

@optional
- (BOOL)performDropForItem:(id)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;
- (BOOL)canAcceptDropForItem:(id)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3;
- (void)cancelActionWithEvent:(ECEvent *)arg1 sender:(id)arg2;
@end

