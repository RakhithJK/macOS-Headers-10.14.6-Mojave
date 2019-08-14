//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPQuerySourceObserver-Protocol.h>

@class MSPQuerySource, NSArray, NSString, _MSPQueryState;
@protocol OS_dispatch_queue;

@interface MSPQuery : NSObject <MSPQuerySourceObserver>
{
    _MSPQueryState *_lastState;
    MSPQuerySource *_source;
    CDUnknownBlockType _changeHandler;
    NSObject<OS_dispatch_queue> *_changeHandlerQueue;
    NSArray *_unmappedContents;
}

@property(readonly, nonatomic) NSArray *unmappedContents; // @synthesize unmappedContents=_unmappedContents;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *changeHandlerQueue; // @synthesize changeHandlerQueue=_changeHandlerQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void).cxx_destruct;
@property(readonly, getter=_visibleState) _MSPQueryState *visibleState;
- (void)setChangeHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)originalIdentifierForObjectAtIndex:(unsigned long long)arg1;
- (id)originalIdentifierForObject:(id)arg1;
@property(readonly) NSArray *contents;
@property(retain, getter=_lastState, setter=_setLastState:) _MSPQueryState *lastState;
- (void)_didChangeSourceWithNewState:(id)arg1 context:(id)arg2 inContainer:(id)arg3;
- (id)_initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

