//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol FRFeedCollectionViewBookmarkManagerDelegate, FRFeedLayoutBlueprintBookmark;

@protocol FRFeedCollectionViewBookmarkManagerType <NSObject>
@property(nonatomic) __weak id <FRFeedCollectionViewBookmarkManagerDelegate> delegate;
- (void)restoreBookmark:(NSObject<FRFeedLayoutBlueprintBookmark> *)arg1;
- (void)clearBookmark;
- (void)saveBookmark:(NSObject<FRFeedLayoutBlueprintBookmark> *)arg1 completion:(void (^)(void))arg2;
- (void)saveBookmarkWithTileInfoID:(NSString *)arg1;
- (NSObject<FRFeedLayoutBlueprintBookmark> *)loadBookmark;
- (NSObject<FRFeedLayoutBlueprintBookmark> *)currentBookmark;
@end

