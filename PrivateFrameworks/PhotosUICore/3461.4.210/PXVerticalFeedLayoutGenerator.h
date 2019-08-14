//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXFeedLayoutGenerator.h>

@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator
{
    struct CGPoint _origin;
    struct PXTileInfo _enqueuedCaptionTileInfo;
    BOOL _shouldDisplayCaptionsBelowBatches;
    double _referenceWidth;
}

@property(nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // @synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches;
@property(nonatomic) double referenceWidth; // @synthesize referenceWidth=_referenceWidth;
- (void)_willAddRowWithFirstTileInfo:(struct PXTileInfo)arg1;
- (BOOL)_addSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (BOOL)_addRowWithTiles:(struct PXTileInfo *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2 useMagneticGuidelines:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (BOOL)_addRowWithContiguousTiles:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (BOOL)_dequeueCaption;
- (BOOL)_hasEnqueuedCaption;
- (void)_enqueueCaptionWithTileInfo:(struct PXTileInfo)arg1;
- (BOOL)_isAtEndOfRow;
- (BOOL)_hasLeftSuboptimalRow;
- (BOOL)_scanTripletWithRearrangment:(struct PXTileInfo *)arg1;
- (BOOL)_scanTripletWithLargeLead:(struct PXTileInfo *)arg1;
- (BOOL)_scanNonPanoramaSequence:(struct PXTileInfo *)arg1 count:(long long)arg2;
- (BOOL)_scanSpecialSequenceRow:(struct PXTileInfo *)arg1 count:(long long *)arg2;
- (BOOL)_scanSpecialSequenceBlock:(struct PXTileInfo *)arg1;
- (BOOL)_scanTileTriplet:(struct PXTileInfo *)arg1;
- (BOOL)_scanTilePair:(struct PXTileInfo *)arg1;
- (BOOL)_scanTileRequiringNewRow:(struct PXTileInfo *)arg1;
- (BOOL)_scanTileRequiringFullWidth:(struct PXTileInfo *)arg1;
- (BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg1 rowParsed:(char *)arg2;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTileRequiringFullWidth;
- (BOOL)_parseTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseSingleTile;
- (double)referenceDistanceForMagneticGuidelines;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (void)willParseTiles;

@end

