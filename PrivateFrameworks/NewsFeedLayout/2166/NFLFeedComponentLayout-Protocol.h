//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsFeedLayout/NSCopying-Protocol.h>
#import <NewsFeedLayout/NSObject-Protocol.h>

@class NFLFeedSettings, NSArray, NSSet;

@protocol NFLFeedComponentLayout <NSObject, NSCopying>
@property(readonly, nonatomic) unsigned long long columnSpan;
@property(readonly, nonatomic) unsigned long long rowSpan;
@property(readonly, copy, nonatomic) NSArray *tileInfosUsed;
@property(readonly, nonatomic) double rank;
- (NSSet *)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(NFLFeedSettings *)arg4;
@end

