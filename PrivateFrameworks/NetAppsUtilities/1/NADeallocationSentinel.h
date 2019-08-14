//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NADeallocationTracerDelegate-Protocol.h>

@class NADeallocationTracer, NSString;

@interface NADeallocationSentinel : NSObject <NADeallocationTracerDelegate>
{
    id _targetObject;
    CDUnknownBlockType _finalizer;
    NADeallocationTracer *_tracer;
}

@property(readonly, nonatomic) __weak NADeallocationTracer *tracer; // @synthesize tracer=_tracer;
@property(readonly, copy, nonatomic) CDUnknownBlockType finalizer; // @synthesize finalizer=_finalizer;
@property(readonly, nonatomic) id targetObject; // @synthesize targetObject=_targetObject;
- (void).cxx_destruct;
- (void)tracerIsDeallocating;
- (void)dealloc;
- (id)initWithTargetObject:(id)arg1 finalizer:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

