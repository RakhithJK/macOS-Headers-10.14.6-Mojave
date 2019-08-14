//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBTranslationMap : PBCodable <NSCopying>
{
    NSMutableArray *_favoritesLanguageBuckets;
    NSMutableArray *_topicLanguageBuckets;
}

+ (Class)favoritesLanguageBucketsType;
+ (Class)topicLanguageBucketsType;
@property(retain, nonatomic) NSMutableArray *favoritesLanguageBuckets; // @synthesize favoritesLanguageBuckets=_favoritesLanguageBuckets;
@property(retain, nonatomic) NSMutableArray *topicLanguageBuckets; // @synthesize topicLanguageBuckets=_topicLanguageBuckets;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)favoritesLanguageBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)favoritesLanguageBucketsCount;
- (void)addFavoritesLanguageBuckets:(id)arg1;
- (void)clearFavoritesLanguageBuckets;
- (id)topicLanguageBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicLanguageBucketsCount;
- (void)addTopicLanguageBuckets:(id)arg1;
- (void)clearTopicLanguageBuckets;

@end

