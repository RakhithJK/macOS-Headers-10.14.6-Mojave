//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordZoneID, NSArray, NSString;

@interface SCKZoneSchema : NSObject
{
    BOOL _atomic;
    CKRecordZoneID *_zoneID;
    NSString *_zoneName;
    NSArray *_recordSchemas;
}

@property(copy, nonatomic) NSArray *recordSchemas; // @synthesize recordSchemas=_recordSchemas;
@property(readonly, nonatomic, getter=isAtomic) BOOL atomic; // @synthesize atomic=_atomic;
@property(readonly, copy, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly, copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
- (void).cxx_destruct;
- (id)validateRecords:(id)arg1;
- (BOOL)isValidRecord:(id)arg1;
- (id)schemaForRecordType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allRecordFieldNames;
- (id)initWithName:(id)arg1 atomic:(BOOL)arg2 recordSchemas:(id)arg3;

@end

