//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FRFeedCollectionViewLayoutBlueprint, FRFontManager, NFLFeedSettings, NSObject;
@protocol FCNewsAppConfiguration, FRFeedCollectionViewLayoutSectionDescriptorProviding, FRFeedLayoutBlueprintBookmark, FRFeedLayoutStorage;

@interface FRFeedLayoutBlueprintPrewarmOperation : FCOperation
{
    BOOL _cachedOnly;
    NSObject<FRFeedLayoutBlueprintBookmark> *_blueprintBookmark;
    unsigned long long _screenfulsAtTopPrewarmCount;
    unsigned long long _screenfulsAbovePrewarmCount;
    unsigned long long _screenfulsBelowPrewarmCount;
    FCFeedDescriptor *_feedDescriptor;
    NFLFeedSettings *_feedSettings;
    id <FRFeedCollectionViewLayoutSectionDescriptorProviding> _layoutSectionDescriptorProvider;
    id <FRFeedLayoutStorage> _feedLayoutStorage;
    id <FCNewsAppConfiguration> _appConfiguration;
    FCCloudContext *_cloudContext;
    FRFontManager *_fontManager;
    CDUnknownBlockType _prewarmingCompletionHandler;
    FRFeedCollectionViewLayoutBlueprint *_resultBlueprint;
}

@property(copy) FRFeedCollectionViewLayoutBlueprint *resultBlueprint; // @synthesize resultBlueprint=_resultBlueprint;
@property(copy) CDUnknownBlockType prewarmingCompletionHandler; // @synthesize prewarmingCompletionHandler=_prewarmingCompletionHandler;
@property BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(retain) FRFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(retain) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain) id <FRFeedLayoutStorage> feedLayoutStorage; // @synthesize feedLayoutStorage=_feedLayoutStorage;
@property(retain) id <FRFeedCollectionViewLayoutSectionDescriptorProviding> layoutSectionDescriptorProvider; // @synthesize layoutSectionDescriptorProvider=_layoutSectionDescriptorProvider;
@property(copy) NFLFeedSettings *feedSettings; // @synthesize feedSettings=_feedSettings;
@property(copy) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property unsigned long long screenfulsBelowPrewarmCount; // @synthesize screenfulsBelowPrewarmCount=_screenfulsBelowPrewarmCount;
@property unsigned long long screenfulsAbovePrewarmCount; // @synthesize screenfulsAbovePrewarmCount=_screenfulsAbovePrewarmCount;
@property unsigned long long screenfulsAtTopPrewarmCount; // @synthesize screenfulsAtTopPrewarmCount=_screenfulsAtTopPrewarmCount;
@property(copy) NSObject<FRFeedLayoutBlueprintBookmark> *blueprintBookmark; // @synthesize blueprintBookmark=_blueprintBookmark;
- (void).cxx_destruct;
- (void)_satisfyRequirementInRelativeOrder:(unsigned long long)arg1 withBlueprint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_satisfyTopOfFeedRequirementWithBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_satisfyRequirementsWithBlueprint:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchViewportWithCountAbove:(unsigned long long)arg1 countBelow:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_blueprintWithViewport:(id)arg1 sections:(id)arg2;
- (id)_sectionWithGroup:(id)arg1 inFirstPosition:(BOOL)arg2 topmostGroup:(id)arg3 regions:(id)arg4;
- (id)_sectionWithGroup:(id)arg1 inFirstPosition:(BOOL)arg2 topmostGroup:(id)arg3 persistedLayoutRegionsByTileInfoID:(id)arg4;
- (void)_handleNoPersistedRegionForPrewarmingTarget;
- (void)_handlePersistedRegionForPrewarmingTargetWithBatch:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

