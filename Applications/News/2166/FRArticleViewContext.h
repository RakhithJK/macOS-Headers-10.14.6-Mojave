//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class FCFeedDescriptor, FRAnalyticsReferral, FRFeedCollectionViewLayoutSectionDescriptorForYou, FRFeedViewContext, FRSpecialEventsArticleViewContext, FRSpecialEventsInfo, NSDate, NSString, NSURL;

@interface FRArticleViewContext : NSObject <NSSecureCoding>
{
    BOOL _isUserSubscribedToParentFeed;
    BOOL _adSupported;
    BOOL _isVideoInFeed;
    BOOL _showPlacardForFreeArticle;
    BOOL _showPlacardForSharedArticle;
    BOOL _isPaidSubscriberToSourceChannel;
    BOOL _originallyPresentedViaOpenURL;
    BOOL _isCoverArticle;
    BOOL _isEditorialTabShowingBadge;
    long long _presentationReason;
    long long _parentFeedType;
    NSString *_parentFeedID;
    long long _feedViewPresentationReason;
    NSString *_feedViewSearchText;
    long long _feedPickerSection;
    NSURL *_sourceURL;
    NSString *_sourceApplication;
    NSString *_componentID;
    NSString *_userActivityType;
    NSDate *_userActionDate;
    long long _hardPaywallType;
    long long _affordanceType;
    unsigned long long _coverArticleDisplayRank;
    long long _coverArticleFeatureType;
    FCFeedDescriptor *_feed;
    FRFeedViewContext *_feedContext;
    long long _previousArticleHostViewType;
    FRFeedCollectionViewLayoutSectionDescriptorForYou *_groupFeedDescriptor;
    long long _displayRank;
    long long _articleDisplayRankInGroup;
    long long _groupDisplayRank;
    NSString *_notificationID;
    FRSpecialEventsInfo *_specialEventsInfo;
    FRAnalyticsReferral *_referral;
    NSString *_previousArticleID;
    long long _previousArticleVersion;
    long long _publisherArticleVersion;
    long long _backendArticleVersion;
    NSString *_adPreviewID;
    NSString *_adPreviewSessionID;
    long long _maximumAdRequestsForCurrentAdPreviewID;
    FRSpecialEventsArticleViewContext *_specialEventsArticleViewContext;
}

