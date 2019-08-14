//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKRecord, CKRecordZoneID, ICCloudContext;

@protocol ICCloudContextDelegate <NSObject>
- (void)didFailPushingExceededStorageQuotaForContext:(ICCloudContext *)arg1;
- (void)cloudContext:(ICCloudContext *)arg1 didFetchUserRecord:(CKRecord *)arg2;
- (void)cloudContext:(ICCloudContext *)arg1 sharedZoneWasDeleted:(CKRecordZoneID *)arg2;
- (void)cloudContext:(ICCloudContext *)arg1 receivedZoneNotFound:(CKRecordZoneID *)arg2;
- (void)cloudContext:(ICCloudContext *)arg1 userDidDeleteRecordZoneWithID:(CKRecordZoneID *)arg2;
@end
