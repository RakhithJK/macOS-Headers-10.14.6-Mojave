//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CNContact, NSArray, NSViewController;

@protocol CNContactCardViewControllerLogger
- (void)logCommitedEditingResults:(CNContact *)arg1;
- (void)logReceivedRequestToSaveContact:(CNContact *)arg1;
- (void)logDidSaveContact:(CNContact *)arg1;
- (void)logWillSaveContact:(CNContact *)arg1;
- (void)logTotalCalculatedDesiredHeight:(double)arg1;
- (void)logWidget:(NSViewController *)arg1 reportedCustomSpacing:(double)arg2;
- (void)logWidget:(NSViewController *)arg1 reportedDesiredHeight:(double)arg2;
- (void)logDidSetPropertyKeysToDisplay:(NSArray *)arg1;
- (void)logDidReceiveRefreshedContact:(CNContact *)arg1 forSetContact:(CNContact *)arg2;
- (void)logContactWasSet:(CNContact *)arg1;
@end

