//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CSKDirectoryObserver : NSObject
{
    BOOL _recursive;
    BOOL _ignoreFiles;
    BOOL _isEventStreamStarted;
    NSURL *_URL;
    NSObject<OS_dispatch_queue> *_eventQueue;
    id _representedObject;
    double _eventInterval;
    CDUnknownBlockType _eventHandler;
    struct __FSEventStream *_eventStream;
}

@property(nonatomic) BOOL isEventStreamStarted; // @synthesize isEventStreamStarted=_isEventStreamStarted;
@property(nonatomic) struct __FSEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
@property(nonatomic) double eventInterval; // @synthesize eventInterval=_eventInterval;
@property(nonatomic) BOOL ignoreFiles; // @synthesize ignoreFiles=_ignoreFiles;
@property(nonatomic) BOOL recursive; // @synthesize recursive=_recursive;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithURL:(id)arg1 eventHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

