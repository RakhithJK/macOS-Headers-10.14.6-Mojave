//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSString, NSURL;

@protocol WBSCyclerTestTarget <NSObject>
- (void)syncBookmarksWithCompletionHandler:(void (^)(long long))arg1;
- (void)setURL:(NSURL *)arg1 forBookmarkWithIdentifier:(NSString *)arg2 reply:(void (^)(BOOL))arg3;
- (void)setTitle:(NSString *)arg1 forBookmarkWithIdentifier:(NSString *)arg2 reply:(void (^)(BOOL))arg3;
- (void)moveBookmarkWithIdentifier:(NSString *)arg1 intoListWithIdentifier:(NSString *)arg2 atIndex:(unsigned long long)arg3 reply:(void (^)(BOOL))arg4;
- (void)deleteBookmarkWithIdentifier:(NSString *)arg1 reply:(void (^)(BOOL))arg2;
- (void)createBookmarkListWithTitle:(NSString *)arg1 inListWithIdentifier:(NSString *)arg2 atIndex:(unsigned long long)arg3 reply:(void (^)(BOOL))arg4;
- (void)createBookmarkWithTitle:(NSString *)arg1 url:(NSURL *)arg2 inListWithIdentifier:(NSString *)arg3 atIndex:(unsigned long long)arg4 reply:(void (^)(BOOL))arg5;
- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)fetchTopLevelBookmarkList:(void (^)(WBSCyclerBookmarkListRepresentation *))arg1;
@end

