//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface FCTimer : NSObject
{
    NSTimer *_timer;
    double _interval;
    id _userInfo;
    int _kind;
}

+ (id)fcTimer;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (int)kind;
- (void)setKind:(int)arg1;
- (double)interval;
- (void)setInterval:(double)arg1;
- (BOOL)isWarning;
- (void)invalidate;
- (void)fireWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;

@end

