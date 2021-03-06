//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes
{
    BOOL _dummy;
    BOOL _groupHeader;
    BOOL _needsPaddingForIndexScrubber;
    BOOL _groupShowsAlternativeText;
    BOOL _secondaryCandidateAppearance;
    BOOL _emphasizedAppearance;
    int _candidatesVisualStyle;
    NSIndexPath *_candidateIndexPath;
    CDStruct_227bb23d _visualStyling;
    unsigned long long _candidateNumber;
    unsigned long long _rowIndex;
    unsigned long long _edges;
    struct CGSize _rowSize;
}

@property(nonatomic) BOOL emphasizedAppearance; // @synthesize emphasizedAppearance=_emphasizedAppearance;
@property(nonatomic) BOOL secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;
@property(nonatomic) BOOL groupShowsAlternativeText; // @synthesize groupShowsAlternativeText=_groupShowsAlternativeText;
@property(nonatomic) BOOL needsPaddingForIndexScrubber; // @synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property(nonatomic) BOOL groupHeader; // @synthesize groupHeader=_groupHeader;
@property(nonatomic) BOOL dummy; // @synthesize dummy=_dummy;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_227bb23d visualStyling; // @synthesize visualStyling=_visualStyling;
@property(retain, nonatomic) NSIndexPath *candidateIndexPath; // @synthesize candidateIndexPath=_candidateIndexPath;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)representedElementCategory;
- (id)init;

@end

