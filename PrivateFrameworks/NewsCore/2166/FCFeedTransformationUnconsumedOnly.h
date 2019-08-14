//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;
@protocol FCFeedTransforming;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming>
{
    id <FCFeedTransforming> _innerFilter;
}

@property(retain, nonatomic) id <FCFeedTransforming> innerFilter; // @synthesize innerFilter=_innerFilter;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFilterMethod:(unsigned long long)arg1 consumedArticleItems:(id)arg2 minimumTimeSinceFirstConsumedToFilter:(double)arg3 filterDate:(id)arg4 articleIDProvider:(CDUnknownBlockType)arg5 dateOfArticleIDConsumptionProvider:(CDUnknownBlockType)arg6 maxVersionConsumedProvider:(CDUnknownBlockType)arg7 dateOfMaxVersionConsumptionProvider:(CDUnknownBlockType)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

