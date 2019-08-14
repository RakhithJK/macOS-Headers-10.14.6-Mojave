//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface LiSnapshotJournalManifest : NSObject
{
    NSURL *_recoveryURL;
    NSURL *_infoPlistURL;
    NSObject<OS_dispatch_queue> *_ioQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSURL *infoPlistURL; // @synthesize infoPlistURL=_infoPlistURL;
@property(retain, nonatomic) NSURL *recoveryURL; // @synthesize recoveryURL=_recoveryURL;
- (void).cxx_destruct;
- (BOOL)isSnapshotOkForRebuild;
- (BOOL)isSnapshotCompleteForceCheck:(BOOL)arg1;
- (BOOL)isSnapshotComplete;
- (BOOL)writeHistoricalMarker:(id)arg1;
- (BOOL)writeSnapshotCompleteWithError:(id)arg1;
- (id)writeSnapshotAttemptStart;
- (BOOL)invalidateSnapshotWithErrorCode:(unsigned short)arg1;
- (BOOL)updateSnapshotLastValidated;
- (BOOL)updateWithDatabaseVersion:(id)arg1 minorVersion:(id)arg2 schemaVersion:(id)arg3 metaSchemaVersion:(id)arg4;
- (id)computeSHAForSnapshotTables;
- (void)computeSHAForTableURL:(id)arg1 withFileManager:(id)arg2 onQueue:(id)arg3 shaComputed:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)historicalMarker;
@property(readonly, nonatomic) long long schemaVersion;
@property(readonly, nonatomic) NSDictionary *infoPlist;
- (id)initWithLibraryURL:(id)arg1;
- (id)init;

@end

