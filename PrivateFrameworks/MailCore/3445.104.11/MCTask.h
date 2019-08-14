//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MailCore/MCActivity.h>

@class MCDiscretionaryWorkScheduler, MCProgressGroup, NSCondition, NSMutableSet, NSString;

@interface MCTask : MCActivity
{
    NSMutableSet *_currentOperations;
    MCDiscretionaryWorkScheduler *_workScheduler;
    BOOL _isCancelled;
    long long _networkPriority;
    long long _persistencePriority;
    MCProgressGroup *_progressGroup;
    NSString *_logPrefix;
    NSCondition *_finishedCondition;
}

@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain) NSCondition *finishedCondition; // @synthesize finishedCondition=_finishedCondition;
@property(copy) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
@property(readonly, nonatomic) MCProgressGroup *progressGroup; // @synthesize progressGroup=_progressGroup;
@property(nonatomic) long long persistencePriority; // @synthesize persistencePriority=_persistencePriority;
@property(nonatomic) long long networkPriority; // @synthesize networkPriority=_networkPriority;
- (void).cxx_destruct;
- (void)cancel;
- (void)waitUntilFinished;
- (void)end;
@property(readonly, nonatomic) unsigned long long numberOfOperationsInProgress;
- (void)cancelAllOperations;
- (void)operationFinished:(id)arg1;
- (void)trackOperation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler;
- (void)dealloc;
- (id)init;

@end

