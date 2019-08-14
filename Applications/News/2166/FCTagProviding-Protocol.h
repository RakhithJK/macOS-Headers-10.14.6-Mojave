//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NFCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class FCAssetHandle, FCColor, FCPurchaseOfferableConfiguration, NSArray, NSData, NSDate, NSString, NSURL, NTPBPublisherPaidDescriptionStrings;
@protocol FCChannelProviding, FCFeedTheming, FCSectionProviding, FCTagProviding, FCTopicProviding;

@protocol FCTagProviding <NSObject, NFCopying>
@property(readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property(readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property(readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property(readonly, nonatomic) BOOL isArticleReadCountReportingEnabled;
@property(readonly, nonatomic) BOOL isRealTimeTrackingEnabled;
@property(readonly, nonatomic) BOOL isHidden;
@property(readonly, nonatomic) unsigned long long groupingEligibility;
@property(readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property(readonly, nonatomic) BOOL isBlockedExplicitContent;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property(readonly, nonatomic) BOOL publisherPaidWebAccessOptIn;
@property(readonly, nonatomic) BOOL publisherPaidLeakyPaywallOptOut;
@property(readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property(readonly, nonatomic) NSArray *publisherPaidBundlePurchaseIDs;
@property(readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property(readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property(readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property(readonly, copy, nonatomic) NSString *magazineGenre;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) BOOL isNotificationEnabled;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) long long score;
@property(readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property(readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property(readonly, nonatomic) NSArray *iAdKeywords;
@property(readonly, nonatomic) NSArray *iAdCategories;
@property(readonly, copy, nonatomic) FCColor *groupTitleColor;
@property(readonly, copy, nonatomic) id <FCFeedTheming> theme;
@property(readonly, copy, nonatomic) NSString *coverArticleListID;
@property(readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property(readonly, nonatomic) BOOL isSubscribable;
@property(readonly, copy, nonatomic) NSString *primaryAudience;
@property(readonly, copy, nonatomic) NSString *replacementID;
@property(readonly, nonatomic) BOOL isExplicitContent;
@property(readonly, nonatomic) BOOL isDeprecated;
@property(readonly, nonatomic) BOOL isPublic;
@property(readonly, nonatomic) long long contentProvider;
@property(readonly, copy, nonatomic) NSString *language;
@property(readonly, copy, nonatomic) NSString *versionKey;
@property(readonly, copy, nonatomic) NSString *nameCompact;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSDate *loadDate;
@property(readonly, nonatomic) id <FCTopicProviding> asTopic;
@property(readonly, nonatomic) id <FCSectionProviding> asSection;
@property(readonly, nonatomic) id <FCChannelProviding> asChannel;
@property(readonly, nonatomic) BOOL hideAccessoryText;
@property(readonly, nonatomic) unsigned long long tagType;
- (void)ppt_overrideFeedID:(NSString *)arg1;
- (NSURL *)authorizationURL;
- (NSString *)feedIDForBin:(long long)arg1;
- (NSString *)paidFeedIDForBin:(long long)arg1;
- (NSString *)freeFeedIDForBin:(long long)arg1;
- (FCPurchaseOfferableConfiguration *)prefetchPurchaseOffer;
- (BOOL)isAuthenticationSetup;
- (BOOL)isPurchaseSetup;
- (BOOL)isEqualToTag:(id <FCTagProviding>)arg1;
- (BOOL)isNoLongerAvailable;

@optional
@property(readonly, nonatomic) NSData *backingTagRecordData;
@end

