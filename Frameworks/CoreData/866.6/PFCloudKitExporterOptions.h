//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDatabase, CKRecordZone, NSCloudKitMirroringDelegateOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitExporterOptions : NSObject
{
    CKRecordZone *_zone;
    CKDatabase *_database;
    NSCloudKitMirroringDelegateOptions *_mirroringDelegateOptions;
    unsigned long long _perOperationBytesThreshold;
    unsigned long long _perOperationObjectThreshold;
}

@property(nonatomic) unsigned long long perOperationObjectThreshold; // @synthesize perOperationObjectThreshold=_perOperationObjectThreshold;
@property(nonatomic) unsigned long long perOperationBytesThreshold; // @synthesize perOperationBytesThreshold=_perOperationBytesThreshold;
@property(readonly, nonatomic) NSCloudKitMirroringDelegateOptions *mirroringDelegateOptions; // @synthesize mirroringDelegateOptions=_mirroringDelegateOptions;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKRecordZone *zone; // @synthesize zone=_zone;
- (id)copy;
- (void)dealloc;
- (id)initWithZone:(id)arg1 database:(id)arg2 options:(id)arg3;

@end

