//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCHeadlineProviding-Protocol.h"

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, FCCoverArt, FCFeedPersonalizedItemScoreProfile, FCHeadlineExperimentalTitleMetadata, FCHeadlineThumbnail, FCIssue, FCTopStoriesStyleConfiguration, NSArray, NSData, NSDate, NSSet, NSString, NSURL;
@protocol FCChannelProviding, FCHeadlineStocksFields, FCNativeAdProviding;

@interface FRDiscoverMoreHeadline : NSObject <FCHeadlineProviding>
{
    BOOL _hasThumbnail;
    BOOL _sponsored;
    BOOL _deleted;
    BOOL _isDraft;
    BOOL _isLocalDraft;
    BOOL _featureCandidate;
    BOOL _needsRapidUpdates;
    BOOL _showMinimalChrome;
    BOOL _boundToContext;
    BOOL _hiddenFromFeeds;
    BOOL _pressRelease;
    BOOL _hiddenFromAutoFavorites;
    BOOL _paid;
    BOOL _fromBlockedStorefront;
    BOOL _explicitContent;
    BOOL _canBePurchased;
    BOOL _showDiscoverMoreInterstitial;
    BOOL _withNextArticleAffordance;
    NSString *_versionIdentifier;
    NSString *_identifier;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_clusterID;
    unsigned long long _contentType;
    NSString *_title;
    NSString *_titleCompact;
    FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata;
    NSString *_primaryAudience;
    NSDate *_publishDate;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    id <FCChannelProviding> _sourceChannel;
    NSString *_sourceName;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    FCHeadlineThumbnail *_thumbnailWidgetLQ;
    FCHeadlineThumbnail *_thumbnailWidget;
    FCHeadlineThumbnail *_thumbnailWidgetHQ;
    NSString *_shortExcerpt;
    NSString *_accessoryText;
    NSURL *_contentURL;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    NSArray *_topics;
    NSArray *_topicIDs;
    NSURL *_videoURL;
    double _videoDuration;
    NSString *_sponsoredBy;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    long long _minimumNewsVersion;
    NSString *_videoCallToActionTitle;
    NSURL *_videoCallToActionURL;
    FCCoverArt *_coverArt;
    unsigned long long _feedOrder;
    NSString *_feedID;
    unsigned long long _order;
    NSString *_sourceChannelID;
    unsigned long long _publishDateMilliseconds;
    unsigned long long _feedHalfLifeMilliseconds;
    double _globalUserFeedback;
    NSDate *_displayDate;
    NSString *_articleRecirculationConfigJSON;
    NSArray *_publisherSpecifiedArticleIDs;
    NSString *_language;
    long long _nextArticleAffordanceType;
    NSString *_tappedNextArticleAffordanceFeedID;
    struct CGRect _thumbnailFocalFrame;
}

