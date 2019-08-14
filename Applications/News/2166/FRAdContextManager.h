//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRAdContextManager : NSObject
{
}

+ (id)stringFromPlacementType:(long long)arg1;
+ (id)_bundleIAPs;
+ (BOOL)_isBundleSubscriber;
+ (id)_jsonContextForDictionary:(id)arg1;
+ (id)_jsonContextWithHeader:(id)arg1 body:(id)arg2;
+ (BOOL)_allowFeedIDSharingForContentProviderID:(long long)arg1;
+ (BOOL)_allowFeedIDSharingForCategories:(id)arg1 channelID:(id)arg2;
+ (BOOL)_allowArticleIDSharingForContentProviderID:(long long)arg1;
+ (id)_contentProviderForTag:(id)arg1;
+ (id)_stringForSubscriptionType:(unsigned long long)arg1;
+ (id)_stringForOpenedFromType:(long long)arg1;
+ (id)_stringForAdvertisementType:(unsigned long long)arg1;
+ (id)_dictionaryMetadataForFeed:(id)arg1 adPreviewID:(id)arg2 languages:(id)arg3;
+ (id)_dictionaryMetadataForArticleViewContext:(id)arg1;
+ (id)_groupTypeForGroupDescriptor:(id)arg1 sectionDescriptorClass:(Class)arg2;
+ (id)_dictionaryMetadataForGroupFeedDescriptor:(id)arg1 sectionDescriptorClass:(Class)arg2 additionalCategories:(id)arg3 additionalKeywords:(id)arg4 languages:(id)arg5;
+ (id)_dictionaryMetadataForArticleHeadline:(id)arg1 withRequest:(id)arg2;
+ (id)_bodyForNativeAdWithFeed:(id)arg1 feedViewContext:(id)arg2 context:(id)arg3;
+ (id)_bodyForInterstitialWithArticle:(id)arg1 nextArticle:(id)arg2 feed:(id)arg3 feedViewContext:(id)arg4 articleContext:(id)arg5 articleViewContext:(id)arg6;
+ (id)_groupContextWithArticleContext:(id)arg1 headline:(id)arg2;
+ (id)_bodyForArticleWithHeadline:(id)arg1 articleView:(id)arg2 articleContext:(id)arg3;
+ (id)_bodyForVideoWithHeadline:(id)arg1 articleView:(id)arg2 articleContext:(id)arg3;
+ (id)_bodyTemplateWithFeed:(id)arg1 feedViewContext:(id)arg2 context:(id)arg3;
+ (id)_headerDictionaryWithAdPlacementType:(long long)arg1 requestContext:(id)arg2;
+ (id)feedGroupTypeForGroupDescriptor:(id)arg1 sectionDescriptorClass:(Class)arg2;
+ (id)jsonContextForNativeAdWithArticle:(id)arg1 articleContext:(id)arg2 requestContext:(id)arg3;
+ (id)jsonContextForNativeAdWithFeed:(id)arg1 feedViewContext:(id)arg2 withRequestContext:(id)arg3;
+ (id)jsonContextForInterstialFromPreviousArticle:(id)arg1 toNextArticle:(id)arg2 withFeed:(id)arg3 feedViewContext:(id)arg4 articleViewContext:(id)arg5 withRequestContext:(id)arg6;
+ (id)jsonContextForVideoHeadline:(id)arg1 placementType:(long long)arg2 articleViewContext:(id)arg3 withRequestContext:(id)arg4;
+ (id)jsonArticleContextWithArticle:(id)arg1 articleContext:(id)arg2 requestContext:(id)arg3;
+ (id)jsonRelayoutContextWithFeed:(id)arg1 feedViewContext:(id)arg2 requestContext:(id)arg3;

@end

