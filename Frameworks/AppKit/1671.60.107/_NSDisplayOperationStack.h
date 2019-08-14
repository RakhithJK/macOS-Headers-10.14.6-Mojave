//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _NSDisplayOperationStack : NSObject
{
    NSMutableArray *_stack;
    BOOL _threadIsViewDrawOperationThread;
}

+ (id)description;
+ (BOOL)anyThreadHasActiveDisplayOperationForWindow:(id)arg1;
+ (id)currentThreadDisplayOperationStack;
+ (void)initialize;
- (void)setThreadIsViewDrawOperationThread:(BOOL)arg1;
- (BOOL)threadIsViewDrawOperationThread;
- (void)blockOnDrawOperationsForAncestorsOfView:(id)arg1;
- (void)blockOnAllRemainingDrawOperations;
- (void)queueDrawOperationForView:(id)arg1 rect:(struct CGRect)arg2 rectSet:(id)arg3 windowRegion:(id)arg4 options:(unsigned long long)arg5;
- (void)setAttemptingConcurrentViewDrawing:(BOOL)arg1;
- (BOOL)attemptingConcurrentViewDrawing;
- (id)description;
- (id)totalWindowRegionBeingDrawnByEnclosingDisplayOperations;
- (unsigned long long)count;
- (id)rectSetBeingDrawnForView:(id)arg1;
- (void)setRectSetBeingDrawn:(id)arg1 forView:(id)arg2;
- (id)windowRegionBeingDrawn;
- (id)windowBeingDrawn;
- (id)clipRootView;
- (BOOL)viewWillDrawOperationIsActive;
- (void)exitViewWillDrawOperationForWindow:(id)arg1;
- (void)enterViewWillDrawOperationForWindow:(id)arg1 windowRegion:(id)arg2 clipRootView:(id)arg3;
- (void)exitDisplayOperationForWindow:(id)arg1;
- (void)enterDisplayOperationForWindow:(id)arg1 windowRegion:(id)arg2;
- (void)dealloc;
- (id)init;

@end

