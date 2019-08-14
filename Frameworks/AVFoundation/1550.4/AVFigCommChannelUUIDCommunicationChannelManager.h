//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVFigRoutingContextCommunicationChannelManager-Protocol.h>

@class AVFigRoutingContextOutputContextImpl, AVOutputContextCommunicationChannel, AVWeakReference, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigCommChannelUUIDCommunicationChannelManager : NSObject <AVFigRoutingContextCommunicationChannelManager>
{
    AVFigRoutingContextOutputContextImpl *_parentOutputContextImpl;
    struct OpaqueFigRoutingContext *_routingContext;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    struct __CFString *_outgoingCommChannelUUID;
    struct __CFDictionary *_communicationChannelsForUUIDs;
    AVWeakReference *_weakObserver;
}

@property __weak AVFigRoutingContextOutputContextImpl *parentOutputContextImpl; // @synthesize parentOutputContextImpl=_parentOutputContextImpl;
- (void).cxx_destruct;
- (void)didCloseCommChannelUUID:(struct __CFString *)arg1;
- (void)_didReceiveData:(struct __CFData *)arg1 fromCommChannelUUID:(struct __CFString *)arg2;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
- (void)dealloc;
- (id)initWithRoutingContext:(struct OpaqueFigRoutingContext *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
