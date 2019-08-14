//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPComponentWriteChannel-Protocol.h>

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)close;
- (void)setError:(id)arg1;
- (void)writeData:(id)arg1;
- (id)initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

