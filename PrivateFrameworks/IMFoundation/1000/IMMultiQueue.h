//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMMultiQueue : NSObject
{
    NSMutableDictionary *_queueMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_addBlock:(CDUnknownBlockType)arg1 withGUID:(id)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)addBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2 description:(id)arg3;
- (void)addBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 forKey:(id)arg3 description:(id)arg4;
- (void)_popEnqueuedBlockWithGUID:(id)arg1 key:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (id)init;

@end

