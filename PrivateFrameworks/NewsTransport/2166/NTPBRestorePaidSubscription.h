//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>
{
    NSMutableArray *_items;
    NSMutableArray *_restoredPaidSubscriptionChannelIds;
}

+ (Class)itemsType;
+ (Class)restoredPaidSubscriptionChannelIdsType;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds; // @synthesize restoredPaidSubscriptionChannelIds=_restoredPaidSubscriptionChannelIds;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (void)addRestoredPaidSubscriptionChannelIds:(id)arg1;
- (void)clearRestoredPaidSubscriptionChannelIds;

@end

