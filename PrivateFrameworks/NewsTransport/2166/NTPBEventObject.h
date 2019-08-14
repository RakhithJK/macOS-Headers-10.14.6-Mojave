//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NTPBAdCtaEngagement, NTPBAdEngagement, NTPBAdExposureIneligible, NTPBAdExposureOpportunity, NTPBAdImpression, NTPBAlreadySubscriberSignIn, NTPBAnfComponentExposure, NTPBAppSessionEnd, NTPBAppSessionEndWatch, NTPBAppSessionResign, NTPBAppSessionResume, NTPBAppSessionStart, NTPBAppSessionStartWatch, NTPBAppleIdSignInResult, NTPBArticleEngagement, NTPBArticleHostViewExposure, NTPBArticleLikeDislike, NTPBArticleScroll, NTPBArticleScrollNotw, NTPBArticleSessionResign, NTPBArticleSessionResume, NTPBArticleViewNotw, NTPBArticleViewWatch, NTPBBackgroundSubscriptionValidation, NTPBBundleIdMappingMiss, NTPBBundleSubscriberInfo, NTPBChannelMuteUnmute, NTPBComscoreEventSend, NTPBCoverArticleWidgetExposure, NTPBCoverArticleWidgetView, NTPBDiscoverMoreInterstitialExposure, NTPBEmailOptInInvite, NTPBEndOfArticleExposure, NTPBExternalAnalyticsEventSend, NTPBFeedCellExposure, NTPBFeedCellHostViewExposure, NTPBFeedEngagementMenuExposure, NTPBFeedSubscribeUnsubscribe, NTPBFeedViewExposure, NTPBGroupViewExposure, NTPBInAppWebEmbedExposure, NTPBIssueDownload, NTPBIssueExposure, NTPBIssueTocView, NTPBLinkTap, NTPBLinkTapArticle, NTPBLocalNotificationReceived, NTPBLocalNotificationReturn, NTPBMediaEngage, NTPBMediaEngageComplete, NTPBMediaExposure, NTPBMediaView, NTPBNoUserAction, NTPBNotificationSettingsScreenView, NTPBNotificationSubscribeUnsubscribe, NTPBOptInButtonExposure, NTPBPDFPageView, NTPBPaidSubscriptionConversionPointExposure, NTPBPaidSubscriptionResult, NTPBPaidSubscriptionSheetIapFail, NTPBPaidSubscriptionSheetView, NTPBPaywallButtonTap, NTPBPullToRefresh, NTPBReadingListAddRemove, NTPBReadingListShow, NTPBRecommendationBrickExposure, NTPBReportConcernSubmission, NTPBRestorePaidSubscription, NTPBSearchBegin, NTPBSearchExecute, NTPBSearchResultSelect, NTPBSearchViewExposure, NTPBShareInformationScreenView, NTPBShareResult, NTPBShareSheetExposure, NTPBShareSheetIapFail, NTPBSubscriptionDetectionScreenView, NTPBSuggestionsFeedback, NTPBTocCardDrag, NTPBTocCellExposure, NTPBTocExposure, NTPBTocHandleTap, NTPBTocReorder, NTPBTocToggleTap, NTPBTodayWidgetExposure, NTPBTodayWidgetHeadlineExposure, NTPBTodayWidgetSession, NTPBTopOfFeedModuleExposure, NTPBUrlMappingMiss, NTPBUserIgnoreFavoritesSuggestion, NTPBUserOnboardingBegin, NTPBUserOnboardingChannelPickerComplete, NTPBUserOnboardingResult, NTPBUserOnboardingResume, NTPBUserOnboardingScreenView, NTPBWebAccessScreenView, NTPBWidgetEngagement;

