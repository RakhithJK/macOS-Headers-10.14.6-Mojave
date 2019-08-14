//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation
{
    NSArray *_zoneIDs;
    NSMutableArray *_fetchedZones;
    NSMutableArray *_mutableCorruptRecords;
}

@property(retain, nonatomic) NSMutableArray *mutableCorruptRecords; // @synthesize mutableCorruptRecords=_mutableCorruptRecords;
@property(retain, nonatomic) NSMutableArray *fetchedZones; // @synthesize fetchedZones=_fetchedZones;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
@property(readonly, nonatomic) NSArray *corruptRecords;
- (void)_fetchZones;
- (void)_checkRecordPCSForAllZones;
- (id)nameForState:(unsigned long long)arg1;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
