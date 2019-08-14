//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFSizeEngine.h>

@class MFRemoteStoreAccount, NSArray, NSMutableDictionary, NSMutableSet;

@interface MFRemoteStoreSizeEngine : MFSizeEngine
{
    NSMutableDictionary *_usageByMailbox;
    NSMutableSet *_mailboxesToSize;
}

- (void).cxx_destruct;
@property(readonly, copy) NSArray *allUsageByMailboxKeys;
- (void)addMailboxesToSizeFromArray:(id)arg1;
- (id)popMailboxToSize;
@property(readonly) unsigned long long countOfMailboxesToSize;
- (void)_mailboxBecameInvalid:(id)arg1;
- (void)_mailboxSizeChanged:(id)arg1;
- (void)_sizeChangedForMailbox:(id)arg1;
- (BOOL)_changeUsageInfo:(CDStruct_1dee9796 *)arg1 forMailbox:(id)arg2 refetchQuotas:(BOOL)arg3;
- (void)_handleMailboxSizeChanged:(id)arg1;
- (void)_refetchListing:(id)arg1;
- (BOOL)shouldStartWorkerThread;
- (BOOL)_prepareToRefresh;
- (id)usageForMailbox:(id)arg1;
- (void)dealloc;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MFRemoteStoreAccount *account; // @dynamic account;

@end

