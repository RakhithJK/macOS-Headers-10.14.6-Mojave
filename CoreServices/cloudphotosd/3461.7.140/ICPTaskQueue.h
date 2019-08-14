//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICPTask, NSMutableArray, NSString, PFDispatchQueue;

@interface ICPTaskQueue : NSObject
{
    NSString *_label;
    PFDispatchQueue *_isolationQueue;
    PFDispatchQueue *_taskExecutionQueue;
    NSMutableArray *_tasks;
    ICPTask *_currentTask;
}

+ (id)taskQueueWithLabel:(id)arg1 taskExecutionTargetQueue:(id)arg2;
@property(retain) ICPTask *currentTask; // @synthesize currentTask=_currentTask;
@property(retain) NSMutableArray *tasks; // @synthesize tasks=_tasks;
@property(retain) PFDispatchQueue *taskExecutionQueue; // @synthesize taskExecutionQueue=_taskExecutionQueue;
@property(retain) PFDispatchQueue *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(retain) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)taskDidFinish:(id)arg1;
- (void)processTasks;
- (void)addTask:(id)arg1;
- (id)initWithLabel:(id)arg1 taskExecutionTargetQueue:(id)arg2;

@end

