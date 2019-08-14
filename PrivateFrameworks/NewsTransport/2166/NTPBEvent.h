//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBEventObject;

@interface NTPBEvent : PBCodable <NSCopying>
{
    long long _appConfigTreatmentId;
    long long _duration;
    long long _personalizationTreatmentId;
    long long _personalizedTreatmentId;
    long long _startTimestamp;
    NSString *_appAnalyticsEventIdentifier;
    NSString *_appAnalyticsEventPath;
    NSString *_bundleOfferId;
    NSString *_bundlePurchaseId;
    int _bundleSubscriptionStatus;
    int _cellularRadioAccessTechnology;
    int _deviceOrientation;
    NTPBEventObject *_eventObject;
    int _gestureType;
    int _interfaceOrientation;
    NSString *_notwUserId;
    int _reachabilityStatus;
    NSString *_referringSource;
    NSString *_referringType;
    NSData *_sessionId;
    NSData *_sessionIdWatch;
    NSString *_userId;
    NSMutableArray *_userPaidSubscriptionStatus;
    NSString *_userStorefrontId;
    NSData *_widgetSessionId;
    NSString *_widgetUserId;
    NSString *_windowFrameInScreen;
    BOOL _isBundlePurchaser;
    BOOL _isPaidSubscriberDuringEvent;
    BOOL _isPaidSubscriberFromAppStoreDuringEvent;
    BOOL _isPaidSubscriberFromNewsDuringEvent;
    BOOL _isPaidSubscriberFromThirdPartyDuringEvent;
    struct {
        unsigned int appConfigTreatmentId:1;
        unsigned int duration:1;
        unsigned int personalizationTreatmentId:1;
        unsigned int personalizedTreatmentId:1;
        unsigned int startTimestamp:1;
        unsigned int bundleSubscriptionStatus:1;
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int deviceOrientation:1;
        unsigned int gestureType:1;
        unsigned int interfaceOrientation:1;
        unsigned int reachabilityStatus:1;
        unsigned int isBundlePurchaser:1;
        unsigned int isPaidSubscriberDuringEvent:1;
        unsigned int isPaidSubscriberFromAppStoreDuringEvent:1;
        unsigned int isPaidSubscriberFromNewsDuringEvent:1;
        unsigned int isPaidSubscriberFromThirdPartyDuringEvent:1;
    } _has;
}

