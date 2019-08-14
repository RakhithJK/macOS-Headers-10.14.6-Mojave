//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutBlueprintPrewarmModifier.h"

@class FRFeedAdInventory, FRRestoredBlueprintContent, NFLFeedSettings, TSBlockingPluginManager;

@interface FRFeedCollectionViewLayoutBlueprintResetModifier : FRFeedCollectionViewLayoutBlueprintPrewarmModifier
{
    FRRestoredBlueprintContent *_contentToRestore;
    NFLFeedSettings *_feedSettings;
    FRFeedAdInventory *_feedAdInventory;
    TSBlockingPluginManager *_pluginManager;
    struct CGRect _bounds;
}

@property(retain, nonatomic) TSBlockingPluginManager *pluginManager; // @synthesize pluginManager=_pluginManager;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) FRFeedAdInventory *feedAdInventory; // @synthesize feedAdInventory=_feedAdInventory;
@property(copy, nonatomic) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(retain, nonatomic) FRRestoredBlueprintContent *contentToRestore; // @synthesize contentToRestore=_contentToRestore;
- (void).cxx_destruct;
- (BOOL)restoreContent:(id)arg1 inBlueprint:(id)arg2;
- (id)insertAdsIntoBlueprint:(id)arg1;
- (void)modifyBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithBookmarkProvider:(CDUnknownBlockType)arg1 bounds:(struct CGRect)arg2 feed:(id)arg3 feedSettings:(id)arg4 feedDataStorage:(id)arg5 feldsparContext:(id)arg6 feedAdInventory:(id)arg7 contentToRestore:(id)arg8 buttonController:(id)arg9 overloadBlueprint:(id)arg10 pluginManager:(id)arg11 topVideosPluginFactory:(id)arg12 moreVideosPluginFactory:(id)arg13 channelIssuesPluginFactory:(id)arg14 magazinesPluginFactory:(id)arg15 subscriptionPlacardCreator:(id)arg16;

@end

