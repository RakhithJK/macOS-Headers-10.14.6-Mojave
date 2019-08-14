//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSTimer;

@interface TTBlinker : NSObject
{
    NSTimer *_timer;
    NSMutableSet *_targets;
    BOOL _flag;
    BOOL _isHidden;
    BOOL _isSessionActive;
}

+ (id)sharedBlinker;
- (void)updateTimer;
- (void)sessionDidResignActive:(id)arg1;
- (void)sessionDidBecomeActive:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (void)applicationDidUnhide:(id)arg1;
- (void)dispatchBlink:(id)arg1;
- (BOOL)containsTarget:(id)arg1;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)dealloc;
- (id)init;

@end

