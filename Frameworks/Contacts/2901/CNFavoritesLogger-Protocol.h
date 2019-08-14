//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSError, NSString;

@protocol CNFavoritesLogger <NSObject>
- (void)failedToWriteFavoritesToPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(BOOL)arg3;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(NSString *)arg1;
- (void)failedToWriteRemoteFavorites:(NSError *)arg1;
- (void)failedToVerifyFavorites:(NSArray *)arg1 withPropertyListFavorites:(NSArray *)arg2 error:(NSError *)arg3;
- (void)failedToConvertFavoritesToPropertyList:(NSError *)arg1;
- (void)failedToReadFavoritesFromPath:(NSString *)arg1 error:(NSError *)arg2 simulateCrashReport:(BOOL)arg3;
- (void)failedToReadRemoteFavorites:(NSError *)arg1;
- (void)finishedWritingFavoritesToPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(NSString *)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedReadingRemoteFavorites;
- (void)rematchingFavorites:(void (^)(void (^)(void)))arg1;
- (void)writingFavorites:(void (^)(void (^)(void)))arg1;
- (void)readingFavorites:(void (^)(void (^)(void)))arg1;
@end

