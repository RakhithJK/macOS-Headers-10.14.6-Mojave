//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBNotificationSubscribeUnsubscribe : PBCodable <NSCopying>
{
    NSString *_campaignId;
    NSString *_campaignType;
    NSString *_channelId;
    NSString *_creativeId;
    int _notificationSettingType;
    int _notificationSubscribeUnsubscribeLocation;
    int _userAction;
    BOOL _isPaidUserOfChannel;
    struct {
        unsigned int notificationSettingType:1;
        unsigned int notificationSubscribeUnsubscribeLocation:1;
        unsigned int userAction:1;
        unsigned int isPaidUserOfChannel:1;
    } _has;
}

@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(nonatomic) BOOL isPaidUserOfChannel; // @synthesize isPaidUserOfChannel=_isPaidUserOfChannel;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNotificationSettingType;
@property(nonatomic) int notificationSettingType; // @synthesize notificationSettingType=_notificationSettingType;
@property(readonly, nonatomic) BOOL hasCreativeId;
@property(readonly, nonatomic) BOOL hasCampaignType;
@property(readonly, nonatomic) BOOL hasCampaignId;
@property(nonatomic) BOOL hasIsPaidUserOfChannel;
@property(readonly, nonatomic) BOOL hasChannelId;
@property(nonatomic) BOOL hasNotificationSubscribeUnsubscribeLocation;
@property(nonatomic) int notificationSubscribeUnsubscribeLocation; // @synthesize notificationSubscribeUnsubscribeLocation=_notificationSubscribeUnsubscribeLocation;
@property(nonatomic) BOOL hasUserAction;
@property(nonatomic) int userAction; // @synthesize userAction=_userAction;

@end

