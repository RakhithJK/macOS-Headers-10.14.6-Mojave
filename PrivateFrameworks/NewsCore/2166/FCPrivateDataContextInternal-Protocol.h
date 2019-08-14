//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCCKPrivateDatabase, FCCKRecordZone, NSString;
@protocol FCAppActivityMonitor;

@protocol FCPrivateDataContextInternal <NSObject>
@property(readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
@property(readonly, nonatomic) FCCKRecordZone *issueReadingHistoryRecordZone;
@property(readonly, nonatomic) id <FCAppActivityMonitor> appActivityMonitor;
@property(readonly, nonatomic) FCCKPrivateDatabase *privateDatabase;
- (void)prepareRecordZonesForUseWithCompletionHandler:(void (^)(NSError *))arg1;
- (FCCKRecordZone *)recordZoneWithName:(NSString *)arg1;
@end

