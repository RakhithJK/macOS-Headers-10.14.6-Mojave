//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MOAssetsView, MOMediaItem, MOMediaSection, NSIndexPath, NSString;

@protocol MOAssetsViewDataSource <NSObject>
- (MOMediaItem *)assetsView:(MOAssetsView *)arg1 mediaItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)assetsView:(MOAssetsView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSString *)assetsView:(MOAssetsView *)arg1 supplementaryViewReuseIdentifierOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (NSString *)assetsView:(MOAssetsView *)arg1 cellReuseIdentifierAtIndexPath:(NSIndexPath *)arg2;
- (MOMediaSection *)assetsView:(MOAssetsView *)arg1 mediaSectionAtIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfSectionsInAssetsView:(MOAssetsView *)arg1;
@end

