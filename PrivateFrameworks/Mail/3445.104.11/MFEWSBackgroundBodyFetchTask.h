//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSTask.h>

#import <Mail/MCBodyTracker-Protocol.h>
#import <Mail/MFEWSBodyFetchOperationDelegate-Protocol.h>
#import <Mail/MFEWSBodyPersistOperationDelegate-Protocol.h>
#import <Mail/MFEWSGetMessagesNeedingBodiesOperationDelegate-Protocol.h>

@class MFEWSBodyFetchOperation, MFEWSBodyPersistOperation, MFEWSGetMessagesNeedingBodiesOperation, NSMutableDictionary, NSMutableSet, NSString;

@interface MFEWSBackgroundBodyFetchTask : MFEWSTask <MFEWSBodyFetchOperationDelegate, MFEWSBodyPersistOperationDelegate, MFEWSGetMessagesNeedingBodiesOperationDelegate, MCBodyTracker>
{
    NSMutableSet *_mailboxesNeedingChecking;
    NSMutableSet *_mandatoryMessagesNeedingBodies;
    NSMutableSet *_discretionaryMessagesNeedingBodies;
    NSMutableDictionary *_fetchedBodiesByMessage;
    NSMutableDictionary *_fetchedCalendarEventsByMessage;
    MFEWSGetMessagesNeedingBodiesOperation *_getMessagesNeedingBodiesOperation;
    MFEWSBodyFetchOperation *_mandatoryBodyFetchOperation;
    MFEWSBodyFetchOperation *_discretionaryBodyFetchOperation;
    MFEWSBodyPersistOperation *_bodyPersistOperation;
}

- (void).cxx_destruct;
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;
- (void)bodyPersistOperation:(id)arg1 didPersistBodyForMessages:(id)arg2;
- (void)bodyFetchOperation:(id)arg1 didFetchBodiesByMessage:(id)arg2 calendarEventsByMessage:(id)arg3 missedMessages:(id)arg4;
- (void)getMessagesNeedingBodiesOperation:(id)arg1 didGetMessagesNeedingBodies:(id)arg2 forMailbox:(id)arg3;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)fetchBodiesForMailboxes:(id)arg1;
@property(retain, nonatomic) MFEWSBodyPersistOperation *bodyPersistOperation;
@property(retain, nonatomic) MFEWSBodyFetchOperation *discretionaryBodyFetchOperation;
@property(retain, nonatomic) MFEWSBodyFetchOperation *mandatoryBodyFetchOperation;
@property(retain, nonatomic) MFEWSGetMessagesNeedingBodiesOperation *getMessagesNeedingBodiesOperation;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithAccountName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

