//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSKVStore, NSString;
@protocol OS_dispatch_queue;

@interface IMDCKMockRecordZone : NSObject
{
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_queue;
    IDSKVStore *_recordStore;
}

@property(retain, nonatomic) IDSKVStore *recordStore; // @synthesize recordStore=_recordStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_handleModifyRecordsOperation:(id)arg1;
- (id)_serializedCKRecordData:(id)arg1;
- (void)_handleFetchZoneChangesOperation:(id)arg1;
- (id)_ckRecordFromData:(id)arg1;
- (unsigned long long)_fetchResultLimit:(id)arg1;
- (id)_fetchRecordZoneChangesOptionsFromOperation:(id)arg1;
- (void)handleOperation:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (id)_kvStorePath;

@end

