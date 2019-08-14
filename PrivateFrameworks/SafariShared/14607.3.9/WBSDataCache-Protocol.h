//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSData, NSString;
@protocol WBSDataCacheDelegate;

@protocol WBSDataCache <NSObject>
@property(nonatomic) __weak id <WBSDataCacheDelegate> dataCacheDelegate;
@property(readonly, nonatomic, getter=isTerminating) BOOL terminating;
- (long long)entryStateForKeyString:(NSString *)arg1;
- (void)removeEntriesForKeyStrings:(NSArray *)arg1 completionHandler:(void (^)(void))arg2;
- (void)setEntry:(NSData *)arg1 forKeyString:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)getEntryURLForKeyString:(NSString *)arg1 completionHandler:(void (^)(NSURL *))arg2;
- (NSData *)requestEntryForKeyString:(NSString *)arg1;
- (void)setSetting:(id)arg1 forKey:(NSString *)arg2;
- (id)settingForKey:(NSString *)arg1;
- (void)reset;
- (void)savePendingChangesBeforeTearDown;
- (void)setUp;
@end

