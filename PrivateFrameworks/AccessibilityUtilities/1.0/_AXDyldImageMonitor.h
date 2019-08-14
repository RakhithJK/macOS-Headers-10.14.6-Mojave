//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXImageMonitor-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface _AXDyldImageMonitor : NSObject <AXImageMonitor>
{
    NSHashTable *_imageMonitorObservers;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)removeImageMonitorObserver:(id)arg1;
- (void)addImageMonitorObserver:(id)arg1;
- (id)loadedImagePaths;
- (void)enumerateLoadedImagePaths:(CDUnknownBlockType)arg1;
- (void)_dyldDidAddImage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

