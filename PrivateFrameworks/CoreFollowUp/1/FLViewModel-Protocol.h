//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreFollowUp/NSObject-Protocol.h>

@class FLFollowUpItem, NSArray;

@protocol FLViewModel <NSObject>
- (void)setItemChangeHandler:(void (^)(void))arg1;
- (NSArray *)allPendingItems;

@optional
- (void)refreshItemsForItem:(FLFollowUpItem *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)refreshItems:(NSArray *)arg1 withCompletionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (NSArray *)groups;
@end