+ (Class)userPaidSubscriptionStatusType;
@property(retain, nonatomic) NSString *appAnalyticsEventPath; // @synthesize appAnalyticsEventPath=_appAnalyticsEventPath;
@property(retain, nonatomic) NSString *appAnalyticsEventIdentifier; // @synthesize appAnalyticsEventIdentifier=_appAnalyticsEventIdentifier;
@property(nonatomic) BOOL isBundlePurchaser; // @synthesize isBundlePurchaser=_isBundlePurchaser;
@property(retain, nonatomic) NSString *bundleOfferId; // @synthesize bundleOfferId=_bundleOfferId;
@property(retain, nonatomic) NSString *bundlePurchaseId; // @synthesize bundlePurchaseId=_bundlePurchaseId;
@property(retain, nonatomic) NSString *widgetUserId; // @synthesize widgetUserId=_widgetUserId;
@property(retain, nonatomic) NSMutableArray *userPaidSubscriptionStatus; // @synthesize userPaidSubscriptionStatus=_userPaidSubscriptionStatus;
@property(retain, nonatomic) NSData *widgetSessionId; // @synthesize widgetSessionId=_widgetSessionId;
@property(nonatomic) long long appConfigTreatmentId; // @synthesize appConfigTreatmentId=_appConfigTreatmentId;
@property(retain, nonatomic) NSData *sessionIdWatch; // @synthesize sessionIdWatch=_sessionIdWatch;
@property(retain, nonatomic) NSString *notwUserId; // @synthesize notwUserId=_notwUserId;
@property(nonatomic) BOOL isPaidSubscriberFromThirdPartyDuringEvent; // @synthesize isPaidSubscriberFromThirdPartyDuringEvent=_isPaidSubscriberFromThirdPartyDuringEvent;
@property(nonatomic) BOOL isPaidSubscriberFromAppStoreDuringEvent; // @synthesize isPaidSubscriberFromAppStoreDuringEvent=_isPaidSubscriberFromAppStoreDuringEvent;
@property(nonatomic) BOOL isPaidSubscriberFromNewsDuringEvent; // @synthesize isPaidSubscriberFromNewsDuringEvent=_isPaidSubscriberFromNewsDuringEvent;
@property(nonatomic) BOOL isPaidSubscriberDuringEvent; // @synthesize isPaidSubscriberDuringEvent=_isPaidSubscriberDuringEvent;
@property(nonatomic) long long personalizedTreatmentId; // @synthesize personalizedTreatmentId=_personalizedTreatmentId;
@property(nonatomic) long long personalizationTreatmentId; // @synthesize personalizationTreatmentId=_personalizationTreatmentId;
@property(retain, nonatomic) NSString *windowFrameInScreen; // @synthesize windowFrameInScreen=_windowFrameInScreen;
@property(retain, nonatomic) NSString *referringSource; // @synthesize referringSource=_referringSource;
@property(retain, nonatomic) NSString *referringType; // @synthesize referringType=_referringType;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NTPBEventObject *eventObject; // @synthesize eventObject=_eventObject;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAppAnalyticsEventPath;
@property(readonly, nonatomic) BOOL hasAppAnalyticsEventIdentifier;
@property(nonatomic) BOOL hasIsBundlePurchaser;
@property(readonly, nonatomic) BOOL hasBundleOfferId;
@property(readonly, nonatomic) BOOL hasBundlePurchaseId;
- (int)StringAsBundleSubscriptionStatus:(id)arg1;
- (id)bundleSubscriptionStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasBundleSubscriptionStatus;
@property(nonatomic) int bundleSubscriptionStatus; // @synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus;
@property(readonly, nonatomic) BOOL hasWidgetUserId;
- (id)userPaidSubscriptionStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)userPaidSubscriptionStatusCount;
- (void)addUserPaidSubscriptionStatus:(id)arg1;
- (void)clearUserPaidSubscriptionStatus;
@property(readonly, nonatomic) BOOL hasWidgetSessionId;
@property(nonatomic) BOOL hasAppConfigTreatmentId;
@property(readonly, nonatomic) BOOL hasSessionIdWatch;
@property(readonly, nonatomic) BOOL hasNotwUserId;
@property(nonatomic) BOOL hasIsPaidSubscriberFromThirdPartyDuringEvent;
@property(nonatomic) BOOL hasIsPaidSubscriberFromAppStoreDuringEvent;
@property(nonatomic) BOOL hasIsPaidSubscriberFromNewsDuringEvent;
@property(nonatomic) BOOL hasIsPaidSubscriberDuringEvent;
@property(nonatomic) BOOL hasPersonalizedTreatmentId;
@property(nonatomic) BOOL hasPersonalizationTreatmentId;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
@property(nonatomic) BOOL hasCellularRadioAccessTechnology;
@property(nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
- (int)StringAsReachabilityStatus:(id)arg1;
- (id)reachabilityStatusAsString:(int)arg1;
@property(nonatomic) BOOL hasReachabilityStatus;
@property(nonatomic) int reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property(nonatomic) BOOL hasInterfaceOrientation;
@property(nonatomic) int interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) BOOL hasGestureType;
@property(nonatomic) int gestureType; // @synthesize gestureType=_gestureType;
@property(readonly, nonatomic) BOOL hasWindowFrameInScreen;
@property(readonly, nonatomic) BOOL hasReferringSource;
@property(readonly, nonatomic) BOOL hasReferringType;
@property(nonatomic) BOOL hasDeviceOrientation;
@property(nonatomic) int deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(nonatomic) BOOL hasDuration;
@property(nonatomic) BOOL hasStartTimestamp;
@property(readonly, nonatomic) BOOL hasUserStorefrontId;
@property(readonly, nonatomic) BOOL hasUserId;
@property(readonly, nonatomic) BOOL hasSessionId;
@property(readonly, nonatomic) BOOL hasEventObject;

@end

