//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRReferredArticlePageViewDataSource;

@protocol FRReferredArticlePageViewDataSourceDelegate <NSObject>
- (void)referredArticlePageViewDataSource:(FRReferredArticlePageViewDataSource *)arg1 articleOpenedFrom:(long long)arg2 showingMoreArticlesFromPublisher:(BOOL)arg3;
- (void)referredArticlePageViewDataSourceGoToForYouButtonTapped:(FRReferredArticlePageViewDataSource *)arg1;

@optional
- (void)referredArticlePageViewDataSourceWantsToReIndexPages:(FRReferredArticlePageViewDataSource *)arg1;
@end

