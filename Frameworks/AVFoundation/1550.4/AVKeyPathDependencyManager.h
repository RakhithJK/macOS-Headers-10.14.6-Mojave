//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVKeyPathDependencyRegistration-Protocol.h>

@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration>
{
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:(id)arg1;
- (void)valueForKey:(id)arg1 dependsOnValueAtKeyPath:(id)arg2;
- (void)dependencyHostIsFullyInitialized;
- (void)dealloc;
- (id)initWithDependencyHost:(id)arg1;

@end

