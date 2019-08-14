//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseEncryptionDelegate-Protocol.h>

@class CKContainer, FCCKPrivateDatabaseSchema, NSString;

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate>
{
    FCCKPrivateDatabaseSchema *_schema;
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
}

+ (id)run;
@property(retain, nonatomic) CKContainer *secureContainer; // @synthesize secureContainer=_secureContainer;
@property(retain, nonatomic) CKContainer *containerWithZoneWidePCS; // @synthesize containerWithZoneWidePCS=_containerWithZoneWidePCS;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) FCCKPrivateDatabaseSchema *schema; // @synthesize schema=_schema;
- (void).cxx_destruct;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_prepareSentinelsAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareIssueHistoryAndReturnExpectations;
- (id)_prepareHistoryAndReturnExpectations;
- (void)_eraseAllPrivateData;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

