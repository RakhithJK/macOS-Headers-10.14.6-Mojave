//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec
{
    PXLabelSpec *_titleLabelSpec;
    PXLabelSpec *_subtitleLabelSpec;
    double _interLabelSpacing;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    struct NSEdgeInsets _padding;
}

@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline; // @synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline;
@property(nonatomic) double interLabelSpacing; // @synthesize interLabelSpacing=_interLabelSpacing;
@property(retain, nonatomic) PXLabelSpec *subtitleLabelSpec; // @synthesize subtitleLabelSpec=_subtitleLabelSpec;
@property(retain, nonatomic) PXLabelSpec *titleLabelSpec; // @synthesize titleLabelSpec=_titleLabelSpec;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

