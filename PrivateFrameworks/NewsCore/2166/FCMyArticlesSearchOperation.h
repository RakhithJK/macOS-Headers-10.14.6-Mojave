//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDateRange, FCFeedItemFeature, NSArray, NSDictionary;

@interface FCMyArticlesSearchOperation : FCOperation
{
    BOOL _channelsOnly;
    BOOL _cachedOnly;
    BOOL _unreadOnly;
    FCCloudContext *_context;
    FCFeedItemFeature *_feature;
    FCDateRange *_dateRange;
    CDUnknownBlockType _searchCompletionHandler;
    NSArray *_resultFeedItems;
    NSDictionary *_resultFeedContextByFeedID;
}

@property(copy) NSDictionary *resultFeedContextByFeedID; // @synthesize resultFeedContextByFeedID=_resultFeedContextByFeedID;
@property(retain, nonatomic) NSArray *resultFeedItems; // @synthesize resultFeedItems=_resultFeedItems;
@property(copy, nonatomic) CDUnknownBlockType searchCompletionHandler; // @synthesize searchCompletionHandler=_searchCompletionHandler;
@property(nonatomic) BOOL unreadOnly; // @synthesize unreadOnly=_unreadOnly;
@property(nonatomic) BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) BOOL channelsOnly; // @synthesize channelsOnly=_channelsOnly;
@property(copy, nonatomic) FCDateRange *dateRange; // @synthesize dateRange=_dateRange;
@property(copy, nonatomic) FCFeedItemFeature *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_generateFeedRequestsForFeedRange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

