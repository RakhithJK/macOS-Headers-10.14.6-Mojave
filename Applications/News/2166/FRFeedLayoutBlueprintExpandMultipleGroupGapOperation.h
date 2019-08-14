//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FRFeedCollectionViewLayoutBlueprint, FRFontManager, NFLGapTileInfo, NSMutableSet;
@protocol FCNewsAppConfiguration, FRFeedLayoutStorage;

@interface FRFeedLayoutBlueprintExpandMultipleGroupGapOperation : FCOperation
{
    BOOL _cachedOnly;
    BOOL _lightweightOnly;
    BOOL _offlineMode;
    FRFeedCollectionViewLayoutBlueprint *_layoutBlueprint;
    NFLGapTileInfo *_groupGapTileInfo;
    id <FRFeedLayoutStorage> _feedLayoutStorage;
    id <FCNewsAppConfiguration> _appConfiguration;
    FCCloudContext *_cloudContext;
    FRFontManager *_fontManager;
    double _desiredLength;
    CDUnknownBlockType _doneTest;
    unsigned long long _preferredGapExpansionDirection;
    CDUnknownBlockType _gapExpansionCompletionHandler;
    FRFeedCollectionViewLayoutBlueprint *_resultBlueprint;
    NSMutableSet *_resultModifiedLayoutInfoIDs;
}

@property(retain) NSMutableSet *resultModifiedLayoutInfoIDs; // @synthesize resultModifiedLayoutInfoIDs=_resultModifiedLayoutInfoIDs;
@property(copy) FRFeedCollectionViewLayoutBlueprint *resultBlueprint; // @synthesize resultBlueprint=_resultBlueprint;
@property(copy) CDUnknownBlockType gapExpansionCompletionHandler; // @synthesize gapExpansionCompletionHandler=_gapExpansionCompletionHandler;
@property BOOL offlineMode; // @synthesize offlineMode=_offlineMode;
@property BOOL lightweightOnly; // @synthesize lightweightOnly=_lightweightOnly;
@property BOOL cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property unsigned long long preferredGapExpansionDirection; // @synthesize preferredGapExpansionDirection=_preferredGapExpansionDirection;
@property(copy, nonatomic) CDUnknownBlockType doneTest; // @synthesize doneTest=_doneTest;
@property double desiredLength; // @synthesize desiredLength=_desiredLength;
@property(retain) FRFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(retain) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain) id <FRFeedLayoutStorage> feedLayoutStorage; // @synthesize feedLayoutStorage=_feedLayoutStorage;
@property(copy) NFLGapTileInfo *groupGapTileInfo; // @synthesize groupGapTileInfo=_groupGapTileInfo;
@property(copy) FRFeedCollectionViewLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
- (void).cxx_destruct;
- (void)_expandGroupGap:(id)arg1 inBlueprint:(id)arg2 withDesiredLength:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end
