//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsTransport/NTPBFeedItem.h>

#import <NewsCore/FCClassifiable-Protocol.h>
#import <NewsCore/FCFeedTransformationItem-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;
@protocol FCChannelProviding;

@interface NTPBFeedItem (FCFeedItem) <FCClassifiable, FCFeedTransformationItem>
+ (id)feedItemWithCKFeedItemAndArticleRecord:(id)arg1 storefrontID:(id)arg2;
+ (id)cloudKitKeysWithStorefrontID:(id)arg1;
- (void)enumerateTopicCohortsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property(readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property(readonly, nonatomic) BOOL canBePurchased;
@property(readonly, nonatomic) long long publisherArticleVersion;
- (BOOL)mustShow;
- (unsigned long long)articleContentType;
@property(readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property(readonly, copy, nonatomic) NSString *publisherID;
@property(readonly, nonatomic) unsigned long long halfLife;
@property(readonly, copy, nonatomic) NSDate *publishDate;
@property(readonly, copy, nonatomic) NSString *sourceFeedID;
@property(readonly, nonatomic, getter=isANF) BOOL anf;
@property(readonly, copy, nonatomic) NSString *itemID;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, copy) NSString *description;
- (BOOL)hasFeature:(id)arg1;
- (void)enumerateFeaturesWithBlock:(CDUnknownBlockType)arg1;
- (long long)compareOrderDescending:(id)arg1;
- (long long)compareOrder:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *articleID;
@property(readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property(readonly, copy, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) unsigned long long contentType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property(readonly, copy, nonatomic) NSString *feedID;
@property(readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property(readonly, nonatomic) double globalUserFeedback;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property(readonly, nonatomic) long long minimumNewsVersion;
@property(readonly, nonatomic) unsigned long long order;
@property(readonly, nonatomic, getter=isPaid) BOOL paid;
@property(readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, copy, nonatomic) NSString *sourceChannelID;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *topicIDs;
@end