@property(nonatomic) BOOL withNextArticleAffordance; // @synthesize withNextArticleAffordance=_withNextArticleAffordance;
@property(retain, nonatomic) NSString *tappedNextArticleAffordanceFeedID; // @synthesize tappedNextArticleAffordanceFeedID=_tappedNextArticleAffordanceFeedID;
@property(nonatomic) long long nextArticleAffordanceType; // @synthesize nextArticleAffordanceType=_nextArticleAffordanceType;
@property(nonatomic) BOOL showDiscoverMoreInterstitial; // @synthesize showDiscoverMoreInterstitial=_showDiscoverMoreInterstitial;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs; // @synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON; // @synthesize articleRecirculationConfigJSON=_articleRecirculationConfigJSON;
@property(readonly, copy, nonatomic) NSDate *displayDate; // @synthesize displayDate=_displayDate;
@property(readonly, nonatomic) BOOL canBePurchased; // @synthesize canBePurchased=_canBePurchased;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent; // @synthesize explicitContent=_explicitContent;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront; // @synthesize fromBlockedStorefront=_fromBlockedStorefront;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds; // @synthesize feedHalfLifeMilliseconds=_feedHalfLifeMilliseconds;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds; // @synthesize publishDateMilliseconds=_publishDateMilliseconds;
@property(readonly, copy, nonatomic) NSString *sourceChannelID; // @synthesize sourceChannelID=_sourceChannelID;
@property(readonly, nonatomic) unsigned long long order; // @synthesize order=_order;
@property(readonly, copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(readonly, nonatomic) unsigned long long feedOrder; // @synthesize feedOrder=_feedOrder;
@property(readonly, nonatomic) FCCoverArt *coverArt; // @synthesize coverArt=_coverArt;
@property(readonly, copy, nonatomic) NSURL *videoCallToActionURL; // @synthesize videoCallToActionURL=_videoCallToActionURL;
@property(readonly, copy, nonatomic) NSString *videoCallToActionTitle; // @synthesize videoCallToActionTitle=_videoCallToActionTitle;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic, getter=isPressRelease) BOOL pressRelease; // @synthesize pressRelease=_pressRelease;
@property(readonly, nonatomic, getter=isHiddenFromFeeds) BOOL hiddenFromFeeds; // @synthesize hiddenFromFeeds=_hiddenFromFeeds;
@property(readonly, nonatomic, getter=isBoundToContext) BOOL boundToContext; // @synthesize boundToContext=_boundToContext;
@property(readonly, nonatomic) BOOL isLocalDraft; // @synthesize isLocalDraft=_isLocalDraft;
@property(readonly, copy, nonatomic) NSString *sponsoredBy; // @synthesize sponsoredBy=_sponsoredBy;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@property(readonly, copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetHQ; // @synthesize thumbnailWidgetHQ=_thumbnailWidgetHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidget; // @synthesize thumbnailWidget=_thumbnailWidget;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailWidgetLQ; // @synthesize thumbnailWidgetLQ=_thumbnailWidgetLQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ; // @synthesize thumbnailUltraHQ=_thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ; // @synthesize thumbnailHQ=_thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium; // @synthesize thumbnailMedium=_thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ; // @synthesize thumbnailLQ=_thumbnailLQ;
@property(readonly, nonatomic) BOOL hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
@property(readonly, nonatomic) struct CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(readonly, copy, nonatomic) FCHeadlineExperimentalTitleMetadata *experimentalTitleMetadata; // @synthesize experimentalTitleMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCNativeAdProviding> associatedAd;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property(readonly, nonatomic) BOOL showSubscriptionRequiredText;
- (unsigned long long)articleContentType;
@property(readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, nonatomic) BOOL showPublisherLogo;
@property(readonly, nonatomic) BOOL isBlockedExplicitContent;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) unsigned long long topStoryType;
@property(readonly, nonatomic) BOOL isTopStory;
@property(readonly, nonatomic) BOOL usesImageOnTopLayout;
@property(readonly, nonatomic) double tileProminenceScore;
@property(readonly, nonatomic) FCFeedPersonalizedItemScoreProfile *scoreProfile;
@property(readonly, copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(readonly, copy, nonatomic) NSSet *surfacedByTagIDs;
@property(readonly, copy, nonatomic) NSString *surfacedByBinID;
@property(readonly, copy, nonatomic) NSString *surfacedByTopicID;
@property(readonly, copy, nonatomic) NSString *surfacedByChannelID;
@property(readonly, copy, nonatomic) NSString *surfacedBySectionID;
@property(readonly, nonatomic) BOOL showMinimalChrome; // @synthesize showMinimalChrome=_showMinimalChrome;
@property(readonly, nonatomic) BOOL needsRapidUpdates; // @synthesize needsRapidUpdates=_needsRapidUpdates;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle; // @synthesize storyStyle=_storyStyle;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(readonly, copy, nonatomic) NSString *localDraftPath;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic) BOOL isDraft; // @synthesize isDraft=_isDraft;
@property(readonly, nonatomic, getter=isDeleted) BOOL deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(readonly, nonatomic, getter=isDisplayingAsNativeAd) BOOL displayAsNativeAd;
@property(readonly, nonatomic, getter=isSponsored) BOOL sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) BOOL featureCandidate; // @synthesize featureCandidate=_featureCandidate;
- (id)headlineTemplate;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
- (id)articleExcerpt;
@property(readonly, copy, nonatomic) NSString *callToActionText;
@property(readonly, copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (id)contentURLString;
@property(readonly, nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(readonly, nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
- (double)priority;
@property(readonly, copy, nonatomic) NSString *titleCompact; // @synthesize titleCompact=_titleCompact;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, copy, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(readonly, nonatomic, getter=isANF) BOOL anf;
@property(readonly, copy, nonatomic) NSString *itemID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowDiscoverMoreInterstitial:(BOOL)arg1 nextArticleAffordanceType:(long long)arg2 tappedNextArticleAffordanceFeedID:(id)arg3 withNextArticleAffordance:(BOOL)arg4;

// Remaining properties
@property(readonly, nonatomic) NSData *backingArticleRecordData;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isIssueOnly) BOOL issueOnly;
@property(readonly, copy, nonatomic) NSArray *linkedArticleIDs;
@property(readonly, copy, nonatomic) NSArray *linkedIssueIDs;
@property(readonly, copy, nonatomic) FCIssue *masterIssue;
@property(readonly, nonatomic) unsigned long long role;
@property(readonly, nonatomic) BOOL showBundleSoftPaywall;
@property(readonly, nonatomic) id <FCHeadlineStocksFields> stocksFields;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL webEmbedsEnabled;

@end

