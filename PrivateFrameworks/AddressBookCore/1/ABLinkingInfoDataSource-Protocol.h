//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBookCore/NSObject-Protocol.h>

@class ABMultiDictionary, NSArray, NSDictionary, NSString;
@protocol NSCopying;

@protocol ABLinkingInfoDataSource <NSObject>
- (NSString *)nameForRecord:(id)arg1;
- (BOOL)personIsMe:(id)arg1;
- (NSArray *)recordsForIdentifiers:(NSArray *)arg1;
- (ABMultiDictionary *)nameCollisionMapForRecords:(NSArray *)arg1;
- (ABMultiDictionary *)nameCollisionMapForExistingRecords;
- (BOOL)property:(NSString *)arg1 hasChangedOnRecord:(id)arg2;
- (void)setRecordPreferredForPhoto:(id)arg1 linkedRecords:(NSArray *)arg2;
- (void)setRecordPreferredForPhoto:(id)arg1;
- (void)setRecordPreferredForName:(id)arg1 linkedRecords:(NSArray *)arg2;
- (void)setRecordPreferredForName:(id)arg1;
- (void)unlinkRecord:(id)arg1;
- (BOOL)recordIsOnlyRecordInLink:(id)arg1;
- (BOOL)recordSupportsLinking:(id)arg1;
- (void)linkInsertedRecords:(NSArray *)arg1;
- (void)setLinkId:(NSString *)arg1 forRecord:(id)arg2;
- (void)linkRecord:(id)arg1 toRecord:(id)arg2;
- (id <NSCopying>)nameBasedIndexingKeyForRecord:(id)arg1;
- (id <NSCopying> (^)(id))recordToAccountURITransform;
- (id (^)(id))recordToUniqueIdTransform;
- (NSString *)uniqueIdForRecord:(id)arg1;
- (NSString *)linkIdentifierForRecord:(id)arg1;
- (NSArray *)recordsWithLinkIdentifier:(NSString *)arg1;
- (NSDictionary *)recordsForUniqueIds:(NSArray *)arg1;
- (NSArray *)linkIdentifiersOfDeletedRecords;
- (NSArray *)updatedRecords;
- (NSArray *)insertedRecords;
- (NSArray *)allRecords;
@end

