//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBLSharedServicesManagerReceiver-Protocol.h"

@class NSDate, NSMapTable, NSMutableArray, NSString;
@protocol IPXActivityViewSectionInfosManagerDelegate;

@interface IPXActivityViewSectionInfosManager : NSObject <SBLSharedServicesManagerReceiver>
{
    BOOL _observingChanges;
    id <IPXActivityViewSectionInfosManagerDelegate> _delegate;
    NSMutableArray *_sectionInfos;
    NSMapTable *_sectionInfosByCloudFeedEntryGUID;
    NSDate *_earliestDate;
}

@property(nonatomic) BOOL observingChanges; // @synthesize observingChanges=_observingChanges;
@property(retain, nonatomic) NSDate *earliestDate; // @synthesize earliestDate=_earliestDate;
@property(retain, nonatomic) NSMapTable *sectionInfosByCloudFeedEntryGUID; // @synthesize sectionInfosByCloudFeedEntryGUID=_sectionInfosByCloudFeedEntryGUID;
@property(retain, nonatomic) NSMutableArray *sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(nonatomic) __weak id <IPXActivityViewSectionInfosManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_libraryShouldReload:(id)arg1;
- (void)_commentsDidChange:(id)arg1;
- (void)_assetsDidChange:(id)arg1;
- (void)_activityViewEntriesDidChange:(id)arg1;
- (void)iCloudConfigurationLoggedInAccountStatusChanged;
- (void)_updateSectionInfosForActivityViewEntriesChangeNotifications:(id)arg1 commentsChangeNotifications:(id)arg2 assetsChangeNotifications:(id)arg3;
- (CDUnknownBlockType)_sectionInfoSortingComparator;
- (void)_updateDelegateAndNotifySectionInfosDidChange:(id)arg1;
- (void)_rebuildingSectionInfos:(double)arg1;
- (void)_rebuildSectionInfos;
- (id)indexesOfInvitationsReceivedSectionInfos;
- (long long)numberOfInvitationsReceived;
- (void)loadSectionInfosAtIndexes:(id)arg1 immediatelyLoadNewSections:(BOOL)arg2;
- (void)_getEarliestDateAndMostRecentEntriesForBatchWithLatestDate:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_preHeatAssetEntries:(id)arg1;
- (id)indexesOfUnloadedSectionInfosAtIndexes:(id)arg1;
- (long long)indexOfSectionInfoForCloudFeedEntry:(id)arg1;
- (long long)indexOfSectionInfo:(id)arg1;
- (id)sectionInfosAtIndexes:(id)arg1;
- (id)sectionInfoAtIndex:(long long)arg1;
- (BOOL)hasEnoughCloudFeedAssetEntriesToDisplay;
- (long long)numberOfSectionInfos;
- (void)didDisconnectFromSharingLibrary;
- (void)willDisconnectFromSharingLibrary;
- (void)didConnectToSharingLibrary;
- (void)willConnectToSharingLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

