//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSCountedSet, _DKChangeSet, _DKSyncCoordinator;

@protocol _DKSyncCoordinatorEventNotificationDelegate

@optional
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didApplyRemoteDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didApplyRemoteAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didAddRemoteEventsWithStreamNameCounts:(NSCountedSet *)arg2 events:(NSArray *)arg3;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didCreateDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didCreateAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(NSCountedSet *)arg2;
@end

