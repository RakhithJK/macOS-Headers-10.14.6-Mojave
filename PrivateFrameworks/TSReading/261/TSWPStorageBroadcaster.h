//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSWPStorageBroadcaster : NSObject
{
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver>>, std::__1::allocator<id<TSWPStorageObserver>>> _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;

@end

