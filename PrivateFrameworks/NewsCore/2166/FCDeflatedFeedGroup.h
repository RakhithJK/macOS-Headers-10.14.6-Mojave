//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedElement-Protocol.h>
#import <NewsCore/FCFeedGroupOutlining-Protocol.h>

@class FCColor, FCColorGradient, FCFeedEdition, FCSharedStringIndex, NSArray, NSDate, NSString, NTPBDiscoverMoreVideosInfo, NTPBFeedViewportGroup;
@protocol FCForYouMagazineFeedGroup;

@interface FCDeflatedFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining>
{
    NSArray *_headlines;
    NSArray *_videoPlaylistHeadlines;
    NTPBFeedViewportGroup *_pbGroup;
    FCSharedStringIndex *_sharedStrings;
}

@property(readonly, nonatomic) FCSharedStringIndex *sharedStrings; // @synthesize sharedStrings=_sharedStrings;
@property(readonly, nonatomic) NTPBFeedViewportGroup *pbGroup; // @synthesize pbGroup=_pbGroup;
@property(readonly, copy, nonatomic) NSArray *videoPlaylistHeadlines; // @synthesize videoPlaylistHeadlines=_videoPlaylistHeadlines;
@property(readonly, copy, nonatomic) NSArray *headlines; // @synthesize headlines=_headlines;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <FCForYouMagazineFeedGroup> magazineGroup;
@property(readonly, copy, nonatomic) NSArray *issueIDs;
@property(readonly, copy, nonatomic) NSString *backingTagID;
@property(readonly, nonatomic) unsigned long long mergeID;
@property(readonly, nonatomic) unsigned long long options;
@property(readonly, copy, nonatomic) FCFeedEdition *edition;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property(readonly, copy, nonatomic) FCColorGradient *backgroundGradient;
@property(readonly, copy, nonatomic) FCColorGradient *sauceGradient;
@property(readonly, copy, nonatomic) FCColor *cardBackgroundColor;
@property(readonly, copy, nonatomic) FCColor *titleColor;
@property(readonly, copy, nonatomic) NSString *ctaText;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *eyebrowText;
@property(readonly, nonatomic) long long groupType;
@property(readonly, copy, nonatomic) NSString *sourceIdentifier;
- (BOOL)isGap;
@property(readonly, nonatomic) long long feedElementType;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPBGroup:(id)arg1 sharedStrings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

