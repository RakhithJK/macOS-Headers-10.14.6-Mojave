//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@interface NFLAdTileInfo : NSObject <NFLFeedTileInfo>
{
    BOOL _isDisplayingAd;
    BOOL _isOnScreen;
    BOOL _appearedOnScreen;
    BOOL _appearedWithAd;
    NSString *_groupIdentifier;
    long long _adType;
    NSString *_adUnitIdentifier;
}

+ (id)identifierForAdType:(long long)arg1;
+ (long long)adTypeForIdentifier:(id)arg1;
+ (id)identifierPrefix;
@property(nonatomic) BOOL appearedWithAd; // @synthesize appearedWithAd=_appearedWithAd;
@property(nonatomic) BOOL appearedOnScreen; // @synthesize appearedOnScreen=_appearedOnScreen;
@property(nonatomic) BOOL isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) BOOL isDisplayingAd; // @synthesize isDisplayingAd=_isDisplayingAd;
@property(retain, nonatomic) NSString *adUnitIdentifier; // @synthesize adUnitIdentifier=_adUnitIdentifier;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
@property(readonly, nonatomic) unsigned long long tileInfoType;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic) BOOL pageable;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)commonInit;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithAdType:(long long)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

