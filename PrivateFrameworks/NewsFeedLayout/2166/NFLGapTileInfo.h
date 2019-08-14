//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeedLayout/NFLFeedTileInfo-Protocol.h>

@class NFLHeadlineTileInfo, NSArray, NSString;

@interface NFLGapTileInfo : NSObject <NFLFeedTileInfo>
{
    NSString *_identifier;
    NSArray *_underlyingFeedElements;
    NSString *_groupIdentifier;
}

@property(readonly, copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(readonly, nonatomic) NSArray *underlyingFeedElements; // @synthesize underlyingFeedElements=_underlyingFeedElements;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)updatedTileInfoWithNewHeadline:(id)arg1;
@property(readonly, nonatomic) unsigned long long tileInfoType;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic) BOOL pageable;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 groupIdentifier:(id)arg2 underlyingFeedElements:(id)arg3;
- (id)initWithGroupIdentifier:(id)arg1 underlyingFeedElements:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

