//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class NSArray, NSIndexSet, NSManagedObject, NSNumber, NSSet, NSString, NSUUID;
@protocol ICNFIMAPPersistedAccount, ICNFIMAPPersistedMailbox, ICNFIMAPPersistedMessage__CD;

@protocol ICNFIMAPPersistedMailbox <NSObject>
@property(readonly, nonatomic) BOOL isRootMailbox;
@property(copy, nonatomic) NSString *imapServerName;
@property(retain, nonatomic) NSNumber *imapUIDValidity;
@property(retain, nonatomic) NSNumber *imapUIDNext;
@property(retain, nonatomic) NSNumber *imapComputedHighestModificationSequence;
@property(retain, nonatomic) NSNumber *imapAllegedHighestModificationSequence;
@property(copy, nonatomic) NSSet *persistedMessages;
@property(retain, nonatomic) NSManagedObject<ICNFIMAPPersistedMailbox> *parent;
@property(copy, nonatomic) NSString *name;
@property(retain, nonatomic) NSManagedObject<ICNFIMAPPersistedAccount> *account;
- (NSManagedObject<ICNFIMAPPersistedMessage__CD> *)messageWithUniqueID:(NSUUID *)arg1;
- (NSSet *)cacheDirectoryContentsExcludingObjectIDs:(NSArray *)arg1;
- (NSArray *)getDetailsForMessagesWithIMAPUIDs:(NSIndexSet *)arg1;
- (unsigned int)maximumIMAPUID;
- (NSArray *)copyIncompleteMessagesIncludingObjectIDs:(NSArray *)arg1;
- (NSArray *)messagesWithObjectIDs:(NSArray *)arg1;
- (unsigned long long)totalCountOfMessages;
- (NSManagedObject<ICNFIMAPPersistedMessage__CD> *)newMessage;
- (NSString *)compactDescription;
- (void)removePersistedMessages:(NSSet *)arg1;
- (void)addPersistedMessages:(NSSet *)arg1;
- (void)removePersistedMessagesObject:(NSManagedObject<ICNFIMAPPersistedMessage__CD> *)arg1;
- (void)addPersistedMessagesObject:(NSManagedObject<ICNFIMAPPersistedMessage__CD> *)arg1;
- (void)removeChildMailboxes:(NSSet *)arg1;
- (void)addChildMailboxes:(NSSet *)arg1;
- (void)removeChildMailboxesObject:(NSManagedObject<ICNFIMAPPersistedMailbox> *)arg1;
- (void)addChildMailboxesObject:(NSManagedObject<ICNFIMAPPersistedMailbox> *)arg1;
@end

