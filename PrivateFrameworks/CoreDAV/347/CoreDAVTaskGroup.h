//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDAV/CoreDAVSubmittable-Protocol.h>

@class NSError, NSMutableSet, NSString;
@protocol CoreDAVAccountInfoProvider, CoreDAVTaskGroupDelegate, CoreDAVTaskManager;

@interface CoreDAVTaskGroup : NSObject <CoreDAVSubmittable>
{
    id <CoreDAVTaskManager> _taskManager;
    id <CoreDAVAccountInfoProvider> _accountInfoProvider;
    double _timeoutInterval;
    NSMutableSet *_outstandingTasks;
    BOOL _isCancelling;
    BOOL _isTearingDown;
    BOOL _isFinished;
    id <CoreDAVTaskGroupDelegate> _delegate;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
    NSError *_error;
    id _context;
}

@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) __weak id <CoreDAVTaskManager> taskManager; // @synthesize taskManager=_taskManager;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSMutableSet *outstandingTasks; // @synthesize outstandingTasks=_outstandingTasks;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <CoreDAVTaskGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) __weak id <CoreDAVAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
- (void).cxx_destruct;
- (void)submitWithTaskManager:(id)arg1;
- (void)finishEarlyWithError:(id)arg1;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1;
- (void)finishCoreDAVTaskGroupWithError:(id)arg1 delegateCallbackBlock:(CDUnknownBlockType)arg2;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)arg1;
- (void)_tearDownAllTasks;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)syncAway;
- (void)startTaskGroup;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

