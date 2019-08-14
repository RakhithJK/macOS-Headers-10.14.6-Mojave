//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelManager : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;
    unsigned int _nextToken;
    CDUnknownBlockType _readHandler;
    NSMutableDictionary *_datagramChannels;
    NSMutableDictionary *_destinations;
}

+ (id)sharedInstance;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
- (void)removeDatagramChannel:(id)arg1;
- (void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(CDUnknownBlockType)arg2;
- (void)executeBlockForToken:(unsigned int)arg1 blockToExecute:(CDUnknownBlockType)arg2;
- (BOOL)setupDatagramChannel:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;

@end

