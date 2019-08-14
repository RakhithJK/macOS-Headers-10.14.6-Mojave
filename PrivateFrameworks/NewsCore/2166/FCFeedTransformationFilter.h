//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class FCBundleSubscription, NSSet, NSString;
@protocol FCPaidAccessCheckerType;

@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming>
{
    long long _filterOptions;
    NSSet *_otherArticleIDs;
    NSSet *_otherClusterIDs;
    NSSet *_mutedChannelTagIDs;
    NSSet *_subscribedTagIDs;
    NSString *_briefingsTagID;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCBundleSubscription *_bundleSubscription;
}

+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3;
+ (id)transformationWithFilterOptions:(long long)arg1 configuration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4;
+ (id)transformationWithFilterOptions:(long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedChannelTagIDs:(id)arg5 briefingsTagID:(id)arg6 paidAccessChecker:(id)arg7 bundleSubscription:(id)arg8;
@property(retain, nonatomic) FCBundleSubscription *bundleSubscription; // @synthesize bundleSubscription=_bundleSubscription;
@property(retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
@property(copy, nonatomic) NSString *briefingsTagID; // @synthesize briefingsTagID=_briefingsTagID;
@property(copy, nonatomic) NSSet *subscribedTagIDs; // @synthesize subscribedTagIDs=_subscribedTagIDs;
@property(copy, nonatomic) NSSet *mutedChannelTagIDs; // @synthesize mutedChannelTagIDs=_mutedChannelTagIDs;
@property(copy, nonatomic) NSSet *otherClusterIDs; // @synthesize otherClusterIDs=_otherClusterIDs;
@property(copy, nonatomic) NSSet *otherArticleIDs; // @synthesize otherArticleIDs=_otherArticleIDs;
@property(nonatomic) long long filterOptions; // @synthesize filterOptions=_filterOptions;
- (void).cxx_destruct;
- (id)transformHeadline:(id)arg1;
- (id)transformHeadlines:(id)arg1;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

