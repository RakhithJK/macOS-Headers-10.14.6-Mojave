//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintInternal, FRFontManager, NFLGapTileInfo;
@protocol FCNewsAppConfiguration, FRFeedLayoutStorage;

@interface FRFeedLayoutBlueprintExpandHeadlineGapOperation : FCOperation
{
    BOOL _lightweightOnly;
    BOOL _cachedOnly;
    FRFeedCollectionViewLayoutBlueprint *_layoutBlueprint;
    NFLGapTileInfo *_headlineGapTileInfo;
    id <FRFeedLayoutStorage> _feedLayoutStorage;
    id <FCNewsAppConfiguration> _appConfiguration;
    FCCloudContext *_cloudContext;
    FRFontManager *_fontManager;
    double _desiredLength;
    unsigned long long _preferredGapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _gapExpansionCompletionHandler;
    Class _viewportExpandGapOperationClass;
    CDUnknownBlockType _commitLayoutsHandler;
    FRFeedCollectionViewLayoutBlueprintInternal *_resultBlueprint;
}

@property(copy) FRFeedCollectionViewLayoutBlueprintInternal *resultBlueprint; // @synthesize resultBlueprint=_resultBlueprint;
@property(copy) CDUnknownBlockType commitLayoutsHandler; // @synthesize commitLayoutsHandler=_commitLayoutsHandler;
@property(retain) Class viewportExpandGapOperationClass; // @synthesize viewportExpandGapOperationClass=_viewportExpandGapOperationClass;
@property(copy) CDUnknownBlockType gapExpansionCompletionHandler; // @synthesize gapExpansionCompletionHandler=_gapExpansionCompletionHandler;
@property BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property BOOL lightweightOnly; // @synthesize lightweightOnly=_lightweightOnly;
@property long long gapExpansionPolicy; // @synthesize gapExpansionPolicy=_gapExpansionPolicy;
@property unsigned long long preferredGapExpansionDirection; // @synthesize preferredGapExpansionDirection=_preferredGapExpansionDirection;
@property double desiredLength; // @synthesize desiredLength=_desiredLength;
@property(retain) FRFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(retain) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain) id <FRFeedLayoutStorage> feedLayoutStorage; // @synthesize feedLayoutStorage=_feedLayoutStorage;
@property(copy) NFLGapTileInfo *headlineGapTileInfo; // @synthesize headlineGapTileInfo=_headlineGapTileInfo;
@property(copy) FRFeedCollectionViewLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)initWithViewportExpandOperationClass:(Class)arg1;
- (id)init;

@end