@interface NTPBEventObject : PBCodable <NSCopying>
{
    NTPBAdCtaEngagement *_adCtaEngagement;
    NTPBAdEngagement *_adEngagement;
    NTPBAdExposureIneligible *_adExposureIneligible;
    NTPBAdExposureOpportunity *_adExposureOpportunity;
    NTPBAdImpression *_adImpression;
    NTPBAlreadySubscriberSignIn *_alreadySubscriberSignIn;
    NTPBAnfComponentExposure *_anfComponentExposure;
    NTPBAppSessionEnd *_appSessionEnd;
    NTPBAppSessionEndWatch *_appSessionEndWatch;
    NTPBAppSessionResign *_appSessionResign;
    NTPBAppSessionResume *_appSessionResume;
    NTPBAppSessionStart *_appSessionStart;
    NTPBAppSessionStartWatch *_appSessionStartWatch;
    NTPBAppleIdSignInResult *_appleidSignInResult;
    NTPBArticleEngagement *_articleEngagement;
    NTPBArticleHostViewExposure *_articleHostViewExposure;
    NTPBArticleLikeDislike *_articleLikeDislike;
    NTPBArticleScroll *_articleScroll;
    NTPBArticleScrollNotw *_articleScrollNotw;
    NTPBArticleSessionResign *_articleSessionResign;
    NTPBArticleSessionResume *_articleSessionResume;
    NTPBArticleViewNotw *_articleViewNotw;
    NTPBArticleViewWatch *_articleViewWatch;
    NTPBBackgroundSubscriptionValidation *_backgroundSubscriptionValidation;
    NTPBBundleIdMappingMiss *_bundleIdMappingMiss;
    NTPBBundleSubscriberInfo *_bundleSubscriberInfo;
    NTPBChannelMuteUnmute *_channelMuteUnmute;
    NTPBComscoreEventSend *_comscoreEventSend;
    NTPBCoverArticleWidgetExposure *_coverArticleWidgetExposure;
    NTPBCoverArticleWidgetView *_coverArticleWidgetView;
    NTPBDiscoverMoreInterstitialExposure *_discoverMoreInterstitialExposure;
    NTPBEmailOptInInvite *_emailOptInInvite;
    NTPBEndOfArticleExposure *_endOfArticleExposure;
    NTPBExternalAnalyticsEventSend *_externalAnalyticsEventSend;
    NTPBFeedCellExposure *_feedCellExposure;
    NTPBFeedCellHostViewExposure *_feedCellHostViewExposure;
    NTPBFeedEngagementMenuExposure *_feedEngagementMenuExposure;
    NTPBFeedSubscribeUnsubscribe *_feedSubscribeUnsubscribe;
    NTPBFeedViewExposure *_feedViewExposure;
    NTPBGroupViewExposure *_groupViewExposure;
    NTPBInAppWebEmbedExposure *_inAppWebEmbedExposure;
    NTPBIssueDownload *_issueDownload;
    NTPBIssueExposure *_issueExposure;
    NTPBIssueTocView *_issueTocView;
    NTPBLinkTap *_linkTap;
    NTPBLinkTapArticle *_linkTapArticle;
    NTPBLocalNotificationReceived *_localNotificationReceived;
    NTPBLocalNotificationReturn *_localNotificationReturn;
    NTPBMediaEngage *_mediaEngage;
    NTPBMediaEngageComplete *_mediaEngageComplete;
    NTPBMediaExposure *_mediaExposure;
    NTPBMediaView *_mediaView;
    NTPBNoUserAction *_noUserAction;
    NTPBNotificationSettingsScreenView *_notificationSettingsScreenView;
    NTPBNotificationSubscribeUnsubscribe *_notificationSubscribeUnsubscribe;
    NTPBOptInButtonExposure *_optInButtonExposure;
    NTPBPaidSubscriptionConversionPointExposure *_paidSubscriptionConversionPointExposure;
    NTPBPaidSubscriptionResult *_paidSubscriptionResult;
    NTPBPaidSubscriptionSheetIapFail *_paidSubscriptionSheetIapFail;
    NTPBPaidSubscriptionSheetView *_paidSubscriptionSheetView;
    NTPBPaywallButtonTap *_paywallButtonTap;
    NTPBPDFPageView *_pdfPageView;
    NTPBPullToRefresh *_pullToRefresh;
    NTPBReadingListAddRemove *_readingListAddRemove;
    NTPBReadingListShow *_readingListShow;
    NTPBRecommendationBrickExposure *_recommendationBrickExposure;
    NTPBReportConcernSubmission *_reportConcernSubmission;
    NTPBRestorePaidSubscription *_restorePaidSubscription;
    NTPBSearchBegin *_searchBegin;
    NTPBSearchExecute *_searchExecute;
    NTPBSearchResultSelect *_searchResultSelect;
    NTPBSearchViewExposure *_searchViewExposure;
    NTPBShareInformationScreenView *_shareInformationScreenView;
    NTPBShareResult *_shareResult;
    NTPBShareSheetExposure *_shareSheetExposure;
    NTPBShareSheetIapFail *_shareSheetIapFail;
    NTPBSubscriptionDetectionScreenView *_subscriptionDetectionScreenView;
    NTPBSuggestionsFeedback *_suggestionsFeedback;
    NTPBTocCardDrag *_tocCardDrag;
    NTPBTocCellExposure *_tocCellExposure;
    NTPBTocExposure *_tocExposure;
    NTPBTocHandleTap *_tocHandleTap;
    NTPBTocReorder *_tocReorder;
    NTPBTocToggleTap *_tocToggleTap;
    NTPBTodayWidgetExposure *_todayWidgetExposure;
    NTPBTodayWidgetHeadlineExposure *_todayWidgetHeadlineExposure;
    NTPBTodayWidgetSession *_todayWidgetSession;
    NTPBTopOfFeedModuleExposure *_topOfFeedModuleExposure;
    NTPBUrlMappingMiss *_urlMappingMiss;
    NTPBUserIgnoreFavoritesSuggestion *_userIgnoreFavoritesSuggestion;
    NTPBUserOnboardingBegin *_userOnboardingBegin;
    NTPBUserOnboardingChannelPickerComplete *_userOnboardingChannelPickerComplete;
    NTPBUserOnboardingResult *_userOnboardingResult;
    NTPBUserOnboardingResume *_userOnboardingResume;
    NTPBUserOnboardingScreenView *_userOnboardingScreenView;
    NTPBWebAccessScreenView *_webAccessScreenView;
    NTPBWidgetEngagement *_widgetEngagement;
}

