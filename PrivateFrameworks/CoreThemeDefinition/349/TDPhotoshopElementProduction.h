//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDElementProduction.h>

#import <CoreThemeDefinition/TDElementAttributes-Protocol.h>

@class CUIImage, CUIPSDImageRef, NSDate, NSMutableAttributedString, TDPhotoshopAsset;

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes>
{
    NSMutableAttributedString *log;
    CUIPSDImageRef *psdImageRef;
    NSDate *_cachedImageDate;
    CUIImage *_edgeMetricsMask;
    CUIImage *_textMetricsMask;
    CUIImage *_baselineMetricsMask;
    CUIImage *_auxiliary1MetricsMask;
    CUIImage *_auxiliary2MetricsMask;
    BOOL _didCheckForMetricsMasks;
}

+ (unsigned int)sliceColumnsPerRendition:(long long)arg1;
+ (unsigned int)sliceRowsPerRendition:(long long)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)_layerMappingForPhotoshopLayer:(long long)arg1 drawingLayer:(long long)arg2;
- (id)dataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (BOOL)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id *)arg3;
- (void)appendToLog:(id)arg1;
- (id)log;
- (id)auxiliary2MetricsMaskWithDocument:(id)arg1;
- (id)auxiliary1MetricsMaskWithDocument:(id)arg1;
- (id)baselineMetricsMaskWithDocument:(id)arg1;
- (id)textMetricsMaskWithDocument:(id)arg1;
- (id)edgeMetricsMaskWithDocument:(id)arg1;
- (void)_loadMetricsMasksWithDocument:(id)arg1;
- (id)psdImageRefWithDocument:(id)arg1;
- (void)fillIterationKeyAttribute:(id)arg1 iteration:(int)arg2 rowOrColumn:(int)arg3 document:(id)arg4;
- (void)getDrawingLayerIndices:(id *)arg1 themeLayers:(id *)arg2 lowestIndex:(long long *)arg3;
- (void)addDrawingLayerIndex:(id)arg1 themeLayer:(id)arg2 toIndices:(id)arg3 layers:(id)arg4 lowestIndex:(long long *)arg5;
- (id)associatedFileURLWithDocument:(id)arg1;
- (id)relativePath;
- (void)setRowIterationType:(id)arg1;
- (void)setColumnIterationType:(id)arg1;
- (void)setIsActive:(id)arg1;
- (id)baseKeySpec;
- (id)isActive;
- (id)rowIterationType;
- (id)columnIterationType;
- (void)setColumnCount:(id)arg1;
- (id)columnCount;
- (void)setRowCount:(id)arg1;
- (id)rowCount;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TDPhotoshopAsset *asset; // @dynamic asset;

@end

