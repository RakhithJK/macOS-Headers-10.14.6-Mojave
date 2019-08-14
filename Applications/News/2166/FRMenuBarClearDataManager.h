//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSClearDataManager-Protocol.h"

@class FCPersonalizationData, FRAnalyticsController;
@protocol FCAppleAccount, FCClearableReadingHistory;

@interface FRMenuBarClearDataManager : NSObject <TSClearDataManager>
{
    id <FCAppleAccount> _account;
    id <FCClearableReadingHistory> _clearReadingHistoryManager;
    FCPersonalizationData *_personalizationData;
    FRAnalyticsController *_analyticsController;
}

@property(readonly, nonatomic) FRAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData; // @synthesize personalizationData=_personalizationData;
@property(readonly, nonatomic) id <FCClearableReadingHistory> clearReadingHistoryManager; // @synthesize clearReadingHistoryManager=_clearReadingHistoryManager;
@property(readonly, nonatomic) id <FCAppleAccount> account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)resetIdentifier;
- (void)clearRecommendations;
- (void)clearHistory;
- (void)clearAllData;
- (BOOL)isSyncingEnabled;
- (id)initWithAccount:(id)arg1 clearReadingHistoryManager:(id)arg2 personalizationData:(id)arg3 analyticsController:(id)arg4;

@end