@property(retain, nonatomic) NTPBAppleIdSignInResult *appleidSignInResult; // @synthesize appleidSignInResult=_appleidSignInResult;
@property(retain, nonatomic) NTPBIssueExposure *issueExposure; // @synthesize issueExposure=_issueExposure;
@property(retain, nonatomic) NTPBIssueTocView *issueTocView; // @synthesize issueTocView=_issueTocView;
@property(retain, nonatomic) NTPBPDFPageView *pdfPageView; // @synthesize pdfPageView=_pdfPageView;
@property(retain, nonatomic) NTPBPaywallButtonTap *paywallButtonTap; // @synthesize paywallButtonTap=_paywallButtonTap;
@property(retain, nonatomic) NTPBIssueDownload *issueDownload; // @synthesize issueDownload=_issueDownload;
@property(retain, nonatomic) NTPBBundleSubscriberInfo *bundleSubscriberInfo; // @synthesize bundleSubscriberInfo=_bundleSubscriberInfo;
@property(retain, nonatomic) NTPBArticleSessionResume *articleSessionResume; // @synthesize articleSessionResume=_articleSessionResume;
@property(retain, nonatomic) NTPBArticleSessionResign *articleSessionResign; // @synthesize articleSessionResign=_articleSessionResign;
@property(retain, nonatomic) NTPBAppSessionResume *appSessionResume; // @synthesize appSessionResume=_appSessionResume;
@property(retain, nonatomic) NTPBAppSessionResign *appSessionResign; // @synthesize appSessionResign=_appSessionResign;
@property(retain, nonatomic) NTPBTocCellExposure *tocCellExposure; // @synthesize tocCellExposure=_tocCellExposure;
@property(retain, nonatomic) NTPBTocToggleTap *tocToggleTap; // @synthesize tocToggleTap=_tocToggleTap;
@property(retain, nonatomic) NTPBTocCardDrag *tocCardDrag; // @synthesize tocCardDrag=_tocCardDrag;
@property(retain, nonatomic) NTPBTocHandleTap *tocHandleTap; // @synthesize tocHandleTap=_tocHandleTap;
@property(retain, nonatomic) NTPBTocReorder *tocReorder; // @synthesize tocReorder=_tocReorder;
@property(retain, nonatomic) NTPBTocExposure *tocExposure; // @synthesize tocExposure=_tocExposure;
@property(retain, nonatomic) NTPBInAppWebEmbedExposure *inAppWebEmbedExposure; // @synthesize inAppWebEmbedExposure=_inAppWebEmbedExposure;
@property(retain, nonatomic) NTPBTopOfFeedModuleExposure *topOfFeedModuleExposure; // @synthesize topOfFeedModuleExposure=_topOfFeedModuleExposure;
@property(retain, nonatomic) NTPBLinkTap *linkTap; // @synthesize linkTap=_linkTap;
@property(retain, nonatomic) NTPBAdCtaEngagement *adCtaEngagement; // @synthesize adCtaEngagement=_adCtaEngagement;
@property(retain, nonatomic) NTPBAdEngagement *adEngagement; // @synthesize adEngagement=_adEngagement;
@property(retain, nonatomic) NTPBAdImpression *adImpression; // @synthesize adImpression=_adImpression;
@property(retain, nonatomic) NTPBArticleEngagement *articleEngagement; // @synthesize articleEngagement=_articleEngagement;
@property(retain, nonatomic) NTPBUserIgnoreFavoritesSuggestion *userIgnoreFavoritesSuggestion; // @synthesize userIgnoreFavoritesSuggestion=_userIgnoreFavoritesSuggestion;
@property(retain, nonatomic) NTPBSuggestionsFeedback *suggestionsFeedback; // @synthesize suggestionsFeedback=_suggestionsFeedback;
@property(retain, nonatomic) NTPBOptInButtonExposure *optInButtonExposure; // @synthesize optInButtonExposure=_optInButtonExposure;
@property(retain, nonatomic) NTPBAdExposureIneligible *adExposureIneligible; // @synthesize adExposureIneligible=_adExposureIneligible;
@property(retain, nonatomic) NTPBTodayWidgetExposure *todayWidgetExposure; // @synthesize todayWidgetExposure=_todayWidgetExposure;
@property(retain, nonatomic) NTPBTodayWidgetHeadlineExposure *todayWidgetHeadlineExposure; // @synthesize todayWidgetHeadlineExposure=_todayWidgetHeadlineExposure;
@property(retain, nonatomic) NTPBWidgetEngagement *widgetEngagement; // @synthesize widgetEngagement=_widgetEngagement;
@property(retain, nonatomic) NTPBTodayWidgetSession *todayWidgetSession; // @synthesize todayWidgetSession=_todayWidgetSession;
@property(retain, nonatomic) NTPBAnfComponentExposure *anfComponentExposure; // @synthesize anfComponentExposure=_anfComponentExposure;
@property(retain, nonatomic) NTPBAppSessionEndWatch *appSessionEndWatch; // @synthesize appSessionEndWatch=_appSessionEndWatch;
@property(retain, nonatomic) NTPBArticleViewWatch *articleViewWatch; // @synthesize articleViewWatch=_articleViewWatch;
@property(retain, nonatomic) NTPBAppSessionStartWatch *appSessionStartWatch; // @synthesize appSessionStartWatch=_appSessionStartWatch;
@property(retain, nonatomic) NTPBExternalAnalyticsEventSend *externalAnalyticsEventSend; // @synthesize externalAnalyticsEventSend=_externalAnalyticsEventSend;
@property(retain, nonatomic) NTPBBundleIdMappingMiss *bundleIdMappingMiss; // @synthesize bundleIdMappingMiss=_bundleIdMappingMiss;
@property(retain, nonatomic) NTPBUrlMappingMiss *urlMappingMiss; // @synthesize urlMappingMiss=_urlMappingMiss;
@property(retain, nonatomic) NTPBArticleScrollNotw *articleScrollNotw; // @synthesize articleScrollNotw=_articleScrollNotw;
@property(retain, nonatomic) NTPBArticleViewNotw *articleViewNotw; // @synthesize articleViewNotw=_articleViewNotw;
@property(retain, nonatomic) NTPBDiscoverMoreInterstitialExposure *discoverMoreInterstitialExposure; // @synthesize discoverMoreInterstitialExposure=_discoverMoreInterstitialExposure;
@property(retain, nonatomic) NTPBComscoreEventSend *comscoreEventSend; // @synthesize comscoreEventSend=_comscoreEventSend;
@property(retain, nonatomic) NTPBPaidSubscriptionSheetIapFail *paidSubscriptionSheetIapFail; // @synthesize paidSubscriptionSheetIapFail=_paidSubscriptionSheetIapFail;
@property(retain, nonatomic) NTPBRestorePaidSubscription *restorePaidSubscription; // @synthesize restorePaidSubscription=_restorePaidSubscription;
@property(retain, nonatomic) NTPBCoverArticleWidgetExposure *coverArticleWidgetExposure; // @synthesize coverArticleWidgetExposure=_coverArticleWidgetExposure;
@property(retain, nonatomic) NTPBEmailOptInInvite *emailOptInInvite; // @synthesize emailOptInInvite=_emailOptInInvite;
@property(retain, nonatomic) NTPBNotificationSettingsScreenView *notificationSettingsScreenView; // @synthesize notificationSettingsScreenView=_notificationSettingsScreenView;
@property(retain, nonatomic) NTPBNotificationSubscribeUnsubscribe *notificationSubscribeUnsubscribe; // @synthesize notificationSubscribeUnsubscribe=_notificationSubscribeUnsubscribe;
@property(retain, nonatomic) NTPBCoverArticleWidgetView *coverArticleWidgetView; // @synthesize coverArticleWidgetView=_coverArticleWidgetView;
@property(retain, nonatomic) NTPBSubscriptionDetectionScreenView *subscriptionDetectionScreenView; // @synthesize subscriptionDetectionScreenView=_subscriptionDetectionScreenView;
@property(retain, nonatomic) NTPBBackgroundSubscriptionValidation *backgroundSubscriptionValidation; // @synthesize backgroundSubscriptionValidation=_backgroundSubscriptionValidation;
@property(retain, nonatomic) NTPBAlreadySubscriberSignIn *alreadySubscriberSignIn; // @synthesize alreadySubscriberSignIn=_alreadySubscriberSignIn;
@property(retain, nonatomic) NTPBWebAccessScreenView *webAccessScreenView; // @synthesize webAccessScreenView=_webAccessScreenView;
@property(retain, nonatomic) NTPBShareInformationScreenView *shareInformationScreenView; // @synthesize shareInformationScreenView=_shareInformationScreenView;
@property(retain, nonatomic) NTPBPaidSubscriptionResult *paidSubscriptionResult; // @synthesize paidSubscriptionResult=_paidSubscriptionResult;
@property(retain, nonatomic) NTPBShareSheetIapFail *shareSheetIapFail; // @synthesize shareSheetIapFail=_shareSheetIapFail;
@property(retain, nonatomic) NTPBPaidSubscriptionSheetView *paidSubscriptionSheetView; // @synthesize paidSubscriptionSheetView=_paidSubscriptionSheetView;
@property(retain, nonatomic) NTPBPaidSubscriptionConversionPointExposure *paidSubscriptionConversionPointExposure; // @synthesize paidSubscriptionConversionPointExposure=_paidSubscriptionConversionPointExposure;
@property(retain, nonatomic) NTPBGroupViewExposure *groupViewExposure; // @synthesize groupViewExposure=_groupViewExposure;
@property(retain, nonatomic) NTPBSearchViewExposure *searchViewExposure; // @synthesize searchViewExposure=_searchViewExposure;
@property(retain, nonatomic) NTPBFeedEngagementMenuExposure *feedEngagementMenuExposure; // @synthesize feedEngagementMenuExposure=_feedEngagementMenuExposure;
@property(retain, nonatomic) NTPBShareSheetExposure *shareSheetExposure; // @synthesize shareSheetExposure=_shareSheetExposure;
@property(retain, nonatomic) NTPBChannelMuteUnmute *channelMuteUnmute; // @synthesize channelMuteUnmute=_channelMuteUnmute;
@property(retain, nonatomic) NTPBAdExposureOpportunity *adExposureOpportunity; // @synthesize adExposureOpportunity=_adExposureOpportunity;
@property(retain, nonatomic) NTPBUserOnboardingChannelPickerComplete *userOnboardingChannelPickerComplete; // @synthesize userOnboardingChannelPickerComplete=_userOnboardingChannelPickerComplete;
@property(retain, nonatomic) NTPBUserOnboardingScreenView *userOnboardingScreenView; // @synthesize userOnboardingScreenView=_userOnboardingScreenView;
@property(retain, nonatomic) NTPBLocalNotificationReceived *localNotificationReceived; // @synthesize localNotificationReceived=_localNotificationReceived;
@property(retain, nonatomic) NTPBLinkTapArticle *linkTapArticle; // @synthesize linkTapArticle=_linkTapArticle;
@property(retain, nonatomic) NTPBPullToRefresh *pullToRefresh; // @synthesize pullToRefresh=_pullToRefresh;
@property(retain, nonatomic) NTPBLocalNotificationReturn *localNotificationReturn; // @synthesize localNotificationReturn=_localNotificationReturn;
@property(retain, nonatomic) NTPBReportConcernSubmission *reportConcernSubmission; // @synthesize reportConcernSubmission=_reportConcernSubmission;
@property(retain, nonatomic) NTPBEndOfArticleExposure *endOfArticleExposure; // @synthesize endOfArticleExposure=_endOfArticleExposure;
@property(retain, nonatomic) NTPBRecommendationBrickExposure *recommendationBrickExposure; // @synthesize recommendationBrickExposure=_recommendationBrickExposure;
@property(retain, nonatomic) NTPBReadingListShow *readingListShow; // @synthesize readingListShow=_readingListShow;
@property(retain, nonatomic) NTPBReadingListAddRemove *readingListAddRemove; // @synthesize readingListAddRemove=_readingListAddRemove;
@property(retain, nonatomic) NTPBNoUserAction *noUserAction; // @synthesize noUserAction=_noUserAction;
@property(retain, nonatomic) NTPBShareResult *shareResult; // @synthesize shareResult=_shareResult;
@property(retain, nonatomic) NTPBSearchResultSelect *searchResultSelect; // @synthesize searchResultSelect=_searchResultSelect;
@property(retain, nonatomic) NTPBSearchExecute *searchExecute; // @synthesize searchExecute=_searchExecute;
@property(retain, nonatomic) NTPBSearchBegin *searchBegin; // @synthesize searchBegin=_searchBegin;
@property(retain, nonatomic) NTPBMediaEngageComplete *mediaEngageComplete; // @synthesize mediaEngageComplete=_mediaEngageComplete;
@property(retain, nonatomic) NTPBMediaEngage *mediaEngage; // @synthesize mediaEngage=_mediaEngage;
@property(retain, nonatomic) NTPBMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) NTPBMediaExposure *mediaExposure; // @synthesize mediaExposure=_mediaExposure;
@property(retain, nonatomic) NTPBFeedSubscribeUnsubscribe *feedSubscribeUnsubscribe; // @synthesize feedSubscribeUnsubscribe=_feedSubscribeUnsubscribe;
@property(retain, nonatomic) NTPBFeedCellHostViewExposure *feedCellHostViewExposure; // @synthesize feedCellHostViewExposure=_feedCellHostViewExposure;
@property(retain, nonatomic) NTPBFeedViewExposure *feedViewExposure; // @synthesize feedViewExposure=_feedViewExposure;
@property(retain, nonatomic) NTPBFeedCellExposure *feedCellExposure; // @synthesize feedCellExposure=_feedCellExposure;
@property(retain, nonatomic) NTPBArticleLikeDislike *articleLikeDislike; // @synthesize articleLikeDislike=_articleLikeDislike;
@property(retain, nonatomic) NTPBArticleHostViewExposure *articleHostViewExposure; // @synthesize articleHostViewExposure=_articleHostViewExposure;
@property(retain, nonatomic) NTPBArticleScroll *articleScroll; // @synthesize articleScroll=_articleScroll;
@property(retain, nonatomic) NTPBAppSessionEnd *appSessionEnd; // @synthesize appSessionEnd=_appSessionEnd;
@property(retain, nonatomic) NTPBAppSessionStart *appSessionStart; // @synthesize appSessionStart=_appSessionStart;
@property(retain, nonatomic) NTPBUserOnboardingResult *userOnboardingResult; // @synthesize userOnboardingResult=_userOnboardingResult;
@property(retain, nonatomic) NTPBUserOnboardingResume *userOnboardingResume; // @synthesize userOnboardingResume=_userOnboardingResume;
@property(retain, nonatomic) NTPBUserOnboardingBegin *userOnboardingBegin; // @synthesize userOnboardingBegin=_userOnboardingBegin;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAppleidSignInResult;
@property(readonly, nonatomic) BOOL hasIssueExposure;
@property(readonly, nonatomic) BOOL hasIssueTocView;
@property(readonly, nonatomic) BOOL hasPdfPageView;
@property(readonly, nonatomic) BOOL hasPaywallButtonTap;
@property(readonly, nonatomic) BOOL hasIssueDownload;
@property(readonly, nonatomic) BOOL hasBundleSubscriberInfo;
@property(readonly, nonatomic) BOOL hasArticleSessionResume;
@property(readonly, nonatomic) BOOL hasArticleSessionResign;
@property(readonly, nonatomic) BOOL hasAppSessionResume;
@property(readonly, nonatomic) BOOL hasAppSessionResign;
@property(readonly, nonatomic) BOOL hasTocCellExposure;
@property(readonly, nonatomic) BOOL hasTocToggleTap;
@property(readonly, nonatomic) BOOL hasTocCardDrag;
@property(readonly, nonatomic) BOOL hasTocHandleTap;
@property(readonly, nonatomic) BOOL hasTocReorder;
@property(readonly, nonatomic) BOOL hasTocExposure;
@property(readonly, nonatomic) BOOL hasInAppWebEmbedExposure;
@property(readonly, nonatomic) BOOL hasTopOfFeedModuleExposure;
@property(readonly, nonatomic) BOOL hasLinkTap;
@property(readonly, nonatomic) BOOL hasAdCtaEngagement;
@property(readonly, nonatomic) BOOL hasAdEngagement;
@property(readonly, nonatomic) BOOL hasAdImpression;
@property(readonly, nonatomic) BOOL hasArticleEngagement;
@property(readonly, nonatomic) BOOL hasUserIgnoreFavoritesSuggestion;
@property(readonly, nonatomic) BOOL hasSuggestionsFeedback;
@property(readonly, nonatomic) BOOL hasOptInButtonExposure;
@property(readonly, nonatomic) BOOL hasAdExposureIneligible;
@property(readonly, nonatomic) BOOL hasTodayWidgetExposure;
@property(readonly, nonatomic) BOOL hasTodayWidgetHeadlineExposure;
@property(readonly, nonatomic) BOOL hasWidgetEngagement;
@property(readonly, nonatomic) BOOL hasTodayWidgetSession;
@property(readonly, nonatomic) BOOL hasAnfComponentExposure;
@property(readonly, nonatomic) BOOL hasAppSessionEndWatch;
@property(readonly, nonatomic) BOOL hasArticleViewWatch;
@property(readonly, nonatomic) BOOL hasAppSessionStartWatch;
@property(readonly, nonatomic) BOOL hasExternalAnalyticsEventSend;
@property(readonly, nonatomic) BOOL hasBundleIdMappingMiss;
@property(readonly, nonatomic) BOOL hasUrlMappingMiss;
@property(readonly, nonatomic) BOOL hasArticleScrollNotw;
@property(readonly, nonatomic) BOOL hasArticleViewNotw;
@property(readonly, nonatomic) BOOL hasDiscoverMoreInterstitialExposure;
@property(readonly, nonatomic) BOOL hasComscoreEventSend;
@property(readonly, nonatomic) BOOL hasPaidSubscriptionSheetIapFail;
@property(readonly, nonatomic) BOOL hasRestorePaidSubscription;
@property(readonly, nonatomic) BOOL hasCoverArticleWidgetExposure;
@property(readonly, nonatomic) BOOL hasEmailOptInInvite;
@property(readonly, nonatomic) BOOL hasNotificationSettingsScreenView;
@property(readonly, nonatomic) BOOL hasNotificationSubscribeUnsubscribe;
@property(readonly, nonatomic) BOOL hasCoverArticleWidgetView;
@property(readonly, nonatomic) BOOL hasSubscriptionDetectionScreenView;
@property(readonly, nonatomic) BOOL hasBackgroundSubscriptionValidation;
@property(readonly, nonatomic) BOOL hasAlreadySubscriberSignIn;
@property(readonly, nonatomic) BOOL hasWebAccessScreenView;
@property(readonly, nonatomic) BOOL hasShareInformationScreenView;
@property(readonly, nonatomic) BOOL hasPaidSubscriptionResult;
@property(readonly, nonatomic) BOOL hasShareSheetIapFail;
@property(readonly, nonatomic) BOOL hasPaidSubscriptionSheetView;
@property(readonly, nonatomic) BOOL hasPaidSubscriptionConversionPointExposure;
@property(readonly, nonatomic) BOOL hasGroupViewExposure;
@property(readonly, nonatomic) BOOL hasSearchViewExposure;
@property(readonly, nonatomic) BOOL hasFeedEngagementMenuExposure;
@property(readonly, nonatomic) BOOL hasShareSheetExposure;
@property(readonly, nonatomic) BOOL hasChannelMuteUnmute;
@property(readonly, nonatomic) BOOL hasAdExposureOpportunity;
@property(readonly, nonatomic) BOOL hasUserOnboardingChannelPickerComplete;
@property(readonly, nonatomic) BOOL hasUserOnboardingScreenView;
@property(readonly, nonatomic) BOOL hasLocalNotificationReceived;
@property(readonly, nonatomic) BOOL hasLinkTapArticle;
@property(readonly, nonatomic) BOOL hasPullToRefresh;
@property(readonly, nonatomic) BOOL hasLocalNotificationReturn;
@property(readonly, nonatomic) BOOL hasReportConcernSubmission;
@property(readonly, nonatomic) BOOL hasEndOfArticleExposure;
@property(readonly, nonatomic) BOOL hasRecommendationBrickExposure;
@property(readonly, nonatomic) BOOL hasReadingListShow;
@property(readonly, nonatomic) BOOL hasReadingListAddRemove;
@property(readonly, nonatomic) BOOL hasNoUserAction;
@property(readonly, nonatomic) BOOL hasShareResult;
@property(readonly, nonatomic) BOOL hasSearchResultSelect;
@property(readonly, nonatomic) BOOL hasSearchExecute;
@property(readonly, nonatomic) BOOL hasSearchBegin;
@property(readonly, nonatomic) BOOL hasMediaEngageComplete;
@property(readonly, nonatomic) BOOL hasMediaEngage;
@property(readonly, nonatomic) BOOL hasMediaView;
@property(readonly, nonatomic) BOOL hasMediaExposure;
@property(readonly, nonatomic) BOOL hasFeedSubscribeUnsubscribe;
@property(readonly, nonatomic) BOOL hasFeedCellHostViewExposure;
@property(readonly, nonatomic) BOOL hasFeedViewExposure;
@property(readonly, nonatomic) BOOL hasFeedCellExposure;
@property(readonly, nonatomic) BOOL hasArticleLikeDislike;
@property(readonly, nonatomic) BOOL hasArticleHostViewExposure;
@property(readonly, nonatomic) BOOL hasArticleScroll;
@property(readonly, nonatomic) BOOL hasAppSessionEnd;
@property(readonly, nonatomic) BOOL hasAppSessionStart;
@property(readonly, nonatomic) BOOL hasUserOnboardingResult;
@property(readonly, nonatomic) BOOL hasUserOnboardingResume;
@property(readonly, nonatomic) BOOL hasUserOnboardingBegin;

@end

