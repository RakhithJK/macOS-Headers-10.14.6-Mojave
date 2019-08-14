//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FMQueueScheduler : NSObject <FMScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

