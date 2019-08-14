//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAsset, AVPlayerView, NSArray, NSSharingService, NSString, NSURL;

@protocol AVSharingServicesDelegate <NSObject>

@optional
- (BOOL)playerView:(AVPlayerView *)arg1 canShareCompositionWithService:(NSSharingService *)arg2;
- (NSString *)titleOfAssetToShareForPlayerView:(AVPlayerView *)arg1;
- (NSURL *)fileURLForRenderedAssetToShareForPlayerView:(AVPlayerView *)arg1;
- (AVAsset *)assetToShareForPlayerView:(AVPlayerView *)arg1 videoComposition:(id *)arg2 audioMix:(id *)arg3;
- (NSArray *)proposedServicesForPlayerView:(AVPlayerView *)arg1 fileURLForItemToShare:(NSURL *)arg2;
@end

