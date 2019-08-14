//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, PPQuickTypeQuery;

@protocol PPQuickTypeServerProtocol
- (void)hibernateWithCompletion:(void (^)(void))arg1;
- (void)warmUpWithCompletion:(void (^)(void))arg1;
- (void)recentQuickTypeItemsForRecipients:(NSArray *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)quickTypeItemsWithLanguageModelingTokens:(NSDictionary *)arg1 localeIdentifier:(NSString *)arg2 recipients:(NSArray *)arg3 bundleIdentifier:(NSString *)arg4 limit:(unsigned long long)arg5 completion:(void (^)(NSArray *, PPQuickTypeExplanationSet *))arg6;
- (void)quickTypeItemsWithQuery:(PPQuickTypeQuery *)arg1 limit:(unsigned long long)arg2 completion:(void (^)(NSArray *, PPQuickTypeExplanationSet *))arg3;
@end

