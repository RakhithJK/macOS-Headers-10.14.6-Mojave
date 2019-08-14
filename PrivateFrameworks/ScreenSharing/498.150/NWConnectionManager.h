//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, NWConnection;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NWConnectionManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *networkConnectionReadySemaphore;
    NSObject<OS_dispatch_semaphore> *sendSemaphore;
    NSObject<OS_dispatch_queue> *readDispatchQueue;
    BOOL _stopConnection;
    NWConnection *connection;
    NSRecursiveLock *writeLock;
}

@property BOOL stopConnection; // @synthesize stopConnection=_stopConnection;
@property(retain) NSRecursiveLock *writeLock; // @synthesize writeLock;
@property(retain) NWConnection *connection; // @synthesize connection;
- (void)writeData:(const void *)arg1 size:(unsigned int)arg2;
- (void)startRead:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) NSString *stateString;
- (void)dealloc;
- (void)waitForConnection:(unsigned int)arg1;
- (id)initWithNWConnection:(id)arg1;
- (id)init;

@end

