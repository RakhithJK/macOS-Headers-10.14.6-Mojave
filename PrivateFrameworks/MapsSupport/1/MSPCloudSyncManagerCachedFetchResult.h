//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MSPCloudRepeatableTask, NSArray, NSDictionary;
@protocol MSPCloudAccess, MSPCloudRecord;

__attribute__((visibility("hidden")))
@interface MSPCloudSyncManagerCachedFetchResult : NSObject
{
    MSPCloudRepeatableTask *_task;
    id <MSPCloudAccess> _access;
    NSDictionary *_cloudRecordsByIdentifier;
    NSDictionary *_replicaRecords;
    NSArray *_clientRegistrationRecords;
    id <MSPCloudRecord> _registrationRecordForCurrentClient;
    NSArray *_deletedRecordNames;
}

@property(copy) NSArray *deletedRecordNames; // @synthesize deletedRecordNames=_deletedRecordNames;
@property(retain) id <MSPCloudRecord> registrationRecordForCurrentClient; // @synthesize registrationRecordForCurrentClient=_registrationRecordForCurrentClient;
@property(copy) NSArray *clientRegistrationRecords; // @synthesize clientRegistrationRecords=_clientRegistrationRecords;
@property(copy) NSDictionary *replicaRecords; // @synthesize replicaRecords=_replicaRecords;
@property(copy) NSDictionary *cloudRecordsByIdentifier; // @synthesize cloudRecordsByIdentifier=_cloudRecordsByIdentifier;
@property(retain) id <MSPCloudAccess> access; // @synthesize access=_access;
@property(retain) MSPCloudRepeatableTask *task; // @synthesize task=_task;
- (void).cxx_destruct;

@end

