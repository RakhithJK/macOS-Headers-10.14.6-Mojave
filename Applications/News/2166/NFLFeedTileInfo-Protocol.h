//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NFCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NFLHeadlineTileInfo, NSArray, NSString;
@protocol FCHeadlineProviding, NFLFeedTileInfo;

@protocol NFLFeedTileInfo <NSObject, NFCopying>
@property(readonly, copy, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NFLHeadlineTileInfo *feedTileInfoForBookmarking;
@property(readonly, nonatomic) NSArray *underlyingFeedElements;
@property(readonly, nonatomic) unsigned long long bookmarkOffsetType;
@property(readonly, nonatomic) BOOL pageable;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long tileInfoType;
- (id <NFLFeedTileInfo>)updatedTileInfoWithNewHeadline:(id <FCHeadlineProviding>)arg1;
@end

