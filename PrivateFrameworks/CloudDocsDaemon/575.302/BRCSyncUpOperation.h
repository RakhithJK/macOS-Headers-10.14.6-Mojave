//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCLocalItem, BRCServerZone, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCSyncUpOperation : _BRCOperation <BRCOperationSubclass>
{
    unsigned long long _requestID;
    float _cost;
    NSMutableArray *_recordsToSave;
    NSMutableArray *_packagesInFlight;
    NSMutableArray *_createdAppLibraryNames;
    NSMutableArray *_deletedRecordIDs;
    NSMutableArray *_iworkUnsharedShareIDs;
    NSMutableDictionary *_renamedShareIDsToNames;
    NSMutableArray *_recordsNeedingNewSharingProtectionInfo;
    NSMutableArray *_recordsNeedingUpdatedSharingProtectionInfo;
    NSMutableDictionary *_recordIDsToDeleteToEtags;
    NSMutableDictionary *_pluginFieldsForRecordDeletesByID;
    BRCLocalItem *_itemNeedingPCSChaining;
    NSMutableDictionary *_conflictLosersToResolveByRecordID;
    NSString *_stageID;
    CDUnknownBlockType _syncUpCompletionBlock;
    BRCServerZone *_serverZone;
}

+ (id)syncUpOperationForZone:(id)arg1 maxCost:(float)arg2 retryAfter:(unsigned long long *)arg3;
@property(retain, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) float cost; // @synthesize cost=_cost;
@property(copy, nonatomic) CDUnknownBlockType syncUpCompletionBlock; // @synthesize syncUpCompletionBlock=_syncUpCompletionBlock;
@property(retain, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property(retain, nonatomic) NSMutableDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(retain, nonatomic) BRCLocalItem *itemNeedingPCSChaining; // @synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining;
@property(retain, nonatomic) NSMutableDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property(retain, nonatomic) NSMutableDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(retain, nonatomic) NSMutableArray *recordsNeedingUpdatedSharingProtectionInfo; // @synthesize recordsNeedingUpdatedSharingProtectionInfo=_recordsNeedingUpdatedSharingProtectionInfo;
@property(retain, nonatomic) NSMutableArray *recordsNeedingNewSharingProtectionInfo; // @synthesize recordsNeedingNewSharingProtectionInfo=_recordsNeedingNewSharingProtectionInfo;
@property(retain, nonatomic) NSMutableDictionary *renamedShareIDsToNames; // @synthesize renamedShareIDsToNames=_renamedShareIDsToNames;
@property(retain, nonatomic) NSMutableArray *iworkUnsharedShareIDs; // @synthesize iworkUnsharedShareIDs=_iworkUnsharedShareIDs;
@property(retain, nonatomic) NSMutableArray *deletedRecordIDs; // @synthesize deletedRecordIDs=_deletedRecordIDs;
@property(readonly, nonatomic) NSMutableArray *createdAppLibraryNames; // @synthesize createdAppLibraryNames=_createdAppLibraryNames;
@property(retain, nonatomic) NSMutableArray *packagesInFlight; // @synthesize packagesInFlight=_packagesInFlight;
@property(retain, nonatomic) NSMutableArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (void).cxx_destruct;
- (void)main;
- (void)_performUpdateSharingProtectionDataIfNecessary:(CDUnknownBlockType)arg1;
- (BOOL)_recordIsIWorkShareable:(id)arg1;
- (void)_setSharingFieldsOnContentRecord:(id)arg1 withProtectionData:(id)arg2 baseToken:(id)arg3 routingKey:(id)arg4 forceOverwrite:(BOOL)arg5;
- (void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
- (void)_performShareUpdateAndModifyRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performShareUpdate:(CDUnknownBlockType)arg1;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_performModifyRecordsOrPCSChainOperationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_performPCSChainOperationIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)createActivity;
- (id)initWithZone:(id)arg1;
- (BOOL)prepareWithMaxCost:(float)arg1 retryAfter:(unsigned long long *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

