//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsUI/FCClassifiable-Protocol.h>
#import <NewsUI/FCFeedElement-Protocol.h>
#import <NewsUI/FCFeedTransformationItem-Protocol.h>
#import <NewsUI/NFCopying-Protocol.h>
#import <NewsUI/NSObject-Protocol.h>

@class FCArticleContentManifest, FCCoverArt, FCFeedPersonalizedItemScoreProfile, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;
@protocol FCChannelProviding, FCContentContext, FCHeadlineStocksFields, FCNativeAdProviding;

@protocol FCHeadlineProviding <NSObject, NFCopying, FCFeedElement, FCClassifiable, FCFeedTransformationItem>
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) id <FCNativeAdProviding> associatedAd;
@property(readonly, nonatomic) BOOL showPublisherLogo;
@property(readonly, nonatomic) BOOL isBlockedExplicitContent;
@property(readonly, nonatomic) BOOL showSubscriptionRequiredText;
@property(readonly, copy, nonatomic) NSDate *displayDate;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle;
@property(readonly, nonatomic) unsigned long long storyType;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) unsigned long long feedOrder;
@property(readonly, nonatomic) BOOL usesImageOnTopLayout;
@property(readonly, nonatomic) unsigned long long topStoryType;
@property(readonly, nonatomic) BOOL isTopStory;
@property(readonly, nonatomic) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property(readonly, nonatomic) double tileProminenceScore;
@property(readonly, copy, nonatomic) NSSet *surfacedByTagIDs;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds;
@property(readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic, getter=isPressRelease) BOOL pressRelease;
@property(readonly, nonatomic) BOOL showMinimalChrome;
@property(readonly, nonatomic) BOOL needsRapidUpdates;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle;
@property(readonly, nonatomic) FCCoverArt *coverArt;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath;
@property(readonly, nonatomic) BOOL isDraft;
@property(readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) NSString *sponsoredBy;
@property(readonly, nonatomic, getter=isDisplayingAsNativeAd) BOOL displayAsNativeAd;
@property(readonly, nonatomic, getter=isSponsored) BOOL sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) BOOL featureCandidate;
@property(readonly, nonatomic) double videoDuration;
@property(readonly, nonatomic) NSURL *videoURL;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property(readonly, copy, nonatomic) NSURL *contentURL;
@property(readonly, copy, nonatomic) NSString *accessoryText;
@property(readonly, copy, nonatomic) NSString *shortExcerpt;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ;
@property(readonly, nonatomic) BOOL hasThumbnail;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame;
@property(readonly, copy, nonatomic) NSString *sourceName;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, nonatomic) long long backendArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *titleCompact;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;

@optional
@property(readonly, nonatomic) BOOL isLocalDraft;
@property(readonly, copy, nonatomic) NSString *callToActionText;
@property(readonly, copy, nonatomic) NSArray *linkedIssueIDs;
@property(readonly, copy, nonatomic) NSArray *linkedArticleIDs;
@property(readonly, nonatomic) BOOL showBundleSoftPaywall;
@property(readonly, nonatomic, getter=isIssueOnly) BOOL issueOnly;
@property(readonly, copy, nonatomic) FCIssue *masterIssue;
@property(readonly, nonatomic) BOOL webEmbedsEnabled;
@property(readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
@property(readonly, nonatomic) NSData *backingArticleRecordData;
@property(readonly, nonatomic) id <FCHeadlineStocksFields> stocksFields;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property(readonly, nonatomic) unsigned long long role;
- (FCArticleContentManifest *)contentManifestWithContext:(id <FCContentContext>)arg1;
@end

