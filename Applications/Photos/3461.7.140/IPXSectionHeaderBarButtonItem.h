//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UXKit/UXBarButtonItem.h>

@class MOPhotosSupplementaryHeader, _IPXSectionHeaderBarButtonItemHeader;

@interface IPXSectionHeaderBarButtonItem : UXBarButtonItem
{
    MOPhotosSupplementaryHeader *_sectionHeader;
    double _height;
    double _firstBaselineOffsetFromTop;
}

@property(nonatomic) double firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) MOPhotosSupplementaryHeader *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
- (void).cxx_destruct;
- (double)preferredSpacingToItem:(id)arg1 proposedSpacing:(double)arg2;
- (void)sectionHeaderPropertiesDidChange;
@property(readonly, nonatomic) _IPXSectionHeaderBarButtonItemHeader *customHeader;
- (id)init;

@end

