//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;

@interface GKTurnBasedEventHandler : NSObject
{
    BOOL _didBecomeActive;
    NSObject<GKTurnBasedEventHandlerDelegate> *_delegateWeak;
    NSObject<OS_dispatch_queue> *_lookForEventQueue;
}

+ (id)sharedTurnBasedEventHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue; // @synthesize lookForEventQueue=_lookForEventQueue;
@property(nonatomic) BOOL didBecomeActive; // @synthesize didBecomeActive=_didBecomeActive;
- (void)lookForEvent;
- (void)callTurnEventForMatch:(id)arg1 userTapped:(BOOL)arg2;
@property NSObject<GKTurnBasedEventHandlerDelegate> *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)init;

@end

