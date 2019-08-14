//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKDSharePCSData, CKRecordID;

__attribute__((visibility("hidden")))
@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation
{
}

- (BOOL)_savePCSDataToCache;
- (BOOL)_decryptPCS;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_fetchPCSDataFromDatabase;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (BOOL)hasAllPCSData;
- (id)itemTypeName;
@property(retain, nonatomic) CKDSharePCSData *sharePCSData;
@property(readonly, nonatomic) CKRecordID *shareID;

@end

