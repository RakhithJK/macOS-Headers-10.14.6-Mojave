//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDuet/NSObject-Protocol.h>

@class CSSearchableItem, CSUserAction, NSArray, NSDate, NSString;

@protocol CSSearchableIndexObserver <NSObject>
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)addOrUpdateSearchableItems:(NSArray *)arg1;

@optional
- (void)addUserAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2;
- (NSArray *)supportedUTIs;
- (void)purgeSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsSinceDate:(NSDate *)arg1 bundleID:(NSString *)arg2;
@end

