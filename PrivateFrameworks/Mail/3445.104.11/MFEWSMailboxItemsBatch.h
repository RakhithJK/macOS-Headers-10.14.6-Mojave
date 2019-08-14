//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSString;

@interface MFEWSMailboxItemsBatch : NSObject
{
    BOOL _isFinalBatch;
    NSString *_initialSyncState;
    NSString *_finalSyncState;
    NSMapTable *_createdOrUpdatedItemIDsByType;
    NSArray *_deletedItemIDs;
    NSDictionary *_readFlagChangesByItemID;
    NSDictionary *_fetchedItemsByID;
    NSArray *_addedMessages;
}

@property(copy, nonatomic) NSArray *addedMessages; // @synthesize addedMessages=_addedMessages;
@property(copy, nonatomic) NSDictionary *fetchedItemsByID; // @synthesize fetchedItemsByID=_fetchedItemsByID;
@property(copy, nonatomic) NSDictionary *readFlagChangesByItemID; // @synthesize readFlagChangesByItemID=_readFlagChangesByItemID;
@property(copy, nonatomic) NSArray *deletedItemIDs; // @synthesize deletedItemIDs=_deletedItemIDs;
@property(copy, nonatomic) NSMapTable *createdOrUpdatedItemIDsByType; // @synthesize createdOrUpdatedItemIDsByType=_createdOrUpdatedItemIDsByType;
@property(nonatomic) BOOL isFinalBatch; // @synthesize isFinalBatch=_isFinalBatch;
@property(copy, nonatomic) NSString *finalSyncState; // @synthesize finalSyncState=_finalSyncState;
@property(copy, nonatomic) NSString *initialSyncState; // @synthesize initialSyncState=_initialSyncState;
- (void).cxx_destruct;
- (id)description;

@end

