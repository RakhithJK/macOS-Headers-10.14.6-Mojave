//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PLKQueue : NSObject
{
    BOOL _enabled;
    int _kQueue;
    int _fileDescriptor;
    struct __CFRunLoopSource *_kqueueDescriptorSource;
    struct __CFFileDescriptor *_kqueueDescriptorRef;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _kQueueBlock;
}

@property(copy, nonatomic) CDUnknownBlockType kQueueBlock; // @synthesize kQueueBlock=_kQueueBlock;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy) NSString *path; // @synthesize path=_path;
@property struct __CFFileDescriptor *kqueueDescriptorRef; // @synthesize kqueueDescriptorRef=_kqueueDescriptorRef;
@property struct __CFRunLoopSource *kqueueDescriptorSource; // @synthesize kqueueDescriptorSource=_kqueueDescriptorSource;
@property int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
@property int kQueue; // @synthesize kQueue=_kQueue;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 withDispatchQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;

@end

