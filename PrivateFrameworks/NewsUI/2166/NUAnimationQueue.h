//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NUAnimationQueue : NSObject
{
    BOOL _running;
    NSMutableArray *_queue;
}

@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(readonly, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)runUntilEmpty;
- (void)cancel;
- (void)addAnimation:(CDUnknownBlockType)arg1;
- (id)init;

@end
