//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDGetRecordZonesURLRequest : CKDURLRequest
{
    BOOL _onlyFetchPCSInfo;
    NSArray *_recordZones;
    CDUnknownBlockType _recordZoneFetchedBlock;
    NSArray *_zoneIDs;
    NSMutableDictionary *_zoneIDByRequestID;
}

@property(retain, nonatomic) NSMutableDictionary *zoneIDByRequestID; // @synthesize zoneIDByRequestID=_zoneIDByRequestID;
@property(retain, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchedBlock; // @synthesize recordZoneFetchedBlock=_recordZoneFetchedBlock;
@property(nonatomic) BOOL onlyFetchPCSInfo; // @synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo;
@property(readonly, nonatomic) NSArray *recordZones; // @synthesize recordZones=_recordZones;
- (void).cxx_destruct;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (int)operationType;
- (BOOL)allowsAnonymousAccount;
- (id)initWithRecordZoneIDs:(id)arg1;

@end

