//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleScriptKit/NSCoding-Protocol.h>

@class ASKEventHandlerDescription, ASKEventHandlerImplementor;

@interface ASKEventHandler : NSObject <NSCoding>
{
    NSObject *_object;
    ASKEventHandlerDescription *_eventHandlerDescription;
    ASKEventHandlerImplementor *_eventHandlerImplementor;
    BOOL _enabled;
    BOOL _processed;
}

- (BOOL)isKindOfEventHandler:(id)arg1;
- (void)eventDoubleAction:(id)arg1;
- (void)eventAction:(id)arg1;
- (void)eventNotification:(id)arg1;
- (id)getAppleEventFromNotification:(id)arg1;
- (id)getAppleEventForObject:(id)arg1 withParameters:(id)arg2;
- (id)getAppleEventForObject:(id)arg1;
- (id)getAppleEvent;
- (id)processEventWithParameters:(id)arg1;
- (id)processEventForObject:(id)arg1 withParameters:(id)arg2;
- (id)processEventNotification:(id)arg1;
- (id)processEventWithEvent:(id)arg1;
- (id)processEvent;
- (id)processEventForObject:(id)arg1;
- (void)disable;
- (void)enable;
- (BOOL)processOnLoad;
- (id)notificationName;
- (Class)eventHandlerDataSourceClass;
- (Class)eventHandlerDelegateClass;
- (Class)eventHandlerImplementorClass;
- (unsigned int)eventID;
- (unsigned int)eventClass;
- (id)name;
- (void)setProcessed:(BOOL)arg1;
- (BOOL)processed;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setEventHandlerDescription:(id)arg1;
- (id)eventHandlerDescription;
- (void)setEventHandlerImplementor:(id)arg1;
- (id)eventHandlerImplementor;
- (void)setObject:(id)arg1;
- (id)object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithObject:(id)arg1 eventHandlerDescription:(id)arg2 enable:(BOOL)arg3;
- (id)init;

@end

