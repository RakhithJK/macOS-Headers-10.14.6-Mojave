//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString, NUAdBannerView;

@interface NUVideoAdHistoryEventTracker : NSObject <NUVideoPlayerEventTracker>
{
    NUAdBannerView *_mostRecentBannerView;
}

@property(retain, nonatomic) NUAdBannerView *mostRecentBannerView; // @synthesize mostRecentBannerView=_mostRecentBannerView;
- (void).cxx_destruct;
- (void)clearHistory;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)loadingFinishedForVideoAdWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

