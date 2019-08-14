//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPersistentHistoryChange.h>

#import <CoreData/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSManagedObjectID, NSPersistentHistoryTransaction, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding>
{
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}

+ (id)_updatedPropertiesForEntity:(id)arg1 andData:(id)arg2;
+ (id)_mergeOldMask:(id)arg1 andNewMask:(id)arg2;
+ (id)_dataMaskForEntity:(id)arg1 andDeltaMask:(struct __CFBitVector *)arg2;
+ (id)_propertyDataForEntity:(id)arg1 withSetOfPropertyNames:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)_backingObjectID;
- (id)updatedProperties;
- (long long)changeID;
- (id)transaction;
- (void)_setTransaction:(id)arg1;
- (long long)changeType;
- (id)changedObjectID;
- (id)tombstone;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 andChangeObjectID:(id)arg2;

@end

