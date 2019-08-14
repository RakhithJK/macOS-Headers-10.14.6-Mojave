//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface TTIOManager : NSObject
{
    NSLock *_readLock;
    NSLock *_writeLock;
    NSLock *_deadLock;
    NSLock *_signalLock;
    int _signalPipe[2];
    NSMutableDictionary *_readQueue;
    NSMutableDictionary *_writeQueue;
    NSMutableDictionary *_shells;
    NSMutableDictionary *_deadShells;
    struct fd_set _readDescriptors;
    struct fd_set _writeDescriptors;
    struct fd_set _readSuspendDescriptors;
    BOOL _didRunMainThread;
}

+ (id)sharedIOManager;
- (void)mainThread;
- (void)IOThread;
- (void)signalIOThread;
- (void)writeData:(id)arg1 forShell:(id)arg2;
- (void)signalShell:(id)arg1;
- (void)removeShell:(id)arg1;
- (void)addShell:(id)arg1;
- (void)dealloc;
- (id)init;

@end

