//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension
{
}

+ (id)alloc;
+ (id)sharedRunBlockExtension;
+ (void)initialize;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;
- (void)installOnQueue:(id)arg1;
- (id)init;
- (id)initInternal;

@end

