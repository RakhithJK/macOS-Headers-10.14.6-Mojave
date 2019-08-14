//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRNewsReferralItem-Protocol.h"

@class FCVideoGroupsConfig, FRNewsReferralItemWidgetArticleList, FRNewsReferralItemWidgetVideoPlaylistEncodableElement, NSArray, NTPBDiscoverMoreVideosInfo;
@protocol NSSecureCoding;

@interface FRNewsReferralItemWidgetVideoPlaylist : NSObject <FRNewsReferralItem>
{
    FRNewsReferralItemWidgetArticleList *_widgetArticleList;
    FRNewsReferralItemWidgetVideoPlaylistEncodableElement *_myEncodableElement;
}

+ (Class)encodableElementClass;
+ (id)newsReferralItemWidgetVideoPlaylist:(id)arg1;
@property(readonly, copy, nonatomic) FRNewsReferralItemWidgetVideoPlaylistEncodableElement *myEncodableElement; // @synthesize myEncodableElement=_myEncodableElement;
@property(readonly, copy, nonatomic) FRNewsReferralItemWidgetArticleList *widgetArticleList; // @synthesize widgetArticleList=_widgetArticleList;
- (void).cxx_destruct;
- (id)initWithEncodableElement:(id)arg1 assetHandlesByRemoteURL:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *assetHandles;
@property(readonly, copy, nonatomic) id <NSSecureCoding> encodableElement;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long onboardingVersion;
@property(readonly, nonatomic) double prerollLoadingTimeout;
@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property(readonly, copy, nonatomic) FCVideoGroupsConfig *videoGroupsConfig;
@property(readonly, nonatomic) BOOL preferredMuteState;
- (id)initWithWidgetArticleList:(id)arg1 preferredMuteState:(BOOL)arg2 videoGroupsConfig:(id)arg3 discoverMoreVideosInfo:(id)arg4 prerollLoadingTimeout:(double)arg5 onboardingVersion:(long long)arg6;
- (id)init;
- (id)ts_newsReferralItemWidgetVideoPlaylist;

@end