+ (BOOL)supportsSecureCoding;
+ (long long)affordanceTypeForArticleViewContext:(id)arg1;
+ (id)articleContextForEditorialArticle;
+ (id)articleContextForSpecialEventArticleWithContext:(id)arg1;
+ (id)articleContextForNotificationWithNotificationID:(id)arg1 userActionDate:(id)arg2;
+ (id)articleContextForUserActivityWithSourceApplication:(id)arg1 userActivityType:(id)arg2;
+ (id)articleContextForHandoff;
+ (id)articleContextForLinkOpenedFromEditorialHomepageWithURL:(id)arg1 componentID:(id)arg2 previousArticleID:(id)arg3 previousArticleVersion:(id)arg4 isEditorialTabShowingBadge:(BOOL)arg5 sourceApplication:(id)arg6 adPreviewSessionID:(id)arg7 adPreviewID:(id)arg8 maximumAdRequestsForCurrentAdPreviewID:(long long)arg9;
+ (id)articleContextForLinkWithURL:(id)arg1 sourceApplication:(id)arg2 previousArticleID:(id)arg3 previousArticleVersion:(id)arg4 adPreviewSessionID:(id)arg5 adPreviewID:(id)arg6 maximumAdRequestsForCurrentAdPreviewID:(long long)arg7 userActionDate:(id)arg8;
+ (id)articleContextForRelatedArticlesWithIsPaidSubscriberToSourceChannel:(BOOL)arg1 previousArticleID:(id)arg2;
+ (id)articleContextForMoreFromPublisherWithIsPaidSubscriberToSourceChannel:(BOOL)arg1 previousArticleID:(id)arg2;
+ (id)coverArticleContextForFeed:(id)arg1 feedContext:(id)arg2 coverArticleDisplayRank:(long long)arg3 coverArticleFeatureType:(long long)arg4 sourceChannel:(id)arg5 isSubscribedToFeed:(BOOL)arg6 isPaidSubscriberToSourceChannel:(BOOL)arg7 userActionDate:(id)arg8;
+ (id)articleContextForSearchResultWithSourceChannel:(id)arg1 isVideoInFeed:(BOOL)arg2 isSubscribedToFeed:(BOOL)arg3 isPaidSubscriberToSourceChannel:(BOOL)arg4;
+ (id)articleContextForSwipingBetweenArticlesWithFeed:(id)arg1 feedContext:(id)arg2 sourceChannel:(id)arg3 isVideoInFeed:(BOOL)arg4 isSubscribedToFeed:(BOOL)arg5 isPaidSubscriberToSourceChannel:(BOOL)arg6;
+ (id)articleContextForFeed:(id)arg1 feedContext:(id)arg2 sourceChannel:(id)arg3 isVideoInFeed:(BOOL)arg4 isSubscribedToFeed:(BOOL)arg5 isPaidSubscriberToSourceChannel:(BOOL)arg6 userActionDate:(id)arg7;
+ (id)unknownArticleContext;
@property(retain, nonatomic) FRSpecialEventsArticleViewContext *specialEventsArticleViewContext; // @synthesize specialEventsArticleViewContext=_specialEventsArticleViewContext;
@property(nonatomic) long long maximumAdRequestsForCurrentAdPreviewID; // @synthesize maximumAdRequestsForCurrentAdPreviewID=_maximumAdRequestsForCurrentAdPreviewID;
@property(copy, nonatomic) NSString *adPreviewSessionID; // @synthesize adPreviewSessionID=_adPreviewSessionID;
@property(copy, nonatomic) NSString *adPreviewID; // @synthesize adPreviewID=_adPreviewID;
@property(nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(nonatomic) long long previousArticleVersion; // @synthesize previousArticleVersion=_previousArticleVersion;
@property(copy, nonatomic) NSString *previousArticleID; // @synthesize previousArticleID=_previousArticleID;
@property(nonatomic) BOOL isEditorialTabShowingBadge; // @synthesize isEditorialTabShowingBadge=_isEditorialTabShowingBadge;
@property(retain, nonatomic) FRAnalyticsReferral *referral; // @synthesize referral=_referral;
@property(retain, nonatomic) FRSpecialEventsInfo *specialEventsInfo; // @synthesize specialEventsInfo=_specialEventsInfo;
@property(copy, nonatomic) NSString *notificationID; // @synthesize notificationID=_notificationID;
@property(nonatomic) long long groupDisplayRank; // @synthesize groupDisplayRank=_groupDisplayRank;
@property(nonatomic) long long articleDisplayRankInGroup; // @synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup;
@property(nonatomic) long long displayRank; // @synthesize displayRank=_displayRank;
@property(copy, nonatomic) FRFeedCollectionViewLayoutSectionDescriptorForYou *groupFeedDescriptor; // @synthesize groupFeedDescriptor=_groupFeedDescriptor;
@property(nonatomic) long long previousArticleHostViewType; // @synthesize previousArticleHostViewType=_previousArticleHostViewType;
@property(retain, nonatomic) FRFeedViewContext *feedContext; // @synthesize feedContext=_feedContext;
@property(retain, nonatomic) FCFeedDescriptor *feed; // @synthesize feed=_feed;
@property(nonatomic) BOOL isCoverArticle; // @synthesize isCoverArticle=_isCoverArticle;
@property(nonatomic) long long coverArticleFeatureType; // @synthesize coverArticleFeatureType=_coverArticleFeatureType;
@property(nonatomic) unsigned long long coverArticleDisplayRank; // @synthesize coverArticleDisplayRank=_coverArticleDisplayRank;
@property(nonatomic) long long affordanceType; // @synthesize affordanceType=_affordanceType;
@property(nonatomic) BOOL originallyPresentedViaOpenURL; // @synthesize originallyPresentedViaOpenURL=_originallyPresentedViaOpenURL;
@property(nonatomic) BOOL isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(nonatomic) long long hardPaywallType; // @synthesize hardPaywallType=_hardPaywallType;
@property(nonatomic) BOOL showPlacardForSharedArticle; // @synthesize showPlacardForSharedArticle=_showPlacardForSharedArticle;
@property(nonatomic) BOOL showPlacardForFreeArticle; // @synthesize showPlacardForFreeArticle=_showPlacardForFreeArticle;
@property(nonatomic) BOOL isVideoInFeed; // @synthesize isVideoInFeed=_isVideoInFeed;
@property(retain, nonatomic) NSDate *userActionDate; // @synthesize userActionDate=_userActionDate;
@property(copy, nonatomic) NSString *userActivityType; // @synthesize userActivityType=_userActivityType;
@property(copy, nonatomic) NSString *componentID; // @synthesize componentID=_componentID;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) BOOL adSupported; // @synthesize adSupported=_adSupported;
@property(nonatomic) long long feedPickerSection; // @synthesize feedPickerSection=_feedPickerSection;
@property(copy, nonatomic) NSString *feedViewSearchText; // @synthesize feedViewSearchText=_feedViewSearchText;
@property(nonatomic) long long feedViewPresentationReason; // @synthesize feedViewPresentationReason=_feedViewPresentationReason;
@property(nonatomic) BOOL isUserSubscribedToParentFeed; // @synthesize isUserSubscribedToParentFeed=_isUserSubscribedToParentFeed;
@property(copy, nonatomic) NSString *parentFeedID; // @synthesize parentFeedID=_parentFeedID;
@property(nonatomic) long long parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(nonatomic) long long presentationReason; // @synthesize presentationReason=_presentationReason;
- (void).cxx_destruct;
- (id)ts_ArticleContext;
@property(readonly, nonatomic) BOOL openedFromWidget;
@property(readonly, nonatomic) long long optionalTopStoriesCount;
@property(readonly, nonatomic) long long mandatoryTopStoriesCount;
@property(readonly, nonatomic) long long groupFeedType;
@property(readonly, nonatomic) long long groupType;
@property(readonly, copy, nonatomic) NSString *groupFeedId;
- (BOOL)hasValidParentID;
- (void)resetCurrentAdPreviewSession;
- (void)validateMaximumNumberOfAdRequestsForCurrentAdPreview;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

