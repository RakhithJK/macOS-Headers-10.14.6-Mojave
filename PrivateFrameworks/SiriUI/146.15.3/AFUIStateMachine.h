//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AFUIStateMachineDelegate;

__attribute__((visibility("hidden")))
@interface AFUIStateMachine : NSObject
{
    id <AFUIStateMachineDelegate> _delegate;
    long long _state;
    NSMutableDictionary *_endStatesByEventByStartState;
}

@property(retain, nonatomic, getter=_endStatesByEventByStartState) NSMutableDictionary *endStatesByEventByStartState; // @synthesize endStatesByEventByStartState=_endStatesByEventByStartState;
@property(nonatomic, setter=_setState:) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <AFUIStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performTransitionForEvent:(long long)arg1;
- (id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2;
- (void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3;
- (id)_descriptionForEvent:(long long)arg1;
- (void)_setState:(long long)arg1 forEvent:(long long)arg2;
- (id)initWithInitialState:(long long)arg1;

@end

