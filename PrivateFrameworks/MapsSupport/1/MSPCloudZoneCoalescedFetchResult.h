//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudCachingCKFetchResult-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MSPCloudZoneCoalescedFetchResult : NSObject <MSPCloudCachingCKFetchResult>
{
    NSDictionary *_fetchedRecords;
    NSDictionary *_fetchedDeletedRecordIDsByRecordType;
}

@property(readonly, nonatomic) NSDictionary *fetchedDeletedRecordIDsByRecordType; // @synthesize fetchedDeletedRecordIDsByRecordType=_fetchedDeletedRecordIDsByRecordType;
@property(readonly, nonatomic) NSDictionary *fetchedRecords; // @synthesize fetchedRecords=_fetchedRecords;
- (void).cxx_destruct;
- (id)initWithFetchedRecords:(id)arg1 fetchedDeletedRecordIDsByRecordType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

