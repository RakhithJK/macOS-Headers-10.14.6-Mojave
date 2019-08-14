//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKPersistentHistoryTransactionChangeSummaryModel, NSDate;

@interface EKPersistentHistoryTransactionChangeSummary : NSObject
{
    EKPersistentHistoryTransactionChangeSummaryModel *_summaryModel;
    NSDate *_latestTimestamp;
}

+ (id)fieldsToIgnore;
+ (id)timeFields;
@property(readonly, nonatomic) NSDate *latestTimestamp; // @synthesize latestTimestamp=_latestTimestamp;
@property(readonly, nonatomic) EKPersistentHistoryTransactionChangeSummaryModel *summaryModel; // @synthesize summaryModel=_summaryModel;
- (void).cxx_destruct;
- (void)_filterAndPopulateChangesFromTransaction:(id)arg1;
- (void)_updateLatestTimestampWithDate:(id)arg1;
- (id)_queryCoreDataForTransactionsSinceLastCheckpoint:(id)arg1 error:(id *)arg2;
- (id)gatherChangesSinceLastDate:(id)arg1 error:(id *)arg2;
- (BOOL)calendarsOrAccountsChanged;
- (id)init;

@end

