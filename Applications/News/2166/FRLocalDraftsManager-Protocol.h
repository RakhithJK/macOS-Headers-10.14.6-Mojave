//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol FRLocalDraftPreviewable;

@protocol FRLocalDraftsManager <NSObject>
- (void)loadArticleWithIdentifier:(NSString *)arg1 channelIdentifier:(NSString *)arg2 completion:(void (^)(id <FCHeadlineProviding>))arg3 error:(void (^)(NSError *))arg4;
- (id <FRLocalDraftPreviewable>)previewableForArticleIdentifier:(NSString *)arg1 channelIdentifier:(NSString *)arg2;
- (void)registerPreviewable:(id <FRLocalDraftPreviewable>)arg1;
@end

