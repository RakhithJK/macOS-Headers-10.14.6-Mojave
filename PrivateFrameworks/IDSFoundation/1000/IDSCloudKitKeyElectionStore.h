//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCKDatabase;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyElectionStore : NSObject
{
    IDSCKDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isItemNotFoundError:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSCKDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)_recordID;
- (id)_recordFromItem:(id)arg1;
- (id)_itemFromRecord:(id)arg1 error:(id *)arg2;
- (void)storeAccountIdentityItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;

@end

