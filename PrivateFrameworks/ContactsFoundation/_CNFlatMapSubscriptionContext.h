//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNQueue, NSMutableArray;
@protocol CNScheduler;

@interface _CNFlatMapSubscriptionContext : NSObject
{
    CNQueue *_decorators;
    NSMutableArray *_tokens;
    id <CNScheduler> _downstream;
    id <CNScheduler> _resourceLock;
    BOOL _operatorReceiving;
    BOOL _observerReceiving;
}

@property(readonly) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly) id <CNScheduler> downstream; // @synthesize downstream=_downstream;
@property(readonly) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(readonly) CNQueue *decorators; // @synthesize decorators=_decorators;
@property(getter=isObserverReceiving) BOOL observerReceiving; // @synthesize observerReceiving=_observerReceiving;
@property(getter=isOperatorReceiving) BOOL operatorReceiving; // @synthesize operatorReceiving=_operatorReceiving;
- (void).cxx_destruct;
- (id)initWithSchedulerProvider:(id)arg1;

@end

