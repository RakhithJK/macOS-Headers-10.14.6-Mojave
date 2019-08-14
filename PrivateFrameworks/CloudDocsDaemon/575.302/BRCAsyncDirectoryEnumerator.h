//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCRelativePath;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCAsyncDirectoryEnumerator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    long long _batchSize;
    BOOL _isRecursive;
    int _error;
    BRCRelativePath *_rootPath;
}

@property(readonly, nonatomic) BRCRelativePath *rootPath; // @synthesize rootPath=_rootPath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scheduleWithProcessBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(BOOL)arg2 batchSize:(long long)arg3 targetQueue:(id)arg4;

@end

