//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSProgress.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _FPProgressProxy : NSProgress
{
    id _subscriber;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
}

- (void).cxx_destruct;
- (void)stopTrackingIfStarted;
- (void)startTrackingFileURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithParent:(id)arg1 userInfo:(id)arg2;

@end

